#include "horse.cpp"
class race {
private:
    Horse horses [5];
    int length;
public:
    race(int trackLength) {
        length = trackLength;
    }//end race
void start() {
        bool isWinner = false;
        while (isWinner) {
            for (int i = 0; i < length; i++) {
                horses[i].advance();
                printLane(i);

            }//ends for
        }//ends while
    }//ends start
};//ends race class
