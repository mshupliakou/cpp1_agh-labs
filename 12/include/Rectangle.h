#include <iostream>
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
/// @brief describes a rectangle thanks to base class Shape 
class Rectangle : public Shape {
    double length;
    double width;
    public:

    /// @brief counts an area of a rectangle
    /// @return area
    double Area();

    Rectangle(std::string name, double length, double(width)):Shape(name),length(length), width(width){}

    /// @brief overloading operator
    /// @param os 
    /// @param rec 
    /// @return overloaded operator os<<
    friend std::ostream& operator<<(std::ostream& os, Rectangle& rec){
        return os<<rec.name<<"(width: "<<rec.width<<", length: "<< rec.length<<")   Area: "<<rec.Area();
    }

    /// @brief overloading operator *
    /// @param d the number we want to scale our rectangle with
    /// @return a new rectangle whose length and width are scaled by d
    Rectangle operator*(double d) const;

    /// @brief overloading operator =
    /// @param rec 
    /// @return a rectangle whose charectiristics are the same as rec's
    Rectangle& operator=(const Rectangle& rec);
};



#endif