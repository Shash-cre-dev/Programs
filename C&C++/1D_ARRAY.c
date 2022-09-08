/* WAP TO CREATE A 1-D FLOAT ARRAY X WITH 10 ELEMENTS AND ACCEPT 10 ELEMENTS FROM THE USER */

#include<stdio.h>
int main(){
	float x[10];
	int i;
	
	// ACCEPTING ARRAY VALUES
	for(i=0 ; i<10; i++)
		scanf("%f", &x[i]);
		
	// PRINTING ARRAY
	for(i=0 ; i<10; i++)
		printf("%f ", x[i]);
	// "%f " space is used to separate the elements	
		
	return 0;
}

