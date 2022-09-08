#include<stdio.h>
int sum=0,rem;
int reverse(int n){     // FUNCTION DEFINTION
    if(n>0){
	
      	rem=n%10;       // FUNCTION BODY
      	sum=sum*10+rem;
      	reverse(n/10);
 	}
	else
		return sum;	
}
int main(){
   int n,rev_num;
   printf("Enter the number: ");
   scanf("%d",&n);
   rev_num=reverse(n); // FUNCTION CALL
   printf("\nAfter reverse the no is: %d",rev_num); 
   return 0;
}
