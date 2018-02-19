/*
 * Ubaidullah Khan 2271135K
 *
 * 
 * 
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LEN 100

int main(void)
{
	char input[MAX_STRING_LEN];
	int isSame = 1, strlength, i;
	
	
		
	printf("Please type up to 100 characters : ");
	scanf("%s", input);
	strlength =strlen(input);
	printf("The string you entered was %d character long.\n", strlength);
	
	for(i = 0; i < strlength; i++){
		if(isupper(input[i])){
			input[i] = tolower(input[i]);
			isSame = 0; // not the same string
		}
	}
	
	if(isSame == 1){
		printf("The string is the same.\n");
	}else{
		printf("%s\n", input);
	}
	
	
	
	return 0;
}

