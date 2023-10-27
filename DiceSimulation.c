#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int myFrequency[11] = {};
    srand(time(NULL));
    for (int i = 0; i < 36000; i++) {
        int firstRoll = rand() % 6 + 1;
        int secondRoll = rand() % 6 + 1;
        int Sum = firstRoll + secondRoll;
        myFrequency[Sum - 2]++;
    }

    printf("Dice Roll Simulation:\n\n");
    printf("Sum\tFrequency\tRelative Frequency\n");
    for (int j = 0; j < 11; j++) {
        int Sum = j + 2;
        double myRatio = (double)myFrequency[j] / 36000;
        printf(" %d\t%d\t\t%.2f\n", Sum, myFrequency[j], myRatio);
    }
    return 0;
}

