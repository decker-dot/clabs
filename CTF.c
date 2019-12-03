#include <stdio.h>

main()
{
    int fahr,celsius;
    int lower,upper,step;

    lower = 0;
    upper = 100;
    step = 5;

    celsius = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n",fahr, celsius);
        celsius = celsius + step;
    }
}       
