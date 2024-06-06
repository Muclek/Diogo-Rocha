#include <stdio.h>

enum CountryCode {
    Afghanistan = 93,
    Albania = 355,
    Algeria = 21,
    Portugal = 351,
    Andorra = 376,
    Angola = 244,
    Antarctica = 672
};

int main() {
    enum CountryCode country;
    int start = 1000; // starting value for unique enumeration values
    int end = 2000; // ending value for unique enumeration values

    for (country = Afghanistan; country <= Antarctica; country++) {
        printf("%d = %d\n", country, start);
        start++;
        if (start > end) {
            printf("Range limit reached!\n");
            break;
        }
    }

    return 0;
}