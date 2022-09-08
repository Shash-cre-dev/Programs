// charge of Vehicle
#include<stdio.h>
int main()
{
    float initWage=0.0, hours, tempHour, tempWage, totalWage;
    printf("Enter total hours worked: \t");
    scanf("%f", &hours);
    if(hours<=50){
    	initWage = 0.50*hours;
        totalWage = initWage;
    }
    else if(hours>51 && hours<=100)
    {
        tempHour = hours-50;
        tempWage = tempHour*0.75;
        totalWage = tempWage + initWage;
    }
    else if(hours>100 && hours<=250)
    {
        tempHour = hours-100;
        tempWage = 100*0.75;
        totalWage = initWage + tempWage + (tempHour*1.20);
    }
    else if(hours>250)
    {
       tempHour = hours-250;
       tempWage = (50*0.75) + (100*0.75);
       totalWage = initWage + tempWage + (tempHour*1.50);
    }
    totalWage=totalWage+20*totalWage;
    printf("Total Wage: \t\t\t%0.2f", totalWage);
    return 0;
}
