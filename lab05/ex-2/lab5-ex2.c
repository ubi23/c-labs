/*
 * lab5-ex2.c
 * 
 * Copyright 2018 External user 006 <u10006@brutha.physics.gla.ac.uk>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */
#include <stdio.h>
#include "turtle.h"
#include <math.h>
#include <string.h>

#define WIDTH 256
#define HEIGHT 256

int main(int argc, char *argv[])
{
	
	int n;
	
	// checking if we what we want to draw is a square
	if(strcmp(argv[0],"./square") == 0 ){
		n = 4; 
	} else if(argc != 2){
		printf("You have not provided the right number to the polygon\n");
		//return 1;
	} else {
		sscanf(argv[1], "%d", &n);
	
		if( n < 3 ){
			printf("Cannot draw a polygon with %d sides\n", n);
			return 2;
		}
	}

	// start to draw
	turtle_init(WIDTH, HEIGHT);
	double angle = 360/n;
	void turtle_pen_down(void);


	
	int i;
	for( i=1; i<=n;i++){
		//turtle_set_heading(angle);
		turtle_forward(20);
		turtle_turn_left(angle);
	}
	
	
	const char *filename = "img.png";
	turtle_save_png(filename);
	return 0;
}

