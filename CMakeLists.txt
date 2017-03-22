cmake_minimum_required (VERSION 2.8.11)
project(opengl_example_1)

set (SOURCES
	main.cpp)
	
set (HEADERS
	)

add_executable(opengl_example_1 ${SOURCES})
target_include_directories(opengl_example_1 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/glfw_for_labs/include)
target_link_libraries(opengl_example_1 ${CMAKE_CURRENT_SOURCE_DIR}/glfw_for_labs/lib-vc2015/glfw3dll.lib opengl32.lib)