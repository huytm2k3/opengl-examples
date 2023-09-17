#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "drawingTriangles.hpp"

int drawingTriangles() {
    GLFWwindow* window;
    if (!glfwInit()) return -1;

    window = glfwCreateWindow(640, 480, "My App", NULL, NULL);
    if (!window){
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (glewInit() != GLEW_OK) {
        std::cout << "Error when initialize GLEW" << std::endl;
    }

    float positions[6] = {

    };

    std::cout << glGetString(GL_VERSION) << std::endl;

    unsigned int buffer;
    glGenBuffers(1, &buffer);
    glBindBuffer(GL_ARRAY_BUFFER, buffer);


    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(0.5f, -0.5f);
        glVertex2f(0.0f, 0.5f);
        glEnd();


        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
}