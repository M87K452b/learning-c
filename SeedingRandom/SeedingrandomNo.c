#include<stdio.h>
#include<conio.h>

main(void)
{
    int i=0;

    srand(time(NULL));

    while(i<10)
    {
        printf("%d\n",rand());
        i++;
    }
    getch();
}
