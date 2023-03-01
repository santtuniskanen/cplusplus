//
// Created by Santtu on 1/25/2023.
//

#include "italianchef.h"


ItalianChef::ItalianChef(std::string chefName){
    std::cout << "Chef " << getName() << " Constructor." << std::endl;
}
ItalianChef::ItalianChef(std::string chefName, int w, int f) {
    water = w;
    flour = f;
    name = chefName;
    std::cout << "Italian Chef " << getName() <<  " constructor." << std::endl;
}
std::string ItalianChef::getName() {
    return name;
}
void ItalianChef::makePasta() {
    std::cout << "Chef " << getName() << " is making pasta." << std::endl;
    std::cout << "Italian Chef " << getName() << " water(dl): " << water <<std::endl;
    std::cout << "Italian Chef " << getName() << " flour(g): " << flour << std::endl;
}