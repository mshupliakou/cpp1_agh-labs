#include <iostream>
#include <vector>
#include "Present.h"
#include "Warehouse.h"
    void Warehouse::addPresent(const Present& present){
        presents.push_back(present);
    }
    void Warehouse::showAll() const{
        for(Present u: presents){
            u.describe();
        }
    }
    int Warehouse::countPresents() const{
        return presents.size();
    }
    void Warehouse::findByRecipient(const std::string& recipient) const{
        for(Present u: presents){
            if(u.getRecipient()==recipient){
                u.describe();
            }
        }
    }