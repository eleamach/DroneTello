from setuptools import find_packages
from setuptools import setup

setup(
    name='tello_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('tello_interfaces', 'tello_interfaces.*')),
)
