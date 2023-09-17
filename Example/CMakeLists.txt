cmake_minimum_required(VERSION 3.10)
project(MyOpenGLProject)

set(CMAKE_CXX_STANDARD 14)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)

file(GLOB SOURCES "*.cpp")

add_executable(MyOpenGLApp ${SOURCES})

target_link_libraries(MyOpenGLApp ${OPENGL_gl_LIBRARY} GLEW::GLEW glfw)

# Adding the include directories
target_include_directories(MyOpenGLApp PRIVATE ${OPENGL_INCLUDE_DIR})
target_include_directories(MyOpenGLApp PRIVATE ${GLEW_INCLUDE_DIRS})
target_include_directories(MyOpenGLApp PRIVATE ${GLFW_INCLUDE_DIRS})