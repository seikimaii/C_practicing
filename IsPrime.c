#include <stdio.h>
#include <stdbool.h>


bool is_prime(unsigned long long number)
{
    if(number % 2 == 0 || number % 3 == 0)
    {
        return false;
    }
    for(unsigned long long i = 5; i*i < number; i+=6 )
    {
        if (number % i == 0 || number % (i+2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    unsigned long long number = 0;
    scanf("%llu", &number);
    bool isprime = is_prime(number);
    
    if (isprime)
    {
        printf("%llu is prime number", number);
    }
    else
    {
        printf("%llu is not prime number", number);
    }

    return 0;
}
