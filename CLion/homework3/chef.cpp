//
// Created by Santtu on 1/25/2023.
//

#include "chef.h"

// Creating the Chef Constructor definition
Chef::Chef(std::string chefName):name(chefName){
    std::cout << "Chef " << name << " Constructor." << std::endl;
}
// Chef class Destructor
Chef::~Chef() {
    std::cout << "Chef " << name << " Destructor." << std::endl;
}

void Chef::makeSalad() {
    std::cout << "Chef " << name << " is making Salad." << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef " << name << " is making Soup." << std::endl;
}
