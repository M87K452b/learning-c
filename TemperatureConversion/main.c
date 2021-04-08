#include<stdio.h>
main(void)
{



int a;
float f,c,k,lower,upper,step;

for(;;)
{


    printf("\t\t\tCONVERSION TABLE OF TEMPERATURE\n");
    printf("\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    printf("Choose the input unit\n");
    printf("1.Fahrenheit\n2.Celsius\n3.Kelvin\n");
    printf("Enter your choise\n");
    scanf("%d",&a);


    printf("Enter lower limit of the table:\n");
    scanf("%f",&lower);
    printf("Enter upper limit of the table:\n");
    scanf("%f",&upper);
    printf("Enter step value required:\n");
    scanf("%f",&step);
    system("cls");


    printf("Fahrenheit\tCelsius\t\tKelvin\n");
    printf("==========\t=======\t\t======\n");
    printf("`````````````````````````````````````\n");


    switch(a)
    {
        case 1:
            f=lower;
        while (f<=upper)
        {
            c=(float)5*(f-32)/9;
            k=c+273.16;
            printf("%.2f\t||\t%.2f\t||\t%.2f\n",f,c,k);
            f=f+step;

        }
        break;
        case 2:
            c=lower;
        while (c<=upper)
        {
            k=c+273.16;
            f=(float)9/5*c+32;
            printf("%.2f\t||\t%.2f\t||\t%.2f\n",f,c,k);
            c=c+step;

        }
        break;
        case 3:
            k=lower;
        while (k<=upper)
        {
            c=k-273.16;
            f=(float)9/5*c+32;
            printf("%.2f\t||\t%.2f\t||\t%.2f\n",f,c,k);
            k=k+step;

        }
        break;
    }

    printf("......................................\n\n");
    }
    getch();
}

