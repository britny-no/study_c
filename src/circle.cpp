#include <stdio.h>

#define R 10


int main() {

    int x, y;

    for (x = -2 * R; x <= 2 * R; x += 2) {

        for (y = -R; y <= R; y++) {

            if (((x * x + y * y) == R * R) || ((x * x + y * y) <= R * R+R))

                printf("*");

            else

                printf(" ");

        }

        printf("\n");

    }

    return 0;

}