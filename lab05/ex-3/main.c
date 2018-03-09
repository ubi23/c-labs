/*
 * main.c
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
 * 
 * 
 */

#include "main.h"

int main(int argc , char * argv[]) {
	double x, cub_x , re_cub_x , im_cub_x;
	x = validate_input(argc , argv);
	cub_x = cbrt(x);
	re_cub_x = re_complexroots(cub_x);
	im_cub_x = im_complexroots(cub_x);
	printf("The cube roots of %f are %f, %f + %fi and %f - %fi.\n", x, cub_x , re_cub_x , im_cub_x , re_cub_x , im_cub_x );
	return 0;
}
