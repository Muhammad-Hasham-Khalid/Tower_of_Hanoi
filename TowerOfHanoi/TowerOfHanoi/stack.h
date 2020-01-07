#pragma once

#include <iostream>
#include <vector>
#include "cube.h"

class Stack{
    private:
		std::vector<Cube> cubes_;

    public:
		void push_back(const Cube & cube);
		Cube removeTop();
		Cube& peekTop();
		unsigned size() const;

    friend std::ostream& operator << (std::ostream& os, const Stack& stack);
};