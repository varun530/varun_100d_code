#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;
    
    printf("Enter Traffic Light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &light);

    if (light == RED) {
        printf("Stop\n");
    } else if (light == YELLOW) {
        printf("Wait\n");
    } else if (light == GREEN) {
        printf("Go\n");
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
