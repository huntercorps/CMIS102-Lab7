#include <stdio.h>

// Function prototypes
int Square(int value);
int Cube(int value);
double Shrink(int value);

int main () {
    /* variable definition: */
    int intValue, menuSelect;
    double Results;
    intValue = 1;

    // While a positive number
    while (intValue > 0) {
        printf("Enter a positive Integer\n: ");
        scanf("%d", &intValue);
        if (intValue > 0) {
            printf("Enter 1 to calculate Square, 2 to Calculate Cube, 3 to calculate Halve \n: ");
            scanf("%d", &menuSelect);
            if (menuSelect == 1) {
// Call the Square Function
                Results = Square(intValue);
                printf("Square of %d is %d\n", intValue, (int)Results);
            } else if (menuSelect == 2) {
// Call the Cube function
                Results = Cube(intValue);
                printf("Cube of %d is %d\n", intValue, (int)Results);
            }
// Call the Shrink function
            else if (menuSelect == 3) {
                Results = Shrink(intValue);
                printf("half of %d is %lf\n", intValue, Results);
            } else {
                printf("Invalid menu item, only 1, 2, or 3 is accepted\n");
            }
        }
    }
    return 0;
}

// function returning the Square of a number
int Square(int value) {
    return value * value;
}

// function returning the Cube of a number
int Cube(int value) {
    return value * value * value;
}
// function returning halved number
double Shrink(int value) {
    return (double)value / 2;
}

