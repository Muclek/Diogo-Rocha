#include <stdio.h>

enum member {
    Albania = 355
};

int main() {
    printf("Member name: %s\n", "Albania");
    printf("Member value: %d\n", Albania);
    
    return 0;
}