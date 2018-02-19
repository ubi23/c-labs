#include <stdio.h>

struct TwoDPoint {
	double x, y;
};

int main(void) {
	struct TwoDPoint a, b = {0.0 ,0.0}; // to define a new variable of type 
	                                    // TwoDPoint we need to use the keyword
	                                    // struct before the struct name and also 
	                                    // declare a variable which will contain
	                                    // all the data of the struct
	
	/*
	 * The indent block doesn't necessarily have to be here in order,
	 * for the program to work.
	 * 
	 * The intent of the author maybe was to use something with the same
	 * name inside the inner block but then when outside of this block,
	 * he wanted to have the old value before this block.
	 * 
	 */ 
	char input [100];
	puts("Please enter the x and y coordinates of the 1st point , separated by a comma.");
	
	fgets(input , sizeof(input), stdin);
	sscanf(input ,"%lf,%lf", &(a.x), &(a.y)); // changed the format to read double
											  // given the address of a.y instead of a literal value

	puts("Please enter the x and y coordinates of the 2nd point , separated by a comma.");

	fgets(input , sizeof(input), stdin);
	sscanf(input ,"%lf,%lf", &(b.x), &(b.y)); // changed the format to expect a double
											   // and also given the addres of b.y

	
	double x_dist = (a.x - b.x), y_dist = (a.y - b.y);

	printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));

	return 0;
}
