#ifndef APARTMENT_H
#define APARTMENT_H
#include <iostream>

class Apartment {
public:
    Apartment();
    int numApartments();
    int area;
    void define(int, int);
    double calculateConsumption(double);
};

#endif // APARTMENT_H
