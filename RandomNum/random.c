#include<stdio.h>
#include<conio.h>

main(void)
{
    int i=0;
     for(;;)
     {
         printf("%d",rand()%2);
         i++;
     }
     getch();
     return 0;
}
