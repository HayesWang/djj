#include <stdio.h>

int main()
{
    double profit, bonus;

    scanf("%lf", &profit);

    if (profit <= 10) {
        bonus = profit * 0.1;
    } else if (profit <= 20) {
        bonus = 10 * 0.1 + (profit - 10) * 0.08;
    } else if (profit <= 40) {
        bonus = 10 * 0.1 + 10 * 0.08 + (profit - 20) * 0.05;
    } else if (profit <= 60) {
        bonus = 10 * 0.1 + 10 * 0.08 + 20 * 0.05 + (profit - 40) * 0.03;
    } else if (profit <= 100) {
        bonus = 10 * 0.1 + 10 * 0.08 + 20 * 0.05 + 20 * 0.03 + (profit - 60) * 0.02;
    } else {
        bonus = 10 * 0.1 + 10 * 0.08 + 20 * 0.05 + 20 * 0.03 + 40 * 0.02 + (profit - 100) * 0.01;
    }

    printf("%.2lf", bonus*10000);

    return 0;
}
