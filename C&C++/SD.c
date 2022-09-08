// SD of a population
#include <math.h>
#include <stdio.h>
float calculateSD(float data[]) {
    float sum = 0.0, mean, SD = 0.0;
    int i, n;
    for (i = 0; i<n; ++i) {
        sum += data[i];
    }
    mean = sum/n;
    for (i = 0; i<n; ++i) {
        SD += pow(data[i] - mean, 2);
    }
    return sqrt(SD/n);
}

int main() {
    int i, n;
    float data[100];
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i<n; ++i)
        scanf("%f", &data[i]);
    printf("\nStandard Deviation = %.6f", calculateSD(data));
    return 0;
}


