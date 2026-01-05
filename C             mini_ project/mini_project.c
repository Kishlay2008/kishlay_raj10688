#include <stdio.h>

void convertUsingFor(int totalSeconds) {
    int hours = 0, minutes = 0;
    int seconds, count = 0;
    int temp = totalSeconds;

    for (; temp >= 3600; temp -= 3600) {
        hours++;
        count++;
    }

    for (; temp >= 60; temp -= 60) {
        minutes++;
        count++;
    }

    seconds = temp;
    printf("\n--- Using For Loop ---\n");
    printf("Hours   : %d\n", hours);
    printf("Minutes : %d\n", minutes);
    printf("Seconds : %d\n", seconds);
    printf("Iteration Count : %d\n", count);
}

void convertUsingWhile(int totalSeconds) {
    int hours = 0, minutes = 0;
    int seconds, count = 0;
    int temp = totalSeconds;

    while (temp >= 3600) {
        hours++;
        temp -= 3600;
        count++;
    }

    while (temp >= 60) {
        minutes++;
        temp -= 60;
        count++;
    }

    seconds = temp;

    printf("\n--- Using While Loop ---\n");
    printf("Hours   : %d\n", hours);
    printf("Minutes : %d\n", minutes);
    printf("Seconds : %d\n", seconds);
    printf("Iteration Count : %d\n", count);
}
int main() {
    int totalSeconds;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    convertUsingFor(totalSeconds);
    convertUsingWhile(totalSeconds);
    return 0;
}


