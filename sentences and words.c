#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{

	char a[]= "My name is Denis. I'm 18 years old";
	int words = 0;
	int digits = 0;
	int characters = 0;
	printf("Input \n");
	

	printf("\nlengh of massive%d \n", strlen(a));
	int size = strlen(a);
	
	size_t i = 0; 
	while (i<size)
	{
		if (a[i] == ' ') 
		{
			if ((a[i - 1] >= '0' && a[i - 1] <= '9'))
				digits++;
			if ((a[i - 1] >= 'a' && a[i - 1] <= 'z') || (a[i - 1] >= 'A' && a[i - 1] <= 'Z') || (a[i-1] = '.') || (a[i-1]=','))
				words++;
			
		}
		i++;  
	}

	printf("The number of words is %d\n", words);
	printf("The number of digits is %d\n", digits);

	system("pause");
	return 0;
}
