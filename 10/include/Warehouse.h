#include <iostream>
#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "Present.h"
#include <vector>

/// @brief describes a warehouse
class Warehouse{
    std::vector<Present> presents;
    public:

    /// @brief adds a present to a vector of presents
    /// @param present new present
    void addPresent(const Present& present);

    /// @brief prints information about all presents in a vector of presents
    void showAll() const;

    /// @brief counts the number of presents 
    /// @return the number of presents
    int countPresents() const;

    /// @brief finds and prints all present of a certain recipient
    /// @param recipient the name of recipient whose prsents we want to display
    void findByRecipient(const std::string& recipient) const;
};
#endif