//
// Created by Santtu on 22/01/2023.
//

#ifndef ACTUAL_EXERCISE_GAME_H
#define ACTUAL_EXERCISE_GAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>

#endif //ACTUAL_EXERCISE_GAME_H

class RandomNumberGame {
private:

    int max_num;
    int player_number = 0;
    int random_number = 0;
    int num_attempts = 0;
public:
    // Creating Constructor
    RandomNumberGame(int mNum);
    void play();
    // Creating Destructor
    ~RandomNumberGame() {
        std::cout << "GAME DESTRUCTOR: Object cleared from stack memory.";
    }
};

// Using a fancy init list for this function here instead of inside the function :D
RandomNumberGame::RandomNumberGame(int mNum): max_num(mNum) {
    std::cout << "GAME CONSTRUCTOR: Object initialized with " << max_num <<
    " as the maximum value." << std::endl;
    srand(time(nullptr));
    random_number = 1 + rand() % (max_num - 1 + 1);
    std::cout << random_number << std::endl;
    std::cout << "Enter a number between 1-" << max_num << ": " << std::endl;
    std::cin >> player_number;
    num_attempts++;
}

void RandomNumberGame::play() {
    /* I could have used a basic while loop here but since I used a
     * do...while loop in the original program, I thought I could just
     * use it here again...*/
    do {
        if (player_number > random_number) {
            std::cout << "\n" << player_number << " is too high." << std::endl;
        }
        else {
            std::cout << "\n" << player_number << " is too low." << std::endl;
        }
        std::cin >> player_number;
        num_attempts++;
    }
    while (player_number != random_number);
    std::cout << player_number << " was correct!" << std::endl;
    std::cout << "It took you " << num_attempts << " tries." << std::endl;
}

