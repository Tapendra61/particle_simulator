#include"grid.h"

Grid::Grid(int grid_width, int window_width) {
	width = grid_width;
	cell_count = width * width;
	cell_size = (int)(window_width / width);
	particle_grid.reserve(cell_count);
}

int Grid::mouse_to_grid_index() const {
	int index = 0;
	if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
		Vector2 mouse_pos = GetMousePosition();
		std::cout << "Mouse Pos: " << mouse_pos.x << ", " << mouse_pos.y << std::endl;
		index = (int)(mouse_pos.x / cell_size) + ((int)(mouse_pos.y / cell_size) * width);
	}

	return index;
}

void Grid::debug_grid(int window_width) const {
	for (int i = 0; i < window_width; i += cell_size) {
		DrawLine(i, 0, i, window_width, debug_color);
	}

	for (int i = 0; i < window_width; i += cell_size) {
		DrawLine(0, i, window_width, i, debug_color);
	}
}