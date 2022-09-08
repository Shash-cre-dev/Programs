#include<stdio.h>
float calculateWeeklySalary(int grade, float hrs_worked)
{
	float ws, hr_rate;
	switch(grade){
		case 1:
			hr_rate = 100.00;
			break;
		case 2:
			hr_rate = 200.00;
			break;
		case 3:
			hr_rate = 300.00;
			break;
		case 4:
			hr_rate = 400.00;
			break;
		case 5:
			hr_rate = 500.00;
			break;				
	}
	ws = hrs_worked * hr_rate;
	return ws;
}
int main()
{
	int g;
	float hr_work;
	printf("Enter Grade: ");
	scanf("%d", &g);
	printf("Enter Weekly Hours Worked ");
	scanf("%f", &hr_work);
	printf(" The weekly salary: %0.1f ", calculateWeeklySalary(g,hr_work));
	return 0;	
}
