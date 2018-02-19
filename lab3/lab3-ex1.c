#include <stdio.h>


#define SIZE  16

/*
 * Ubaidulah Khan 2271135K
 * 
 * exercise 1 lab 3
 * 
 * Create a 2D array with random data and 
 * ready to be displayed in a pgm image
 */
int main(void){
	
	
	unsigned char array2d[SIZE][SIZE];
	
	// creating the image data
	int i, j;
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			// random pattern (to check out!)
			if ( j % (2 + i -1) == 0){
				array2d[i][j] = ((255-i-j) * (i +j)) % 255;
			}else{
				array2d[i][j] = ((i + j) * (i + j) + (SIZE * SIZE)) % 255;
			}
		}
	}
	
	// create the header
	printf("P2 %d %d %d\n",SIZE, SIZE, 255);
	// print out all the data
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			printf("%d ",array2d[i][j]);
		}
		printf("\n");
	} 
	
	
	return 0;
	
	
}
