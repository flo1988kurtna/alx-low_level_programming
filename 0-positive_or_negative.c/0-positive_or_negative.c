#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time
    int n = rand(); // Generate a random number

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
