#ifndef APCOMPLEX_H
#define APCOMPLEX_H

#include "streetLevel.h"
#include "floor.h"

class ApComplex {
public:
    double calculateConsumption(double);
private:
    streetLevel first;
    Floor second;
    Floor third;
};

#endif // APCOMPLEX_H
