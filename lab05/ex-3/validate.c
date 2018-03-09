/*
 * validate.c
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

#include "validate.h"

double validate_input(int argc , char * argv[]) {
	if (2!=argc) {
		fputs("Too many inputs - just enter one double!", stderr);
		exit(1);
	}
	double val;
	int parsed = sscanf(argv[1], "%lf", &val );

	if (0== parsed) {
		fputs("Could not parse input as a double!", stderr);
		exit(1);
	}
	return val;
}

