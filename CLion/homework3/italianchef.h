//
// Created by Santtu on 1/25/2023.
//

#ifndef HOMEWORK3_ITALIANCHEF_H
#define HOMEWORK3_ITALIANCHEF_H
#include "chef.h"
#include <iostream>

// Creating ItalianChef class that inherits from the Chef class
class ItalianChef:public Chef {
public:
    ItalianChef(std::string chefName=""); // Constructor for ItalianChef
    ItalianChef(std::string chefName="", int water = 0, int flour = 0);
    std::string getName(); // Function to get the name of the chef
    void makePasta(); // Pasta making function for the italian chef.
private:
    int water;
    int flour;
};
#endif //HOMEWORK3_ITALIANCHEF_H
