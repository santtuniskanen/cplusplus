#ifndef FLOOR_H
#define FLOOR_H

#include "streetLevel.h"
#include "apartment.h"

class Floor:public streetLevel {
public:
    Floor();
    Apartment ap1, ap2, ap3, ap4;
    void defineApartments();
    double calculateConsumption(double);
};

#endif // FLOOR_H
