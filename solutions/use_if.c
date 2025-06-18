#include <stdio.h>

// Gibt das Vorzeichen einer Zahl als Text zurück
const char* sign_of(int x) {
    if (x > 0) {
        return "positive";
    } else if (x == 0) {
        return "zero";
    } else {
        return "negative";
    }
}

int main() {
    int test_values[] = { -5, 0, 7 };
    int count = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < count; i++) {
        int x = test_values[i];
        printf("sign_of(%d) = %s\n", x, sign_of(x));
    }

    return 0;
}

