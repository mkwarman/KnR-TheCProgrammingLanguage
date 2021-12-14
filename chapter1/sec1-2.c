#include <stdio.h>

/* print Fahrenheit-Celsius table
 *  for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step  = 20;  /* step size */

    fahr = lower;
    while (fahr <= upper) {
        // celsius = 5 * (fahr-32) /9;
        // printf("3%d 6%d\n", fahr, celsius);

        celsius = 5.0/9.0 * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        
        /* %d   for int
         * %f   for floating point
         * %o   for octal
         * %x   for hexadecimal
         * %c   for character
         * %s   for character string
         * %%   for "%"
         */

        /* %d       prints number
         * %6d      prints number, at least 6 characters wide
         * %f       prints floating point
         * %6f      prints floating point, at least 6 characters wide
         * %.2      prints floating point, 2 characters after decimal point
         * %6.2f    prints floating point, at least 6 wide and 2 after decimal point
         */

        fahr = fahr + step;
    }
}
