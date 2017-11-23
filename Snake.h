#pragma once
#include "constants.h"
#include "Mouse.h"
#include "RandomNumberGenerator.h"

class Snake {
public:
	Snake();
	~Snake();
	bool has_caught_mouse();
	void spot_mouse(Mouse* p_mouse);
	void chase_mouse();
	void position_at_random();
	char symbol_;
	int x_, y_;

private:
	Mouse* p_mouse_;
	RandomNumberGenerator rng_;
	void set_direction(int& dx, int& dy);
	void update_position(int dx, int dy);
	bool is_at_position(int x, int y);
};