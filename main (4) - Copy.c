//C PROGRAM

#include <stdio.h>

int main() {
    float salary;
    int years;
    float bonus;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter your years of service: ");
    scanf("%d", &years);

    if (years > 5) {
        bonus = salary * 0.05;
    } else {
        bonus = 0;
    }

    printf("Your net bonus is: %.2f\n", bonus);

    return 0;
}
