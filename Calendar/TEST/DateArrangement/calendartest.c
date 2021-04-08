#include<stdio.h>
#include<conio.h>

int main()
{
    int month=1, day;
	for ( month = 1; month <= 12; month++ )
	   {
	    printf("January\n");
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );


        for ( day = 1; day <= 1 + (1 * 5); day++ )
        {
            printf(" ");
		}
		for (day=1;day<=31;day++)
        {
            printf("%2d",day);

            if ( ( day + 1 ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
        }
    getch();
}
}
