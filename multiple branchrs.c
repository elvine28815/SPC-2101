/*
NAME;ELVINE BALA
REG NO;PA106/G/28815/25
DESCRIPTION;C program to display multiple branches in a hotel
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0));

    // Assign random occupancy
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 0 or 1
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("\nTotal number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}