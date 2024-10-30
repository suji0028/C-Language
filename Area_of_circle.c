#include <stdio.h>

int main() {
    float r;

    printf("Enter Radius of Circle:\n");
    scanf("%f", &r);

    printf("Area of Circle with radius %f is %f\n", r, 3.14 * r * r);
    return 0;
}
