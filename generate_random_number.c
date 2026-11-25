// Generate a random number between 1 and 100
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;

    srand(time(NULL));          /* makes the number different each run */
    number = rand() % 100 + 1;  /* number from 1 to 100 */

    printf("Random number = %d\n", number);
    return 0;
}
