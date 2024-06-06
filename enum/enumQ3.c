#include <stdio.h>

enum Direction {
    North,
    South,
    East,
    West
};

int main() {
    enum Direction dir = North;

    switch (dir) {
        case North:
            printf("Going North.\n");
            break;
        case South:
            printf("Going South.\n");
            break;
        case East:
            printf("Going East.\n");
            break;
        case West:
            printf("Going West.\n");
            break;
        default:
            printf("Invalid direction.\n");
            break;
    }

    return 0;
}