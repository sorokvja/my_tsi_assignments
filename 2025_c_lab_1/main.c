#include <stdio.h>
#include <math.h>

int main() {
    const double pi = 3.14159265359;
    
    double alpha;
    printf("Enter the alpha in degrees: ");
    scanf("%lf", &alpha);
    // printf("entered value of alpha is equal to %lf\n", alpha);
    alpha = alpha * pi / 180.0;
    printf("The value of alpha converted to radians is equal to %lf\n", alpha);

    double z1 = 2 * pow(sin(3 * pi - 2 * alpha), 2) * pow(cos(5 * pi + 2 * alpha), 2);
    double z2 = 0.25 - 0.25 * sin(2.5 * pi - 8.0 * alpha);
    
    printf("z1 is equal to %lf\n", z1);
    printf("z2 is equal to %lf\n", z2);

    printf("--- Check ---\n");
    double difference = fabs(z1 - z2);
    printf("The difference is equal to %lf\n", difference);

    return 0;
}