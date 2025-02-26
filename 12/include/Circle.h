#include <iostream>
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <cmath>
/// @brief describes a circle thanks to base class Shape 
class Circle : public Shape {
    double radius;
    public:
    /// @brief counts an area of a circle
    /// @return area
    double Area();

    Circle(std::string name, double radius):Shape(name), radius(radius){}

    /// @brief overloading operator
    /// @param os 
    /// @param circle 
    /// @return overloaded operator os<<
    friend std::ostream& operator<<(std::ostream& os, Circle& circle){
        return os<<circle.name<<"(radius: "<<circle.radius<<")   Area: "<<circle.Area();
    }

    /// @brief overloading operator +
    /// @param other 
    /// @return a circle whose radius is a sym of two circles
    Circle operator +(Circle& other) const;

    /// @brief overloading operator =
    /// @param other 
    /// @return a circle whose charectiristics are the same as other's
    Circle & operator =(const Circle& other);
    
};



#endif