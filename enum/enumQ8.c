#include <stdio.h>

enum Size {
    SMALL,
    MEDIUM,
    LARGE
};

int main() {
    enum Size pizzaSize = MEDIUM;

    switch (pizzaSize) {
        case SMALL:
            printf("You ordered a small pizza.\n");
            break;
        case MEDIUM:
            printf("You ordered a medium pizza.\n");
            break;
        case LARGE:
            printf("You ordered a large pizza.\n");
            break;
        default:
            printf("Invalid pizza size.\n");
            break;
    }

    return 0;
}