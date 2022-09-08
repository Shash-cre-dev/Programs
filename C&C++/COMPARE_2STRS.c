#include<stdio.h>
#include<string.h>
int main()
{
	char s1[25], s2[25];
	int flag=0;
	printf("Enter String 1: ");
	fgets(s1,25,stdin);
	printf("Enter String 2: ");
	fgets(s2,25,stdin);
	
	// LENGTH OF STRING
	if(strlen(s1)==strlen(s2)){
		
	// STRING TRAVERSING LOOP
		int i;
		for(i=0; s1[i]!='\0';i++){
			if(s1[i]!=s2[i]){
				flag=1;
				break;
			}
		}	
		if(flag==1){
			printf("Not Equal");
		}
		if(flag==0){
			printf("Equal");
		}
	}
	else{
		printf("Not Equal");
	}
	return 0;	
	}
	
	
	

