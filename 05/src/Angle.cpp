#include <iostream>
#include "Angle.h"
#include <cmath>
    Angle Angle::fromRadians(double radians){
        std::cout<<"... creating angle from radians."<<std::endl;
        while(radians<0){
            radians+=2*M_PI;
        }
        while(radians>(2*M_PI)){
            radians-=2*M_PI;
        }
        Angle angle;
        angle.angle_size=radians;
        return angle;
    }
    Angle Angle:: fromDegrees(double degs){
        std::cout<<"... creating angle from degrees."<<std::endl;
        double radians=degs*M_PI/180;
        while(radians<0){
            radians+=2*M_PI;
        }
        while(radians>(2*M_PI)){
            radians-=2*M_PI;
        }
        Angle angle;
        angle.angle_size=radians;
        return angle;
    }
    void Angle:: print()const{
        std::cout<<"Angle [rad]: "<<angle_size<<std::endl;
    }
    Angle& Angle:: add(Angle b){
        angle_size=angle_size+b.angle_size;
        while(angle_size<0){
            angle_size+=2*M_PI;
        }
        while(angle_size>(2*M_PI)){
            angle_size-=2*M_PI;
        }
        return *this;
        
    }

    double Angle::toDeg() const{
        return 180*angle_size/M_PI;
    }
    Angle Angle::distance(Angle a, Angle b){
        return fromRadians(fabs(a.angle_size-b.angle_size));
    } 
    double Angle:: toRad() const{
        return angle_size;
    }