#include <stdio.h>

/* Modify the temperature comversion program to print
 the table in rever order, that is, from 300 degrees
 to 0*/

main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
}
