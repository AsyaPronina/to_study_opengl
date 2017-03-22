#include <iostream>
#include <GLFW\glfw3.h>

int main(int c, char* argv[])
{
	glfwInit();

	//Setting base profile 4.3 and forward compatible context
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	//End of setting

	//Creating of window
	GLFWwindow *window = glfwCreateWindow(500, 500, "First OpenGL window", nullptr, nullptr);

	//After creating the window, the OpenGL context has to be made active:
	glfwMakeContextCurrent(window);

	//Closed event loop
	while (!glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	
    std::cout << "Hello, World!" << std::endl;
	glfwTerminate();
	return 0;
}
