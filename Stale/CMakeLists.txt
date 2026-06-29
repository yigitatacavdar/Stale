cmake_minimum_required(VERSION 3.15)
project(Stale)
set(GSTREAMER_ROOT "C:/Program Files/gstreamer/1.0/msvc_x86_64")
add_executable(Stale Stale.cpp)
target_include_directories(Stale PRIVATE
    ${GSTREAMER_ROOT}/include/gstreamer-1.0
    ${GSTREAMER_ROOT}/include/glib-2.0
    ${GSTREAMER_ROOT}/lib/glib-2.0/include
)
target_link_directories(Stale PRIVATE
    ${GSTREAMER_ROOT}/lib
)
target_link_libraries(Stale PRIVATE
    gstreamer-1.0
    glib-2.0
    gobject-2.0
)