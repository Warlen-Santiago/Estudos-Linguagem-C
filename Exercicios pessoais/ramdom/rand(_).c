#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int min = 50;
    int max = 150;

    for (int i = 0; i < 5; i++) {
        int randomNumber = (rand() % (max - min + 1)) + min;
        printf("Número aleatório no intervalo [%d, %d]: %d\n", min, max, randomNumber);
    }

    return 0;
}
