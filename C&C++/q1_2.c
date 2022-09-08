#include<stdio.h>
int main(){

    char c[] = "BCSE2022";
    char *p = c;
    printf("%s\n", p);
    printf("%s\n" , p+(p[3] - p[2])+2);
    printf("%s\n",p[3]);
    return 0;
}
