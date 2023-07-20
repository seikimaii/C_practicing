#include <stdio.h>
#include <string.h>

void ReverseString(char *s)
{
    int size = strlen(s);
    char temp;
    for (int i = 0; i < size/2; i++)
    {
        temp = s[size-1-i];
        s[size-1-i] = s[i];
        s[i] = temp;
        printf("%c", s[i]);
    }
    printf("\n");

}


int main()
{
    char s[] = "C Language Is So Funny! I Wish I Can Learn More!";
    int length = sizeof(s)/sizeof(s[0]) - 1;
    
    printf("original: ");
    for (int i = 0; i < length; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    ReverseString(s);
    
    printf("Reverse: ");
    for (int i = 0; i < length; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}
