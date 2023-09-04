#include <stdio.h>

int main() {
    char choice;
    float temperature, convertedTemperature;

    while (1) { 
        printf("\n");
        printf("Temperature Converter\n");
        printf("1. Fahrenheit to Celsius\n");
        printf("2. Celsius to Fahrenheit\n");
        printf("Press 'q' to quit\n");
        printf("Enter your choice (1 or 2): ");
        scanf(" %c", &choice);  
        
        if (choice == 'q' || choice == 'Q') {
            break;  
        } else if (choice == '1') {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            convertedTemperature = (temperature - 32) * 5 / 9;
            printf("Temperature in Celsius is : %.2f °C\n", convertedTemperature);
            printf("\n");
        } else if (choice == '2') {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temperature);
            convertedTemperature = (temperature * 9 / 5) + 32;
            printf("Temperature in Fahrenheit is : %.2f °F \n", convertedTemperature);
            printf("\n");
        } else {
            printf("Invalid choice. Please choose 1, 2, or q.\n");
            printf("\n");
        }
    }

    return 0;
}
