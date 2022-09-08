#include<stdio.h>
#include<string.h>

void reverse_name(char* name){

    char f[50];
    char se[50];
    
    int x = strlen(name);
    // printf("%d" , x);
    // printf("%s" , c);
    int count =0 ;
    for(int i = 0; name[i]!= ' ';i++){
        // printf("%c\n" , c[i]);
        count++;
    }
    // printf("Count : %d\n", count);
    for(int i = 0;i<count;i++){
        f[i] = name[i];
    }
    // printf("%s\n" , f);
    for(int i = count+1 , j =0;name[i]!= '\0';i++ ,j++){
        se[j] = name[i];
    }
    // printf("%s\n" , se);
    strcpy(name , se);
    strcat(name , " ");
    strcat(name , f);

}


int main(){
    char c[100];
    scanf("%[^\n]%*c" , c);
    reverse_name(c);
    printf("%s" , c);
}