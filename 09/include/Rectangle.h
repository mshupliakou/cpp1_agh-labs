#include <iostream>
#ifndef RECTANGLE_H
#define RECTANGLE_H

/// @brief describes a rectangle
class Rectangle{
    double length;
    double width;
    public:
    Rectangle(double length, double width):length(length), width(width){}
    Rectangle(std::pair<double, double> pair):length(pair.first), width(pair.second){}

    /// @brief opertor converts to std::pair<double, double>
    operator std::pair<double, double>() const{
        return {length, width};
    }

    /// @brief operator of comparing of rectangles
    /// @param r the second rectangle
    /// @return true if the first rectangle is bigger, else - false
    bool operator >(const Rectangle &r){
        return (length*width)>(r.length*r.width);
    }
     operator double(){
        return length*width;
    }
};
#endif