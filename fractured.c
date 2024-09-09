#include <stdio.h>
#include <math.h>

// Define the constant for Pi
#define PI 3.14

// Function prototypes
void calculateDistance(void);
void calculatePerimeter(void);
void calculateArea(void);
void calculateWidth(void);   // For a circle, this might represent diameter
void calculateHeight(void);  // For a circle, this might also represent diameter

int main(void) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function implementations

void calculateDistance(void) {
    // Example: Distance between the center of two circles
    double x1, y1, x2, y2;
    printf("Enter coordinates of the center of the first circle (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of the center of the second circle (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance between the centers of the circles: %.2f\n", distance);
}

void calculatePerimeter(void) {
    // Example: Calculate the circumference of a circle
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    double perimeter = 2 * PI * radius;
    printf("Circumference (perimeter) of the circle: %.2f\n", perimeter);
}

void calculateArea(void) {
    // Example: Calculate the area of a circle
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    double area = PI * pow(radius, 2);
    printf("Area of the circle: %.2f\n", area);
}

void calculateWidth(void) {
    // Example: Width of the circle, interpreted as the diameter
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    double width = 2 * radius;
    printf("Diameter of the circle (interpreted as width): %.2f\n", width);
}

void calculateHeight(void) {
    // Example: Height of the circle, interpreted as the diameter
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    double height = 2 * radius;
    printf("Diameter of the circle (interpreted as height): %.2f\n", height);
}
