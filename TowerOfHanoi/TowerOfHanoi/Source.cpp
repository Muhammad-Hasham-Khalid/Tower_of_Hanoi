#include "Game.h"

int main()
{
	Game game;
	std::cout << "Initial game state: " << std::endl;
	std::cout << game << std::endl;
	
	game.solve();

	std::cout << "Final game state: " << std::endl;
	std::cout << game << std::endl;

	std::cin.get();
	return 0;
}