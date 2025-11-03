/*
NAME;ELVINE BALA
REG NO;PA106/G/28815/25
DESCRIPTION;C program requesting to enter hours worked
*/

#include <stdio.h>
#include <stdlib.h> // Required for exit()

// Function Prototypes
void write_integers_to_file();
void process_integers_and_write_results();
void display_file_contents(const char *filename);

int main() {
    // 1. Create the input file
    write_integers_to_file();

    // 2. Read, process, and write results to the output file
    process_integers_and_write_results();

    // 3. Display the contents of both files
    printf("\n--- INPUT FILE CONTENT (input.txt) ---\n");
    display_file_contents("input.txt");

    printf("\n--- OUTPUT FILE CONTENT (output.txt) ---\n");
    display_file_contents("output.txt");
    
    return 0;
}

// --- Task 1: Write Integers to File (input.txt) ---
void write_integers_to_file() {
    FILE *file;
    int number;
    const int COUNT = 10;
    
    // 4. Error Handling: Attempt to open the file for writing ('w')
    file = fopen("input.txt", "w");
    if (file == NULL) {
        perror("Error opening input.txt for writing");
        // Exit the program since we cannot proceed without the input file
        exit(1); 
    }
    
    printf("Enter %d integers:\n", COUNT);
    for (int i = 0; i < COUNT; i++) {
        printf("Integer %d: ", i + 1);
        
        // Read the integer from the user
        if (scanf("%d", &number) != 1) {
            printf("Invalid input. Skipping entry.\n");
            // Clear input buffer for next iteration
            while (getchar() != '\n'); 
            i--; // Decrement counter to re-attempt input
            continue;
        }
        
        // Write the integer to the file followed by a newline
        fprintf(file, "%d\n", number);
    }
    
    // Close the file (essential)
    if (fclose(file) != 0) {
        perror("Error closing input.txt");
    }
    printf("\nSuccessfully wrote %d integers to input.txt.\n", COUNT);
}

// --- Task 2: Read, Calculate, and Write Results (output.txt) ---
void process_integers_and_write_results() {
    FILE *input_file, *output_file;
    int number;
    long long sum = 0; // Use long long for sum to prevent overflow
    int count = 0;
    double average = 0.0;
    
    // 4. Error Handling: Open input.txt for reading ('r')
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        perror("Error opening input.txt for reading");
        return; // Return without processing
    }

    // 4. Error Handling: Open output.txt for writing ('w')
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        perror("Error opening output.txt for writing");
        // Must close the input file before returning
        fclose(input_file);
        return; 
    }

    // Read integers from the input file
    while (fscanf(input_file, "%d", &number) == 1) {
        sum += number;
        count++;
    }
    
    // Check if any numbers were read
    if (count > 0) {
        average = (double)sum / count;
        
        // Write the sum and average to the output file
        fprintf(output_file, "Processed %d numbers.\n", count);
        fprintf(output_file, "SUM: %lld\n", sum);
        fprintf(output_file, "AVERAGE: %.2lf\n", average);
        printf("Successfully calculated sum (%lld) and average (%.2lf) and wrote to output.txt.\n", sum, average);
    } else {
        fprintf(output_file, "No integers found in input.txt to process.\n");
        printf("No integers found in input.txt to process.\n");
    }
    
    // Close files
    if (fclose(input_file) != 0) {
        perror("Error closing input.txt after reading");
    }
    if (fclose(output_file) != 0) {
        perror("Error closing output.txt");
    }
}

// --- Task 3: Read and Display File Contents ---
void display_file_contents(const char *filename) {
    FILE *file;
    char buffer[256]; // Buffer to read each line
    
    // 4. Error Handling: Attempt to open the file for reading ('r')
    file = fopen(filename, "r");
    if (file == NULL) {
        // Use perror to print a system-defined error message
        perror("Error opening file for display");
        return; 
    }
    
    printf("----------------------------------------\n");
    // Read and print line by line until End-Of-File (EOF)
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    printf("----------------------------------------\n");
    
    // Close the file
    if (fclose(file) != 0) {
        perror("Error closing file after display");
    }
}