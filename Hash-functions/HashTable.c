/* Choosing a Hash Function */

#define CAPACITY 50000 // Size of the HashTable

unsigned long hash_function(char* str)
{
	unsigned long i = 0;

	for (int j = 0; str[j]; j++)
		i += str[j];

	return i % CAPACITY;
}


/* Define  the HashTable item*/

typedef struct Ht_item
{
	char *key;
	char *value;
} Ht_item;


/* Main function */
int main()
{
	unsigned long hash_function();
	return 0;
}
