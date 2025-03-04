#pragma once
#include"raylib.h"
#include<iostream>

class WindowManager {
private:
	const int WIDTH;
	const int HEIGHT;
	const char* TITLE;
	const int FPS;
public:
	WindowManager(int WIDTH, int HEIGHT, const char* TITLE, int FPS) : WIDTH(WIDTH), HEIGHT(HEIGHT), TITLE(TITLE), FPS(FPS){}
	void run();
	void start();
	void update();
	void late_update();
	~WindowManager();
};