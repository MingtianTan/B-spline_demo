from setuptools import find_packages
from setuptools import setup

setup(
    name='cpp_bs_demo_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('cpp_bs_demo_interfaces', 'cpp_bs_demo_interfaces.*')),
)
