#include <stdio.h>


#define SIZE  16

int main(void){
	
	
	unsigned char array2d[SIZE][SIZE];
	//char[255] output;
	
	// creating the image
	int i, j;
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			if ( j % (2 + i -1) == 0){
				array2d[i][j] = ((255-i-j) * (i +j)) % 255;
			}else{
				array2d[i][j] = ((i + j) * (i + j) + (SIZE * SIZE)) % 255;
			}
		}
	}
	
	printf("P2 %d %d %d\n",SIZE, SIZE, 255);
	for(i = 0; i < SIZE; i++){
		for(j = 0; j < SIZE; j++){
			printf("%d ",array2d[i][j]);
		}
		printf("\n");
	} 
	//printf("This is  = %d\n",array2d[0][0]);
	
	return 0;
	
	
}
