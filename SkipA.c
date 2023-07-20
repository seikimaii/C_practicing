#include <stdio.h>

// if b=0, print 0~99, b=2 print 100~199... b = 0~4

void skip_a(int* a, int a_size, int b)
{
    

    int index = 0;
    while(index < a_size && a[index] < b*100)
    {
        index++;
    }
    

    for(int i = b*100; i < (b+1)*100; i++)
    {
        if (index < a_size && i == a[index])
        {
            index++;
        }
        else
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int a[] = {1,2,3,5,6,101,105,109,208,209,222,311,356,378,399};
    int length = sizeof(a)/sizeof(a[0]);
    
    printf("b = 0, ans will pass 1,2,3,4,5,6\n");
    skip_a(a, 15, 0);

    printf("b = 1, ans will pass 101,105,109\n");
    skip_a(a, 15, 1);

    printf("b = 2, ans will pass 208,209,222\n");
    skip_a(a, 15, 2);
    
    printf("b = 3, ans will pass 311,356,378,399\n");
    skip_a(a, 15, 3);
    return 0;
}
