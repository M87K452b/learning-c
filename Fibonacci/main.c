#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int num1=1;
    int num2=1;
    printf("%i\n%i\n",num1,num2);
    for(i=0;i<8;i++)
    {
        int temp=num2;
        num2 += num1;
        num1 = temp;
        printf("%i\n",num2);
    }
    getchar();
}
