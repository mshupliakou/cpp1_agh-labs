#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cmath>
/// @brief class describes a circle
class Circle {
    std::pair<double, double> point;
    double radius;
public:
    Circle(): point({0,0}), radius(1){
    }
    Circle(std::pair<double, double> point, double radius): point(point), radius(radius){
        if(radius<0){
            std::cout<<"Radius can not be negative. ERROR"<<std::endl;
            exit(1);
        }
    }
    /// @brief function which displays the info about a circle
    void print() const;

    /// @brief the function which calculates an area of a circle
    /// @return circle's area
    double area() const;

    /// @brief the function which calculates a perimetr of a circle
    /// @return circle's perimetr
    double perimeter() const;

    /// @brief the function which moves the centre of a circle
    /// @param dx the distance which we will add to x coordinate
    /// @param dy the distance which we will add to y coordinate
    /// @return new circle with new centre coordinates
    Circle& translate(double dx, double dy);

    /// @brief operator of comparing for objects of Circle
    /// @param b the circle with whom we compare size of two circles 
    /// @return true/false
    bool operator==(const Circle& b) const;
};

#endif 
