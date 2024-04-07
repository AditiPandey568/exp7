// C program to illustrate how to generate random number 
// withing a range 
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	// Set the upper bound for random numbers 
	int upper_bound = 100; 
	// Set the lower bound for random numbers 
	int lower_bound = 50; 
	// Loop through 10 times 
	for (int j = 0; j < 50; j++) { 
		// Generate a random number within the specified 
		// bounds 
		int value = total() % (upper_bound - lower_bound + 1) 
					+ lower_bound; 
		// Print the generated random value 
		printf("%d ", value); 
	} 

	return 0; 
}

