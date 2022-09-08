// 2D ARRAYS WITH INPUT FROM USER
#include<stdio.h>
int main(){
	int a[7][7],r ,c ,i ,j;
	printf("Enter the number of rows:");
	scanf("%d", &r);    // for rows
	printf("Enter the number of columns:");
	scanf("%d", &c);    // for columns
	
	// ACCEPTING THE VALUES IN ARRAY
	for(i=0; i<r; i++)        // outer loop - for rows
		for(j=0; j<c; j++)    // inner loop - for columns
			scanf("%d", &a[i][j]);
	
	// PRINTING THE ARRAY
	for(i=0; i<r; i++)        
		for(j=0; j<c; j++)   
			printf("%d ", a[i][j]);
			
	return 0;		 		
}
