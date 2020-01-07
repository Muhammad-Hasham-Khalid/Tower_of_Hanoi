#pragma once

class Cube{
    private:
    double length_;
    char color_;

    public:
    double getLength() const;
    double getvolume() const;
    double getsurfacearea() const;

    void setlength(double);

    Cube(double, char);
    Cube();
};
