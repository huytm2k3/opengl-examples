cmake_minimum_required(VERSION 3.10)
project(MyOpenGLProject)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)

add_executable(MyOpenGLApp main.cpp)

target_link_libraries(MyOpenGLApp ${OPENGL_gl_LIBRARY} GLEW::GLEW glfw)
