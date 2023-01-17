#include <iostream>

class Apartment {
private:
    int numOfTenants;
    int area;
public:
    Apartment(int, int);
    int heatingCost();
};

Apartment::Apartment(int a, int b) {
    numOfTenants = a;
    area = b;
}

int Apartment::heatingCost() {
    int cost = numOfTenants * area;

    return cost;
}

int main() {
    Apartment ap(2, 60);
    int apCost = ap.heatingCost();
    std::cout << "Heating cost = " << apCost << std::endl;
}


