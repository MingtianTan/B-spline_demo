cmake_minimum_required(VERSION 3.8)
project(cpp_bs_demo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(cpp_bs_demo_interfaces REQUIRED)


# 声明可执行文件
add_executable(point_generator src/publisher.cpp)
ament_target_dependencies(point_generator 
    rclcpp 
    std_msgs 
    cpp_bs_demo_interfaces    # 添加对接口包的依赖
)

# 安装
install(TARGETS
  point_generator
  DESTINATION lib/${PROJECT_NAME})

# 测试
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()

