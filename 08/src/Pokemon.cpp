#include <iostream>
#include <string>
#include <string.h>
#include "Pokemon.h"
    Pokemon :: Pokemon(const Pokemon& p){
        name = p.name;
        type = p.type;
        level =p.level;
        std::cout<<"[Pokemon Copy Constructor] Copied "<<name<<std::endl;
    }