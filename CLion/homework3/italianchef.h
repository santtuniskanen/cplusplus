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
    std::string getName(); // Function to get the name of the chef
    void makePasta(); // Pasta making function for the italian chef.
};
#endif //HOMEWORK3_ITALIANCHEF_H
