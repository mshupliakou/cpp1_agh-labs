#pragma once
#ifndef ANGLE_H
#define ANGLE_H
#include <iostream>
#include <cmath>
/// @brief class describes a certain angle 
class Angle{
    double angle_size;
    public:
    Angle():angle_size(0){}
    Angle(double smth){
        std::cout<<"Sorry, the program does not understand which scale you are trying to use."<<std::endl;
        std::cout<<"ERROR"<<std::endl;
        exit(1);
    }
    ~Angle(){}

    /// @brief the function creates an angle from radians
    /// @param radians the size of an angle in radians
    /// @return an object of Angle
    static Angle fromRadians(double radians);

    /// @brief the function creates an angle from degrees
    /// @param degs the size of an angle in degrees
    /// @return an object of Angle
    static Angle fromDegrees(double degs);

    /// @brief desplays the size of an angle in radians
    void print()const;
    
    /// @brief adds the size of another angle to the angle
    /// @param b another angle
    /// @return the angle whose size is the sum of two angles
    Angle& add(Angle b);

    /// @brief the function counts the size of an angle in degrees
    /// @return the size of an angle in degrees
    double toDeg() const;

    /// @brief the function finds the distance between two angles
    /// @param a the first angle
    /// @param b the second angle
    /// @return a new angle whose size is the difference between sizes of two angles
    static Angle distance(Angle a, Angle b);

    /// @brief the function counts the size of an angle in radians(indeed is just a getter)
    /// @return the size of an angle in radians
    double toRad() const;
}; 
#endif