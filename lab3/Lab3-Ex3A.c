/*
 * Ubaidullah Khan 2271135K
 * 
 * 
 */ 


#include <stdio.h>


struct TwoDPoint {
	double x, y;
};

int main(void) {
	struct TwoDPoint  points_array[2]; 
	
	int i;
	int n_points = sizeof(points_array) / sizeof(points_array[0]);
	char input [100];
	
	// for each point in the array get the x and y coordinate
	for(i = 0; i < n_points; i++){
		printf("Please enter the x and y coordinates of the point %d , separated by a comma.", i + 1);
		fgets(input , sizeof(input), stdin);
		sscanf(input ,"%lf,%lf", &(points_array[i].x), &(points_array[i].y));
	} 
	
	struct TwoDPoint a= points_array[0];
	struct TwoDPoint b= points_array[1];
			
	double x_dist = (a.x - b.x), y_dist = (a.y - b.y);

	printf("The square of the distance between the two points is: %f\n", (x_dist*x_dist)+(y_dist*y_dist));

	return 0;
}
