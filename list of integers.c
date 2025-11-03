/*
NAME;ELVINE BALA
REG NO;PA106/G/28815/25
DESCRIPTION;C program that reads a list of integers from a file
*/

#include <stdio.h>

// Define constants for clarity
#define NORMAL_HOURS 40.0
#define OVERTIME_RATE 1.5
#define TAX_THRESHOLD 600.0
#define TAX_RATE_LOW 0.15 // 15%
#define TAX_RATE_HIGH 0.20 // 20%

int main() {
    // Declare variables
    double hours_worked = 0.0;
    double hourly_wage = 0.0;
    double gross_pay = 0.0;
    double taxes = 0.0;
    double net_pay = 0.0;
    double overtime_hours = 0.0;
    double taxable_income = 0.0;

    // --- 1. Request User Input ---
    printf("--- Payroll Calculator ---\n");
    printf("Enter the total hours worked in a week: ");
    scanf("%lf", &hours_worked);

    printf("Enter the hourly wage: $");
    scanf("%lf", &hourly_wage);

    // --- 2. Calculate Gross Pay ---
    if (hours_worked > NORMAL_HOURS) {
        // Calculate overtime hours
        overtime_hours = hours_worked - NORMAL_HOURS;
        
        // Normal pay + Overtime pay (1.5 times the normal rate)
        gross_pay = (NORMAL_HOURS * hourly_wage) + 
                    (overtime_hours * hourly_wage * OVERTIME_RATE);
    } else {
        // Only normal pay
        gross_pay = hours_worked * hourly_wage;
    }
    
    // --- 3. Calculate Taxes ---
    taxable_income = gross_pay;
    
    if (taxable_income > TAX_THRESHOLD) {
        // Tax on the first $600
        taxes = TAX_THRESHOLD * TAX_RATE_LOW; 
        
        // Tax on the amount over $600
        double remainder = taxable_income - TAX_THRESHOLD;
        taxes += remainder * TAX_RATE_HIGH;
    } else {
        // Tax on the entire gross pay if it's $600 or less
        taxes = taxable_income * TAX_RATE_LOW;
    }

    // --- 4. Calculate Net Pay ---
    net_pay = gross_pay - taxes;

    // --- 5. Print Results ---
    printf("\n--- Calculation Summary ---\n");
    printf("Gross Pay: $%.2lf\n", gross_pay);
    printf("Taxes Paid: $%.2lf\n", taxes);
    printf("Net Pay: $%.2lf\n", net_pay);

    return 0;
}