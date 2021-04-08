#include<stdio.h>
/*Print Fahrenheit-Celcius Table from 0-300F*/
main()
{
    int f,c;
    int lower,upper,step;

    lower=0;    /* lower limit of temperature scale */
    upper=300;  /* upper limit of temperature scale */
    step=20;    /* step size */

    f=lower;
    while (f<=upper)
    {
        c=5*(f-32)/9;
        printf("%d\t%d,f,c");
        f=f+step;
    }
}
