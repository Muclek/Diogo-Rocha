#include <stdio.h>

enum Shape {
    CIRCLE,
    SQUARE,
    TRIANGLE,
    RECTANGLE
};

int main() {
    enum Shape myShape = CIRCLE;

    switch (myShape) {
        case CIRCLE:
            printf("Selected shape: Circle\n");
            break;
        case SQUARE:
            printf("Selected shape: Square\n");
            break;
        case TRIANGLE:
            printf("Selected shape: Triangle\n");
            break;
        case RECTANGLE:
            printf("Selected shape: Rectangle\n");
            break;
        default:
            printf("Invalid shape\n");
            break;
    }

    return 0;
}