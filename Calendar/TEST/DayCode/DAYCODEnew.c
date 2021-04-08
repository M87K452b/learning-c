#include<stdio.h>

main()

{
    int Year;
    int LastTwoDigits;
    int YearCode;
    int DayCode;
    int MonthCode=6;
    int CentuaryCode=0;

    printf("Enter The Year: ");
    scanf("%d\n",&Year);

    if(Year%4==0 || Year%400==0)
        MonthCode=MonthCode-1;
    else;

    LastTwoDigits=Year%100;

    printf("%d\n",LastTwoDigits);

    if (LastTwoDigits>=28)
        LastTwoDigits=LastTwoDigits%28;
    else LastTwoDigits+=0;

    YearCode=LastTwoDigits+((LastTwoDigits-LastTwoDigits%4)/4);

    if (YearCode>=7)
        YearCode=YearCode%7;
    else YearCode+=0;

    DayCode=YearCode+MonthCode+CentuaryCode+1;

    if (DayCode>=7)
        DayCode=DayCode%7;
    else DayCode+=0;

    printf("DayCode is %d\n",DayCode);

    getchar();
}
