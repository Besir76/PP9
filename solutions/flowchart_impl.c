#include <stdio.h>

// Funktion, die dem Flussdiagramm folgt
void run_flowchart(int x) {
    int result = 1;

    for (int i = 1; i <= x; i++) {
        if (i % 2 == 0) {
            result += i;
        } else {
            result *= i;
        }

        if (result > 1000) {
            result -= 100;
        }
    }

    printf("Result: %d\n", result);
}
