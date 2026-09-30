//
// Created by asthe on 9/25/2026.
//
#include <iostream>
#include <random>
#include "Horse.h"
class Horse {
private:
    int position;
    int index;
    int trackLength;
public:
    Horse();
    void advance();
    void printLane();
    bool isWinner();

};//ends horse
void Horse::init(int position, int index, int trackLength) {
    Horse.position = position;
    Horse.index = index;
    Horse.trackLength = trackLength;

};//ends init
void Horse::advance() {
    int rd = rand()%2;
    Horse.position++;
    Horse.index++;
    Horse.trackLength--;
};//ends advance
void Horse::printLane(int horse) {

    std::cout << Horse.position << std::endl;
    for (int i = 0; i < Horse.trackLength; i++) {
        if  (Horse.trackLength == 1) {
            std::cout << Horse.index << std::endl;
        else
            std::cout << "." << Horse.index << std::endl;
        }
    }


};// ends printLane
bool Horse::isWinner() {
    bool winner = false;
    if (Horse.position == Horse.index) {
        winner = true;
        std::cout << winner << std::endl;
        return winner;
    }//ends if
}//ends isWinner