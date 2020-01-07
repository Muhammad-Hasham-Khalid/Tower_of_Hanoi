#include "Game.h"

Game::Game(){
	for (int i = 0; i < 3; i++){
		Stack stackOfCubes;
		stacks_.push_back(stackOfCubes);
	}

	// Create the four cubes, placing each on the each on the [0]th stack
	Cube blue(4, 'B');
	stacks_[0].push_back(blue);

	Cube orange(3, 'O');
	stacks_[0].push_back(orange);

	Cube purple(2, 'P');
	stacks_[0].push_back(purple);

	Cube yellow(1, 'Y');
	stacks_[0].push_back(yellow);
}

Game::~Game(){}

void Game::solve(){
	while (stacks_[2].size() != 4){
		move(0, 1); 
		if (stacks_[2].size() == 4) break;
		move(0, 2);
		if (stacks_[2].size() == 4) break;
		move(1, 2);
	}
}

void Game::move(int x, int y){
	if (stacks_[x].size() == 0)
		stacks_[x].push_back(stacks_[y].removeTop());
	else if (stacks_[y].size() == 0)
		stacks_[y].push_back(stacks_[x].removeTop());
	else if (stacks_[x].peekTop().getLength() < stacks_[y].peekTop().getLength())
		stacks_[y].push_back(stacks_[x].removeTop());
	else if (stacks_[y].peekTop().getLength() < stacks_[x].peekTop().getLength())
		stacks_[x].push_back(stacks_[y].removeTop());
	std::cout << *this << std::endl;
}

std::ostream& operator<<(std::ostream & os, const Game & game) {
	for (unsigned i = 0; i < game.stacks_.size(); i++) {
		os << "Stack[" << i << "]: " << game.stacks_[i];
	}
	return os;
}
