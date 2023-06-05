#include <stdio.h>
#include <math.h> // use flag "-lm" to link header file

int main() {
    int shape;
    float radius, length, width, base, height;
    float area, perimeter;

    printf("Select the shape:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &shape);

    switch (shape) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            perimeter = 2 * 3.14159 * radius;
            printf("Area of the circle: %.2f\n", area);
            printf("Perimeter of the circle: %.2f\n", perimeter);
            break;
        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            perimeter = 2 * (length + width);
            printf("Area of the rectangle: %.2f\n", area);
            printf("Perimeter of the rectangle: %.2f\n", perimeter);
            break;
        case 3:
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            perimeter = base + (2 * sqrt((height * height) + (base * base)));
            printf("Area of the triangle: %.2f\n", area);
            printf("Perimeter of the triangle: %.2f\n", perimeter);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
