 #include <stdio.h>   // including the library to use printf
 
 int k = 4;  // this variable has file scope. It is allocated before the main.
             // It is of type int.
 
 int main(void){
	 printf("Last value of k is %d - and type is int\n",k);
	 
	 
	 int i = 50; // this variable i has the scope in the main function. It is allocated in the main.
	             // It is of type int. 
	 printf("Last value of i is %d - and type is int\n",i);
	 
	 
	 
	 unsigned int j = i * 2; // this variable j has the scope in the main function. It is allocated in main function.
							// It is of unsigned int type. The variable i is the one defined above.
	 printf("Last value of j is %d - and type is unsigned int\n",j);
	 
	 
	 
	 
	 // this variable j has the scope in the main function and 
	 // it is shadowing the k file scope variable. It is of type double
	 double k = 1.0; // semicolon at the end was omitted
	 printf("Last value of k is %lf - and type is double\n",k);				 
	 {
		 float i = 5.0; // this variable j has the scope in this block and
		                // it shadows the main scope variable. This is of type float.
		 printf("Last value of i is %f - and type is float\n",i);
		 
		 printf("The value of i is %3f\n",i);
		 
		 k = i * j;
		 // k is in the main scope. It is a double.It was allocated in the main.
		 // i is in this block scope. It is a float. It was allocated in this block.
		 // j is in the main scope. It is an unsigned int and it was allocated in the main.
		 printf("Last value of k is %lf - and type is double\n",k);
		 printf("Last value of i is %f - and type is float\n",i);
		 printf("Last value of j is %d - and type is an unsigned int\n",j);
		 
		 
		 
		 i *= 6; // i is in this block scope. It is a float. It was allocated in this block.
		 printf("Last value of i is %f - and type is float\n",i);
	 }
	 
	 // double j; fixed since j is not used further in the code
	 
	 
	 // i is in the main scope. It was allocated in the main. It is of type int.
	 // k is in the main scope. It was allocated in the main. It is of type double.
	 printf("Last value of i is %d - and type is integer\n",i);
	 printf("Last value of k is %lf - and type is double\n",k);
	 i = k + i;
	 printf("Now, the value of i is %d\n",i);
	 
	 return 0;
 }
		  
