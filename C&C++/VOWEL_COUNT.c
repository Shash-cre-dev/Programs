#include<stdio.h>
int main()
{
	char ch[25];
	fgets(ch,25,stdin);
	int count=0; //NOTE: Initialise with 0
	int i;
	for( i=0; ch[i]!='\0'; i++){
		switch(ch[i]){
			case 'a':
			case 'e':	
			case 'i':
			case 'o':
			case 'u':
				count++;
				break;	
		}
	}
	printf("%d", count);
	return 0;
}
