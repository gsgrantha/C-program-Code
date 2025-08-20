#include <stdio.h>

int main() {
    int time,distance,velocity;
    printf("DISTANCE = ");
    scanf("%d",&distance);
    printf("TIME = ");
    scanf("%d",&time);
    /* we know DISTANCE= (VELOCITY * TIME)
           SO, VELOCITY = (DISTANCE/TIME)*/
    velocity=distance/time;
    printf("VELOCITY = (DISTANCE / TIME) =%d",velocity);

    return 0;
}
