//--------------------------------
//include standard libraries
#include <iostream>		//for output and input
#include <assert.h>
#include "Game.h"

using namespace std;

//using OO approach
//---------------------------------
UserInterface ui;

int main()
{
	Game game;

	game.set_up(&ui);
	game.run();

	ui.hold_window();
	return 0;

	cout << "Test";
}