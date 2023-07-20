
#include <stdio.h>

// Function to find the position of the highest set bit
int findHighestSetBitPosition(unsigned int num) {
    if (num == 0) {
        return 0; // Special case for input 0, as there is no set bit
    }

    int position = 1; // Start with the least significant bit as position 1
    while (num >>= 1) {
        position++; // Shift right until the number becomes 0, counting the positions
    }

    return position;
}

int main() {
    unsigned int num;
    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    int position = findHighestSetBitPosition(num);
    printf("The highest set bit is at position: %d\n", position);

    return 0;
}
