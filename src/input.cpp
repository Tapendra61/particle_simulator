#include"input.h"

Vector2 get_click_pos() {
	if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
		return GetMousePosition();
	}

	return Vector2{-1, -1};
}