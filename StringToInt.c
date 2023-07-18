#include <stdio.h>

int StringToInt(char *s)
{
    int i = 0;
    int num = 0;
    int sign = 1;

    if(s[i] == '-')
    {
        i = 1;
        sign = -1;
    }
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + (s[i] - '0');
        }
        i++;
    }

    return num * sign;
}



int main()
{   
    char a[] = "12345";
    char b[] = "456";
    char c[] = "-190";
    int result = StringToInt(a);
    printf("a = %d\n", result);
    
    result = StringToInt(b);
    printf("b = %d\n", result);
    
    result = StringToInt(c);
    printf("c = %d\n", result);
    return 0;
}



