//  2D ARRAYS

#include<stdio.h>
int main(){
	int x[3][3], i, j;
	
	
	// ACCEPTING THE VALUES IN ARRAY
	for(i=0; i<3; i++)        // outer loop - for rows
		for(j=0; j<3; j++)    // inner loop - for columns
			scanf("%d", &x[i][j]);
	
	// PRINTING THE ARRAY
	for(i=0; i<3; i++)        
		for(j=0; j<3; j++)   
			printf("%d ", x[i][j]);
			
	return 0;		 		
}
