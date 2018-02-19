/*
 * Ubaidullah Khan 2271135K
 *
 * to the marker : I used a flag to check if the to strings were both
 * 				   lowercase instead of using the strcmp function.
 *   
 * Program takes as input a string of MAX_STRING_LEN characters and 
 * displays the length of the characters in it, and check if it is all in
 * lowercase.               
 * 
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LEN 100

int main(void)
{
	// initialise the variables
	char input[MAX_STRING_LEN];
	int isSame = 1, strlength, i;
	
	
		
	printf("Please type up to 100 characters : ");
	scanf("%s", input); // get the input from the user
	strlength = strlen(input); // compute the length of the string 
	printf("The string you entered was %d character long.\n", strlength);
	
	// check if string is all lowercase
	for(i = 0; i < strlength; i++){
		// if the character is upper case
		if(isupper(input[i])){
			// then set it to lowercase
			input[i] = tolower(input[i]);
			isSame = 0; // not the same string
		}
	}
	

	if(isSame == 1){// the string is same as the lower case
		printf("The string is the same.\n");
	}else{
		printf("%s\n", input);// string contains some upper case, output 
		                      // the lowercase version of the string
	}
	
	
	
	return 0;
}

