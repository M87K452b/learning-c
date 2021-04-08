#include<stdio.h>
#include<conio.h>
main()
{
    int C;
    C=getchar();
    while (C!=EOF)
    {
        putchar(C);
        C=getchar();
    }
    getch();
}
