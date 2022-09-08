#include <stdio.h>
int main()
{

    int student[10];
    int n;
    printf("Enter no. of students\n");
    scanf("%d", &n);
    int logical;
    int verbal;
    int arithmetic;
    int puzzle;
    for (int i = 0; i < n; i++)
    {
        printf("Enter marks for student %d\n" , i+1);
        scanf("%d", &logical);
        scanf("%d", &verbal); 
        scanf("%d", &arithmetic);
        scanf("%d", &puzzle);
        int total = logical + verbal + arithmetic + puzzle;
        if (total >= 180)
        {
            printf("Student %d is eligible for taking the genius level test\n" , i+1);
            if(logical > 40 && verbal > 40 && arithmetic >40 && puzzle >40){
                printf("Student %d can give genius test 1\n", i+1);
            }
            else{
                printf("Student %d can give genius test 2\n", i+1);
            }
        }
        else{
            printf("Rejected\n");
        }

    }

    return 0;
}