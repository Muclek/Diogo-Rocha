#include <stdio.h>

enum Country {
    Afghanistan = 93,
    Albania = 355,
    Algeria = 21,
    Portugal = 351,
    Andorra = 376,
    Angola = 244,
    Antarctica = 672
};

int main() {
    printf("Country codes:\n");
    printf("Afghanistan: %d\n", Afghanistan);
    printf("Albania: %d\n", Albania);
    printf("Algeria: %d\n", Algeria);
    printf("Portugal: %d\n", Portugal);
    printf("Andorra: %d\n", Andorra);
    printf("Angola: %d\n", Angola);
    printf("Antarctica: %d\n", Antarctica);

    return 0;
}