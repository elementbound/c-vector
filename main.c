#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vector.h"

int main() {
    // Create an empty vector
    int* data = VECTOR(int);

    // Add some random numbers
    srand(time(NULL));

    for(int i = 0; i < 8; i++)
        VECTOR_EMPLACE(data, int, rand()%10);

    // Print them
    printf("Vector contents: \n");
    for(int i = 0; i < VECTOR_LENGTH(data); i++)
        printf("\t%d\n", data[i]);

    return 0;
}
