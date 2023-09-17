#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int drawingQuads() {
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
        
        glBegin(GL_QUADS);
        glVertex2f(-0.35f, 0.0f); // bottom-left
        glVertex2f(-0.35f, 0.2f); // top-left
        glVertex2f(-0.30f, 0.2f); // top-right
        glVertex2f(-0.30f, 0.0f); // bottom-right
        glEnd();
        glBegin(GL_QUADS);
        glVertex2f(-0.3f, 0.10f); // bottom-left
        glVertex2f(-0.3f, 0.20f); // top-left
        glVertex2f(-0.20f, 0.20f); // top-right
        glVertex2f(-0.20f, 0.1f); // bottom-right
        glEnd();


        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
}