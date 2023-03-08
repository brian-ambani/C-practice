#include <stdio.h>
#include <string.h>

struct myStructure {	//structure declaration
	int myNum;			//member (int var)
	char myLetter;		//member (char var)
};

int main()
{
	// create a struct variable with the name "s1":
	struct myStructure s1;
	
	// Assign values to members of s1
	s1.myNum = 13;
	s1.myLetter = 'B';

	//print values
	printf("My number: %d\n", s1.myNum);
	printf("My letter: %c\n", s1.myLetter);

	return (0);
}
