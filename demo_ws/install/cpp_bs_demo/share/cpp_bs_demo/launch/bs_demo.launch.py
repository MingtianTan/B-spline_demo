from launch import LaunchDescription
from launch.actions import RegisterEventHandler
from launch.event_handlers import OnProcessStart
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    pkg_path = get_package_share_directory('cpp_bs_demo')
    urdf_path = os.path.join(pkg_path, 'urdf', 'ball_obstacle.urdf')
    rviz_config_path = os.path.join(pkg_path, 'rviz', 'demo.rviz')

    # RViz 节点先启动
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_path]
    )

    # 其他节点，等待 RViz 启动完成后再执行
    rsp_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='rsp',
        output='screen',
        parameters=[{'robot_description': open(urdf_path).read()}]
    )

    spline_node = Node(
        package='cpp_bs_demo',
        executable='point_generator',
        name='spline_publisher',
        output='screen'
    )

    return LaunchDescription([
        rviz_node,

        RegisterEventHandler(
            OnProcessStart(
                target_action=rviz_node,
                on_start=[
                    rsp_node,
                    spline_node
                ]
            )
        )
    ])
