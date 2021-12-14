#include <stdio.h>

/* print Celsius-Fahrenheit table
 *  for celsius = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step  = 20;  /* step size */

    printf("Celsius to Fahrenheit\n");

    celsius = lower;
    while (celsius <= upper) {
        // celsius = 5.0/9.0 * (fahr-32.0);
        // celsius * 9.0 / 5.0 = (fahr-32)
        // celsius * 9.0 / 5.0 + 32 = fahr
        fahr = celsius * 9.0 / 5.0 + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);

        celsius = celsius + step;
    }
}
