//
// Created by Santtu on 1/25/2023.
//

#ifndef HOMEWORK3_CHEF_H
#define HOMEWORK3_CHEF_H

#include <iostream>

// Creating Chef class
class Chef {
protected:
    std::string name;
public:
    Chef(std::string chefName="");
    ~Chef();
    void makeSalad();
    void makeSoup();
};
#endif //HOMEWORK3_CHEF_H




