
// Calculate the real offset of the complex cube roots of a real , given the real root
double re_complexroots(double);

// Calculate the imaginary parts of the complex cube roots
// of a real , given the real root
double im_complexroots(double);

// try to parse input appropriately
double validate_input(int argc , char * argv[]);




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
