#ifndef STREETLEVEL_H
#define STREETLEVEL_H

#include "apartment.h"

class streetLevel {
public:
    streetLevel();
    Apartment as1, as2;
    void defineApartments();
    double calculateConsumption(double);
};

#endif // STREETLEVEL_H
