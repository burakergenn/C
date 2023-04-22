#include <stdio.h>
#include <stdlib.h>

int main()
{

	/*
	 int (4 bytes) | %d
	 float (4 bytes) | %f
	 double (8 bytes) | %lf
	 char (1 bytes) | %c

	 */

   int number1= 2;
	float number2= 2.5;
	double number3= 4.5;
   char ca= 'a';

	printf("%d\n%.2f\n%.2lf\n%c",number1,number2,number3,ca);

	printf("\nHello C !");
	//return 0; -- not necessarily



}
