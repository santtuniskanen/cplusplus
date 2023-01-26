//
// Created by Santtu on 1/25/2023.
//

#include "italianchef.h"


ItalianChef::ItalianChef(std::string chefName){
    std::cout << "Chef " << getName() << " Constructor." << std::endl;
}
std::string ItalianChef::getName() {
    return name;
}
void ItalianChef::makePasta() {
    std::cout << "Chef " << getName() << " is making pasta." << std::endl;
}