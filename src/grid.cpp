#include"grid.h"

Grid::Grid(int grid_width, int window_width) {
	width = grid_width;
	cell_count = width * width;
	cell_size = (int)(window_width / width);
	particle_grid.reserve(cell_count);
}

void Grid::debug_grid(int window_width) {
	for (int i = 0; i < window_width; i += cell_size) {
		DrawLine(i, 0, i, window_width, debug_color);
	}

	for (int i = 0; i < window_width; i += cell_size) {
		DrawLine(0, i, window_width, i, debug_color);
	}
}