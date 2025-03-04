#include"window_manager.h"

void WindowManager::run() {
	InitWindow(WIDTH, HEIGHT, TITLE);
	SetTargetFPS(FPS);

	start();
	while (!WindowShouldClose()) {
		BeginDrawing();

		update();
		late_update();

		EndDrawing();
	}
}

void WindowManager::start() {

}

void WindowManager::update() {

}

void WindowManager::late_update() {

}

WindowManager::~WindowManager() {

}