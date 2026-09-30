#include <stdio.h>

int main(void) {
    float celsius;

    printf("=== Celsius to Fahrenheit converter ===\n");
    printf("Enter a temperature in Celsius: ");
    fflush(stdout);

    /* scanf returns 1 if it could read one number */
    if (scanf("%f", &celsius) != 1) {
        printf("\nNo input received! Did you forget the -it flags?\n");
        return 1;
    }

    /* Formula: F = C * 9/5 + 32 */
    float fahrenheit = celsius * (9 / 5) + 32;

    printf("%.1f C = %.1f F\n", celsius, fahrenheit);
    return 0;
}
