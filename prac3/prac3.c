#include <stdio.h>

int summator(int x, int y) { return x + y;}

bool equals(int x, int y) { return x == y; }

int main() {
    int pracNum = 3;
    printf("Valentin Dremin, KVBO-21-24, prac № %d\n", pracNum);
    int x, y;
    x = 13;
    y = 13;
    printf("summ of %d and %d = %d\t equals %s\n", x, y, summator(x,y), equals(x,y) ? "true" : "false");
    return 0;
}
