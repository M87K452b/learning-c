#include<stdio.h>

int main()
{
    int i=0 , sum=0 ;
    while(i < 10)
    {
        sum += i;
        i++;
        printf("%d\n",i);
    }
    printf("Total is %d\n",sum);
    getch();

}
