#include"windowManager.h"

void WindowManager::run() {
	InitWindow(WIDTH, HEIGHT, TITLE);
	SetTargetFPS(FPS);

	start();
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(background_color);

		update();
		late_update();

		EndDrawing();
	}

	CloseWindow();
}

void WindowManager::start() {
	grid = new Grid(8, WIDTH);
}

void WindowManager::update() {
	int index = grid->mouse_to_grid_index();
	std::cout << "Grid Index: " << index << std::endl;
}

void WindowManager::late_update() {
	grid->debug_grid(WIDTH);
}

WindowManager::~WindowManager() {
	delete grid;
}