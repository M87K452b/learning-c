#include<stdio.h>
#include<conio.h>
main(void)
{
    int nc;
    nc=0;
    while(getchar()!= EOF)
        nc++;
        printf("%d",nc);
    getch();

}
