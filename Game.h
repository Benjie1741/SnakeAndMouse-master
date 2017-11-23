#pragma once

#include <iostream>
#include "Mouse.h"
#include "Snake.h"
//#include "Underground.h"
#include "UserInterface.h"
#include <string>
#include <sstream>

class Game
{
public:
	void set_up(UserInterface* pui);
	void run();
private:
	Mouse mouse_;
	Snake snake_;
	Underground underground_;
	UserInterface* p_ui;
	int key_;
	string prepare_grid();
	bool is_arrow_key_code(int keycode);
	void apply_rules();
	int find_hole_number_at_position(int x, int y);
	bool has_ended(char key);
	string prepare_end_message();
};