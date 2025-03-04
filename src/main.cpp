#include<iostream>
#include"windowManager.h"
int main(void) {
	int width = 800;
	int height = 800;
	const char* title = "Particle Simulator";
	int fps = 60;

	WindowManager window_manager{width, height, title, fps};
	window_manager.run();

	return 0;
}