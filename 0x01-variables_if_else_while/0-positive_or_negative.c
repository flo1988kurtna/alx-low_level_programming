#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(NULL)); // Seed the random number generator with the current time
    n = rand(); // Generate a random number

    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive\n");
    } else if (n == 0) {
        printf("zero\n");
    } else {
        printf("negative\n");
    }

    return 0;
}
