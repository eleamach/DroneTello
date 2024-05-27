from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='pypackage',
            namespace='pypackage1',
            executable='control',
            name='py'
        ),
        Node(
            package='rqt_gui',
            namespace='rqt1',
            executable='rqt_gui',
            name='rqt',
        )
    ])