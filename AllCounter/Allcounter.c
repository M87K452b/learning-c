#include<stdio.h>
#include<conio.h>
main(void)
{

    int c,nspace,nalpbt,nsymb,ndigit;

    nspace=nalpbt=nsymb=ndigit=0;
    while ((c=getchar()) != EOF)
    {
    if (c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9')
        ++ndigit;
    else if (c== ' ' || c== '\n' || c== '\t')
        ++nspace;
    else if(c==','||c=='?'||c=='.'||c=='!'||c=='"'||c=='\''||c==';'||c==':'||c=='&')
        ++nsymb;
    else
        ++nalpbt;
    }

    printf("digits = %d,spaces = %d,symbols = %d,alphabets = %d\n",ndigit,nspace,nsymb,nalpbt);
    getch();

}
