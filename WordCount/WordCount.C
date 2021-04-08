#include<stdio.h>
#include<conio.h>
main()
{
    int c,nword;
    nword=0;
    while((c=getchar()) !=EOF)
    {
        if(c==' ' || c== '\n')
            ++nword;
    }
    printf("Number of words = %d\n",nword);
    getch();
}
