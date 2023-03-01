//
// Created by Santtu on 17/01/2023.
//

#ifndef WEEK2_POSTILAATIKKO_H
#define WEEK2_POSTILAATIKKO_H
#include <string>

class Postilaatikko {
public:
    Postilaatikko(); // Constructor
    ~Postilaatikko(); // Destructor
    void lisaaPosti(int);
    void otaPosti(int);
    void asetaNimi(std::string);
    std::string palautaNimi(void);

    std::string osoite;
    std::string nimi;
private:
    int maara;

};

#endif //WEEK2_POSTILAATIKKO_H
