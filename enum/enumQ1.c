#include <stdio.h>

enum DaysOfWeek {
    Sunday = 4,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    enum DaysOfWeek today = Thursday;
    
    switch (today) {
        case Sunday:
            printf("Today is Sunday\n");
            break;
        case Monday:
            printf("Today is Monday\n");
            break;
        case Tuesday:
            printf("Today is Tuesday\n");
            break;
        case Wednesday:
            printf("Today is Wednesday\n");
            break;
        case Thursday:
            printf("Today is Thursday\n");
            break;
        case Friday:
            printf("Today is Friday\n");
            break;
        case Saturday:
            printf("Today is Saturday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }

    return 0;
}
