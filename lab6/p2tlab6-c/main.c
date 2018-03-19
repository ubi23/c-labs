#include <time.h>
#include <stdio.h>
#include "randu.h"
#include "test.h"

//For setting the max loops we do in the period test
#define LOOPS 1000000000UL

//Test our three generators with period, spectral tests.
int main(void) {

	FILE * file;

	long seed = time(NULL);

	//seed PRNGs here
	srandu(seed);

	//period tests here
	printf("The Period of function randu(), with seed %ld is %ld\n", seed, test_period(randu, LOOPS));


	//spectral tests here
	file = fopen("randuspectral.dat", "w");
	test_spectral(randu, 100000, 3, file);
	fclose(file);

	//roulette test here
	file = fopen("randuroulette.dat", "w");
	test_roulette(randu, 10000000, 36, file);
	fclose(file);

	return 0; 
}

