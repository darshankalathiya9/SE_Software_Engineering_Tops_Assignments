#include <stdio.h>
main()
{
	int year;

	printf("Enter a Year : ");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 400 == 0)
		{
			if (year % 100 == 0)
			{
				printf("\nThis is Leap Year.");
			}
			else
			{
				printf("\nThis is Not Leap Year.");
			}
		}
		else
		{
			printf("\nThis is Leap Year.");
		}
	}
	else
	{
		printf("\nThis Year is Not Leap Year.");
	}
}

//	if(year%4 ==0 && year%100!=0 || year%400==0)
//	{
//		printf("\nThis is Leap Year.");
//	}
//	else
//	{
//		printf("\nThis is Not Leap Year.");
//	}
//}