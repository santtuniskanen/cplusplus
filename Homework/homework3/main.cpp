#include "chef.h"
#include "italianchef.h"

int main() {
    Chef chef("John Doe");
    chef.makeSoup();
    chef.makeSalad();
    ItalianChef chef1("Jane Doe", 10, 500);
    chef1.makePasta();
    return 0;
}
