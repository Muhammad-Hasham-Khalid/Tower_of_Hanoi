#pragma once
#include <iostream>
#include <vector>
#include "stack.h"

class Game
{
private:
	std::vector<Stack> stacks_;

public:
	Game();
	void solve();
	void move(int, int);
	void print();

	friend std::ostream& operator << (std::ostream& os, const Game& game);
	
	~Game();
};

