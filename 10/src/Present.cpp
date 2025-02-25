#include <iostream>
#include "Present.h"
    void Present::describe() const{
        std::cout<<"Prezent: "<<name<<", dla: "<<recipient<<std::endl;
    }
    std::string Present::getRecipient() const{
        return recipient;
    }