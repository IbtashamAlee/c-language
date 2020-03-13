/*Write a program which takes any 3 numbers, from the user. The program should find and display their sum and average.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
 float numb1, numb2, numb3,sum,average;
	printf(" Enter Fisrt Number :");
	scanf("%f", &numb1);
	printf(" Enter Second Number :");
	scanf("%f", &numb2);
	printf(" Enter Third Number :");
	scanf("%f", &numb3);
	sum = numb1 + numb2 + numb3;
	printf(" Sum is %.2f\n", sum);
	average = numb1 + numb2 + numb3 / 3;
  	printf(" Average is %.2f\n", average);

system("pause");
	return 0;
}


/*Write a program which takes the temperature in Fahrenheit. The program should display the Fahrenheit temperature as well as centigrade.
                                                  C= (f-32)*5/9 */


#include<stdio.h>
#include<stdlib.h>
int main()
{
 float tempf,tempc;
	printf(" Enter Temperature in Farhenheight :");
	scanf("%f", &tempf);
	printf("Temperature in Farhenheight is %.2f\n", tempf);
	tempc = (tempf - 32) * 5 / 9;
	printf("Temperature in Centigrade is %.2f\n", tempc);
system("pause");
	return 0;
}



/*Write a program which takes any 3 numbers, from the user. The program should find and display max number out of three numbers on the screen.*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
 	int a1, a2, a3;
	printf(" Enter Fisrt Number :");
	scanf("%d", &a1);
	printf(" Enter Second Number :");
	scanf("%d", &a2);
	printf(" Enter Third Number :");
	scanf("%d", &a3);
	if (a1 > a2 && a1 > a3)
		printf(" Number 1 is greater then all\n");
	else if (a2 > a3 && a2 > a1)
		printf(" Number 2 is greater then all\n");
	else if (a1 == a2 && a1 == a3 && a2 == a1 && a2 == a3 && a3 == a1 && a3 == a2)
		printf(" All Entered Numbers are Equal\n");
	else
		printf(" Number 3 is greater then all\n");system("pause");
	return 0;
}
