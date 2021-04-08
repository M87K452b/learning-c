#include<stdlib.h>
#include<stdio.h>
void main()
{
int ch;
float a,b,c,s,m;
float d;

for(; ;)
 {
    printf("\t\t\t\t******CALCULATOR******\n");
    printf("\nEnter the first number:\n");
    scanf("%f",&a);
    printf("\nEnter the second number:\n");
    scanf("%f",&b);
    printf("\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXIT\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    system("cls");

switch(ch)
  {
	case 1:
		c = a+b;
		printf("The sum of two numbers are: %.4f\n\n",c);
		break;
	case 2:
		s = a-b;
		printf("The difference of two numbers are: %.4f\n\n",s);
		break;
	case 3:
		m = a*b;
		printf("The product of two numbers are: %.4f\n\n",m);
		break;
	case 4:
		d = (float)a/b;
		printf("The division of two numbers are: %.4f\n\n",d);
		break;
    case 5:  exit(0);
  }
 }
 getch();
}
