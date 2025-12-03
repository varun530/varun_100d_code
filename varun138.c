#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    const char *lightNames[] = {"RED", "YELLOW", "GREEN"};
    int i;

    for (i = RED; i <= GREEN; i++) {
        printf("%s = %d\n", lightNames[i], i);
    }

    return 0;
}
