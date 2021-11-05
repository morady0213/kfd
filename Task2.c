#include <stdio.h>           // this is a library which i import to do a specifies function which is input\output
int main() {
	int sec, h, m, s;                                              	// we define the type of the variables by this step
	printf("Enter Number Of seconds You Want To Convert: ");                       	 // printf is used to print the output
	scanf("%d", &sec);                                 // scanf is used to read all types of data
	
	h = (sec/3600);                    //  assign the value of variable h
	
	m = (sec -(3600*h))/60;          //  assign the value of variable m
	
	s = (sec -(3600*h)-(m*60));         //  assign the value of variable s
	
	printf("Number Of hours is %d\n",h);   // takes 2 parameters
	printf("Number of minutes is %d\n",m);  // takes 2 parameters
	printf("number of seconds %d\n",s);   //takes 2 parameters
	
	return 0;       
}

