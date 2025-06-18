#include <stdio.h>

// Funktion: Zählt von 1 bis n und gibt die Zahlen aus
void count_up(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");  // Neue Zeile am Ende
}

// Hauptfunktion: Startpunkt des Programms
int main() {
    count_up(10);
    return 0;
}

