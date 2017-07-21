#include <stdio.h>

// Function prototypes
int Square(int value);
int Cube(int value);
double Shrink(int value);
double Decimate(int value);

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
            printf("Enter 1 to calculate Square, 2 to Calculate Cube, 3 to calculate Halve, 4 to decimate\n: ");
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
            else if (menuSelect == 3) {
                // Call the Shrink function
                Results = Shrink(intValue);
                printf("half of %d is %lf\n", intValue, Results);
            }
            else if(menuSelect == 4) {
                // call the Decimate function
                Results = Decimate(intValue);
                printf("%d decimated is %lf\n", intValue, Results);
            }
            else {
                printf("Invalid menu item, only 1, 2, 3, or 4 is accepted\n");
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
// function returning half of a number
double Shrink(int value) {
    return value / 2.0;
}

// function returning the result of decimating a number
double Decimate(int value)
{
    return value * .10;
}
