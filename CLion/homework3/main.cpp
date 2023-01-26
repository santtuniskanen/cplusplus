#include "chef.h"
#include "italianchef.h"

int main() {
    Chef chef("John Doe");
    chef.makeSoup();
    chef.makeSalad();
    ItalianChef italian_chef("Jane Doe");
    italian_chef.makePasta();
    return 0;
}
