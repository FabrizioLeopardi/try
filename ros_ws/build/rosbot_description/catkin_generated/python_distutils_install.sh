#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/root/Desktop/ros_ws/src/rosbot_description"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/root/Desktop/ros_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/root/Desktop/ros_ws/install/lib/python3/dist-packages:/root/Desktop/ros_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/root/Desktop/ros_ws/build" \
    "/usr/bin/python3" \
    "/root/Desktop/ros_ws/src/rosbot_description/setup.py" \
     \
    build --build-base "/root/Desktop/ros_ws/build/rosbot_description" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/root/Desktop/ros_ws/install" --install-scripts="/root/Desktop/ros_ws/install/bin"
