#include "printpgm.h"

/*
* Lab 5, exercise 1. Adding a makefile to a program which displays
* an image (lab 3, exercise 1).
*/

// function which takes an array and fills it with the desired image parameters
void imageSetUp(int x, int y,int pixels[x][y], unsigned char pixels_char[x][y]){
  //int pixels[x][y];
  srand(time(NULL));

  // looping over the width and the height
  for(int i=0;i<x;i++){
    for ( int iTwo=0;iTwo<y;iTwo++){
      // random pattern
      int random = (rand()%255);
      pixels[i][iTwo] = random;
      unsigned char random_ = (char)random;
      pixels_char[i][iTwo] = random_;
    }
  }
}



void new_function(int x, int y, unsigned char pixels_char[x][y], FILE *file_binary){
	
	
	char header[30] = "P5 500 500 255\n";
	char newline[2] = "\n";
	
	// header 
	//printf("Size of header = %d\n", sizeof(header));
	fwrite(&header, 15, 1, file_binary);
	
	
	// array
	//fwrite(&pixels_char, sizeof(char), 2500, file_binary);
	//fwrite(EOF, sizeof(int), 1, file_binary);
	fwrite(&pixels_char, sizeof(unsigned char), 250000, file_binary); 
	
	/*for( int i=0;i<x;i++){
		for(int iTwo=0;iTwo<y;iTwo++){
			fwrite(&pixels_char, sizeof(pixels_char[i][iTwo]), 1, file_binary);
			//fprintf(file_to_write, "%d ", pixels_char[i][iTwo]);
		}
		fwrite(&newline, sizeof(newline), 1, file_binary);
		//fprintf(file_binary, "\n");
		//fprintf(file_to_write, "\n");
	}*/
  //return 0;
	
}

// displaying an image given the array size
int imageDisplay(int x, int y,int pixels[x][y], FILE *file_to_write){
  // creating the header
	//printf("P2 %d %d 15\n", x, y);
	fprintf(file_to_write, "P2 %d %d 255\n", x, y);
	// printing out the data (looping over width and height)
	for( int i=0;i<x;i++){
		for(int iTwo=0;iTwo<y;iTwo++){
			//printf("%d ", pixels[i][iTwo]);
			fprintf(file_to_write, "%d ", pixels[i][iTwo]);
		}
		//printf("\n");
		fprintf(file_to_write, "\n");
	}
  return 0;
}

// setting up x and y coordinates and adding a -h feature
int main(int argc, char *argv[]){
  int x = 500;
  int y = 500;
  int pixels[x][y];
  unsigned char pixels_char[x][y];
  FILE *file_to_write, *file_binary;
  // when the number of arguments is more than 1
  if(argc > 1){
    // if the second argument is equal to -h, print the description, otherwise
    // inform the user about the wrong input
    if(strcmp(argv[1],"-h") == 0){
      printf("Program that displays an image\n");
    } else {
      printf("Unknown argument\n");
    }

  } else {
	  
	  file_to_write = fopen("image.pgm","w");
	  file_binary = fopen("image_binary.pgm","wb");
	  
	  if(file_to_write == NULL && file_binary == NULL){
			printf("Error: file could not be opened !\n");
			exit(8);
	  }
	  
	  
	// displaying an image using functions above
	imageSetUp(x,y,pixels, pixels_char);
	imageDisplay(x,y,pixels, file_to_write);
	
	new_function(x, y, pixels_char, file_binary);
	
	
	
	// close the file
	fclose(file_to_write);
	fclose(file_binary);
  }
}
