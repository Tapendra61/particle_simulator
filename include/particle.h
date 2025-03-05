#pragma once
#include"raylib.h"

enum ParticleType {
	None,
	Sand,
};

class Particle {
private:
	ParticleType type;
	Color color;
	Vector2 position;
};