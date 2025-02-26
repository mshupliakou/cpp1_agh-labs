#include <iostream>
#ifndef SHAPE_H
#define SHAPE_H

/// @brief describes a shape
class Shape{
    protected: std::string name;
    public:
    Shape(std::string name): name(name){}

    /// @brief virtual function to find an area of a shape
    /// @return area. for non certain shape it is equal to 0
    virtual double Area(){
        return 0;
    }

    /// @brief overload operator 
    /// @param os 
    /// @param shape 
    /// @return overloaded operator <<
    friend std::ostream& operator<<(std::ostream& os, Shape & shape){
        return os<<shape.name;
    }
};

#endif