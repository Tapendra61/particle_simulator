#pragma once
#include"particle.h"
#include"raylib.h"
#include<vector>
#include<iostream>

class Grid {
private:
	Color debug_color{50, 50, 50, 255};

public:
	int width;
	int cell_count;
	int cell_size;

	std::vector<Particle> particle_grid;

	Grid(int grid_width, int window_width);
	int mouse_to_grid_index() const;
	void debug_grid(int window_width) const;
};