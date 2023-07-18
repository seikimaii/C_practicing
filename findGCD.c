#include <stdio.h>

int recursiveFindGCD(int a, int b)
{

    if (b == 0)
    {
        return a;
    }
    else
    {
        recursiveFindGCD(b, a%b);
    }
}

int findGCD(int a, int b)
{
    int temp = 0;
    while (b != 0)
    {

        if (b == 0)
        {
            return a;
        }
        temp = b;
        b = a % b;
        a = temp;
    }
   
}



int main()
{
    int a = 10;
    int b = 28;

    int ret = recursiveFindGCD(a, b);
    printf("a=%d, b=%d, gcd= %d \n", a, b, ret);

    a = 20;
    b = 30;
    int ret2 = findGCD(a,b);  
    printf("a=%d, b=%d, gcd= %d \n", a, b, ret2);
    return 0;
}

