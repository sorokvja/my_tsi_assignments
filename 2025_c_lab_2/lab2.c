#include <stdio.h>
#include <stdlib.h>

int main() {
    int student_code = 92381;
    int total_tasks = 16;
    printf("LAB N4 ver1, solving task %i\n", student_code % total_tasks);
    //purpose: check whether all digits in it are in ascending order from right to left.

    int x;
    printf("\n");
    printf("input: ");
    scanf("%d", &x);

    x = abs(x);
    //printf("input (abs): %d\n", x);
    
    if (x < 10) {
        printf("Try again! Enter a number with more than one digit.\n");
        return 0;
    }

    int comparable_1 = x % 10; //the digit on the right
    x /= 10;

    int resolution = 1;

    do {
        int comparable_2 = x % 10;
        if (comparable_2 <= comparable_1) {
            resolution = 0;
        } else {
            comparable_1 = comparable_2;
            x /= 10;
        }
    } while (x > 0 && resolution == 1);

    if (resolution == 1) {
        printf("result: Yes\n");
    } else {
        printf("result: No\n");
    }

    return 0;

}