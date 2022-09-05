#include <stdlib.h>
#include <stdio.h>

/*
* user inputs a text string
* program prints the text that was input
* utilizes dynamic memory
* 
* the user can enter the limit of the string they are entering
* no char arrays, only pointers
* release the memory (free)
*/

#pragma warning(disable : 4996);

int main()
{
	char* str = NULL;
	int numOfChars = 0;
	printf("What is the max amount of characters you wish to enter?\n");
	scanf("%d", &numOfChars);

	// using sizeof because this is machine independent
	str = (char*)malloc(numOfChars * sizeof(char));

	// make sure the memory is allocated
	if (str)
	{
		printf("Enter your sentence:\n");
		scanf("%s", str);
		printf("String = %s", str);
	}
	else
	{
		printf("There was an error allocating the memory dynamically...");
	}

	free(str);

	return 0;
}