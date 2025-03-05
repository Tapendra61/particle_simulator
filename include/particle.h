#pragma once
#include"raylib.h"

enum ParticleType {
	Sand,
};

class Particle {
private:
	ParticleType type;
	Vector2 position;
};