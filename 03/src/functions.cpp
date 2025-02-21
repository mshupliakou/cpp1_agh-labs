#include <iostream>
#include "globals.h"

/// @brief the function which adds a globalvalue to number
void addValue(int &number){
    number = number + globalValue;
}
/**
* @brief the function int counter() is supposed to count something like for example iterations of the loop
*@param none
*@return static int callCount which is a number of counts
 */
int counter(){
    static int callCount =0; 
    callCount++;
    return callCount;
}