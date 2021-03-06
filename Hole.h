#pragma once

#include <cassert>
#include <vector>
#include "constants.h"

using namespace std;

class Hole {
public:
	//constructors
	Hole();
	Hole(int x, int y);
	//assessors
	int get_x();
	int get_y();
	char get_symbol() const;
	bool is_at_position(int x, int y);
private:
	static const int MAXHOLES; //number of holes in underground
							   //data members
	char symbol_;
	int x_, y_;
};