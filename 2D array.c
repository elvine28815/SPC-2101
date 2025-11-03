/*
NAME;ELVINE BALA
REG NO;PA106/G/28815/25
DESCRIPTION;C program to initialize a 2D arrays
*/
#include <stdio.h>

int main() {
    // Declaration and initialization from part (ii)
    int scores[4][2] = {
        {65, 92}, 
        {84, 72},
        {35, 70},
        {59, 67}
    };
    
    // Outer loop controls the rows
    for (int i = 0; i < 4; i++) {
        // Inner loop controls the columns
        for (int j = 0; j < 2; j++) {
            // Print the element followed by a space
            printf("%d ", scores[i][j]); 
        }
        // Print a newline character after each row is complete
        printf("\n"); 
    }
    
    return 0;
}