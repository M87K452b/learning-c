/*Calendar Of 21st Century*/
#include<stdio.h>
#include<stdlib.h>

    int year;
    int month,date;
    int LastTwoDigits;
    int YearCode;
    int DayCode;
    int i;
    int MonthCode[]={6,2,2,5,0,3,5,1,4,6,2,4};
    int CenturyCode=0;
    int NoOfDaysInMonths[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char* Months[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };
void leap()
{
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%400==0 && year%4==0 || year%100!=0)
    {
      printf("%d is LEAP YEAR\n",year);
      NoOfDaysInMonths[1]=29;
      MonthCode[0]=5;
      MonthCode[1]=1;

    }
	else
    printf("%d is NOT LEAP YEAR\n",year);

}
int DetermineDayOfWeek()
{
    LastTwoDigits=year%100;

    printf("Last Two Digits Are %d\n",LastTwoDigits);

    if (LastTwoDigits>=28)
        LastTwoDigits=LastTwoDigits%28;

    YearCode=LastTwoDigits+((LastTwoDigits-LastTwoDigits%4)/4);

    if (YearCode>=7)
        YearCode=YearCode%7;

    printf("The Year Code Is %d\n",YearCode);

    DayCode=YearCode+MonthCode[i]+CenturyCode+1;//This is Date//
    i++;

    if (DayCode>=7)
        DayCode=DayCode%7;

    printf("DayCode is %d\n",DayCode);

    return DayCode;
}

void calendar()
{

        printf("\n\n%s\n" , Months[month]);
        printf("\n\n Sun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

        for(date=1;date<=(1+DayCode*5);date++)
           {
               printf(" ");

           }

        for(date=1;date<=NoOfDaysInMonths[month];date++)
       {

           printf("%2d",date);

            if ( (date+DayCode)%7>0 )
                printf("   ");
            else
                printf("\n ");

       }
       printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

}

main()
{
	void leap();
	leap();
	for(month=0;month<12;month++)
    {
        int DetermineDayOfWeek();
        DetermineDayOfWeek();
        void calendar();
        calendar();
    }

    return 0;
	getchar();
}
