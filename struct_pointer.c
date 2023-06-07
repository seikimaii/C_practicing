
#include <stdio.h>
#include <string.h>

struct IntCharPair {
    int number;
    char str[50];
};

struct IntCharPair create() {
    struct IntCharPair pair;
    int mm;
    int index = 0;
    char input[10];
    
    printf("Type in number \n>>");
    fgets(input, sizeof(input), stdin);
    mm = atoi(input);
    
    pair.number = mm;
    printf("Type in number greetins \n>> ");
    fgets(input, sizeof(input), stdin);
    
    
    strcpy(pair.str, input);
    return pair;
}

int main() {
    struct IntCharPair result = create();
    printf("Number: %d\nString: %s\n", result.number, result.str);
    
    printf("Done!!!");
    return 0;
}

