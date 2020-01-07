#include "cube.h"

Cube::Cube(double length, char color){
    this->length_ = length;
    this->color_ = color;
}

double Cube::getLength()const{
    return this->length_;
}

double Cube::getvolume()const{
	return length_ * length_ * length_;
}

double Cube::getsurfacearea() const{
	return 6 * length_ * length_;
}