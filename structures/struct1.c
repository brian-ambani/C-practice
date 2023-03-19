#include <stdio.h>
#include <string.h>

struct details{
	int num;
	char letter;
	char string[30];
};

int main(){
	struct details s1;
	
	// Assign a value to the string using the strcpy function
	
	strcpy(s1.string, "Text message");

	printf("My string: %s\n", s1.string);

	return 0;
}
