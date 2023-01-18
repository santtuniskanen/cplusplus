// Santtu Niskanen
// TVT22SPO
// Homework 1

#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int max);
int main() {
    game(11);

    return 0;
}

int game(int max_num) {
    // Defining variables
    int random_num;
    int player_num;
    int num_attempts = 0;

    // Generating the random number
    /*
     Having the time function as the seed for the random function
     allows us to create a new random number each time we run the program,
     making sure we don't always generate the same number, thus making this
     application pretty useless.
    */
    srand(time(nullptr));
    random_num = rand() % max_num + 1;
    // std::cout << random_num << std::endl; // for debugging purposes!

    // do...while loop
    do {
        std::cout << "Enter a whole number between 1-"<< max_num << ":\n";
        std::cin >> player_num;
        num_attempts += 1;
    } while (random_num != player_num);

    // If the numbers were equal, the loop ends
    std::cout << "You guessed right!" << std::endl;
    std::cout << "Attempts: " << num_attempts << std::endl;

    return 0;
}


