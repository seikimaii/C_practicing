#include <stdbool.h>
#include <stdio.h>

// Function to check if the four 4-bit integers are equal
bool checkFour4BitIntegersEqual(unsigned short num) {
    unsigned short arr[4];
    arr[0] = num >> 12;        // Extract the most significant 4 bits
    arr[1] = (num >> 8) & 0xF; // Extract the second 4 bits
    arr[2] = (num >> 4) & 0xF; // Extract the third 4 bits
    arr[3] = num & 0xF;        // Extract the least significant 4 bits

    return (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]);
}

int main() {
    printf("Numbers with 4 groups of 4-bit equal: \n");
    for (unsigned short num = 0; num < 0xFFFF; num++) {
        if (checkFour4BitIntegersEqual(num)) {
            printf("%u\n", num);
        }
    }
    printf("%u\n", 65535);

    return 0;
}
