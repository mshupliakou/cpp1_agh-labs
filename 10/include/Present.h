#include <iostream>
#ifndef PRESENT_H
#define PRESENT_H

/// @brief describes a present
class Present{
    std::string name;
    std::string recipient;
    public:
    Present(const std::string& name, const std::string& recipient): name(name), recipient(recipient){}

    /// @brief prints information about the present
    void describe() const;

    /// @brief getter for a recipient of a present
    /// @return the name of a recipient of a present
    std::string getRecipient() const;
};
#endif