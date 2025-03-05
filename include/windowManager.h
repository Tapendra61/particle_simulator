#pragma once
#include"raylib.h"
#include<iostream>
#include"grid.h"
#include"input.h"

class WindowManager {
private:
	const int WIDTH;
	const int HEIGHT;
	const char* TITLE;
	const int FPS;
	Color background_color{ 70, 100, 70 , 255 };

public:
	Grid* grid = nullptr;

public:
	WindowManager(int WIDTH, int HEIGHT, const char* TITLE, int FPS) : WIDTH(WIDTH), HEIGHT(HEIGHT), TITLE(TITLE), FPS(FPS){}
	void run();
	void start();
	void update();
	void late_update();
	~WindowManager();
};