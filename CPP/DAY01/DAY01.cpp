#include<stdio.h>
int main()
{
    int a = 10;
    printf("%d ", a);   

    {
        int a = 100;
        printf("%d ", a);  
    }

    a = 1000;  
	printf("%d\n", a);
    return 0;
}