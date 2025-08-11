#include<stdio.h>
#include <math.h>
#define pi 3.14

double add( double a ,double b);
double sub( double a ,double b);
double multiply(double a, double b);
double divide(double a, double b);
unsigned long long factorial(int n);
double squareRoot(double a);
double cubeRoot(double a);
double logarithm(double a);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);
double areaOfSquare(double side);
double perimeterOfSquare(double side);
double areaOfRectangle(double length, double width);
double perimeterOfRectangle(double length, double width);
double areaOfParallelogram(double base, double height);
double perimeterOfParallelogram(double base, double side);
double areaOfRhombus(double diagonal1, double diagonal2);
double perimeterOfRhombus(double side);
double volumeOfCube(double side);
double volumeOfCuboid(double length, double width, double height);



int main(){ 
    double num1, num2 ,num3, result;
    int  choice ,n ;


    printf("Select operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Factorial (!)\n");
    printf("6. Square Root (sqrt)\n");
    printf("7. Cube Root (cbrt)\n");
    printf("8. Logarithm (log)\n");
    printf("9. Area of Circle\n");
    printf("10. Circumference of Circle\n");
    printf("11. Area of Square\n");
    printf("12. Perimeter of Square\n");
    printf("13. Area of Rectangle\n");
    printf("14. Perimeter of Rectangle\n");
    printf("15. Area of Parallelogram\n");
    printf("16. Perimeter of Parallelogram\n");
    printf("17. Area of Rhombus\n");
    printf("18. Perimeter of Rhombus\n");
    printf("19. Volume of Cube\n");
    printf("20. Volume of Cuboid\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

switch ( choice){
 case 1 :
   printf("enter two number which you want to code");
    scanf("%lf %lf",&num1, &num2);
     result = add(num1,num2);
       printf("%lf+ %lf = %lf", num1,num2,result);
       break;
        case 2 :
            printf("enter two number which you want to sub");
            scanf("%lf %lf",&num1, &num2);
            result = sub(num1,num2);
            printf("%lf -%lf =%lf", num1,num2,result);
            break; 
        case 3:
            printf("Enter two operands: ");
            scanf("%lf %lf", &num1, &num2);
            result = multiply(num1, num2);
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 4:
            printf("Enter two operands: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0.0) {
                result = divide(num1, num2);
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case 5:
            printf("Enter an integer: ");
            scanf("%d", &n);
            printf("%d! = %llu\n", n, factorial(n));
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = squareRoot(num1);
            printf("sqrt(%.2lf) = %.2lf\n", num1, result);
            break;
        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = cubeRoot(num1);
            printf("cbrt(%.2lf) = %.2lf\n", num1, result);
            break;
        case 8:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 > 0) {
                result = logarithm(num1);
                printf("log(%.2lf) = %.2lf\n", num1, result);
            } else {
                printf("Error! Logarithm undefined for non-positive numbers.\n");
            }
            break;
 
          
        case 9:
            printf("Enter radius of the circle: ");
            scanf("%lf", &num1);
            result = areaOfCircle(num1);
            printf("Area of circle with radius %.2lf = %.2lf\n", num1, result);
            break;
        case 10:
            printf("Enter radius of the circle: ");
            scanf("%lf", &num1);
            result = circumferenceOfCircle(num1);
            printf("Circumference of circle with radius %.2lf = %.2lf\n", num1, result);
            break;
        case 11:
            printf("Enter side of the square: ");
            scanf("%lf", &num1);
            result = areaOfSquare(num1);
            printf("Area of square with side %.2lf = %.2lf\n", num1, result);
            break;
        case 12:
            printf("Enter side of the square: ");
            scanf("%lf", &num1);
            result = perimeterOfSquare(num1);
            printf("Perimeter of square with side %.2lf = %.2lf\n", num1, result);
            break;
        case 13:
            printf("Enter length and width of the rectangle: ");
            scanf("%lf %lf", &num1, &num2);
            result = areaOfRectangle(num1, num2);
            printf("Area of rectangle with length %.2lf and width %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 14:
            printf("Enter length and width of the rectangle: ");
            scanf("%lf %lf", &num1, &num2);
            result = perimeterOfRectangle(num1, num2);
            printf("Perimeter of rectangle with length %.2lf and width %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 15:
            printf("Enter base and height of the parallelogram: ");
            scanf("%lf %lf", &num1, &num2);
            result = areaOfParallelogram(num1, num2);
            printf("Area of parallelogram with base %.2lf and height %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 16:
            printf("Enter base and side of the parallelogram: ");
            scanf("%lf %lf", &num1, &num2);
            result = perimeterOfParallelogram(num1, num2);
            printf("Perimeter of parallelogram with base %.2lf and side %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 17:
            printf("Enter the lengths of the diagonals of the rhombus: ");
            scanf("%lf %lf", &num1, &num2);
            result = areaOfRhombus(num1, num2);
            printf("Area of rhombus with diagonals %.2lf and %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 18:
            printf("Enter side of the rhombus: ");
            scanf("%lf", &num1);
            result = perimeterOfRhombus(num1);
            printf("Perimeter of rhombus with side %.2lf = %.2lf\n", num1, result);
            break;
        case 19:
            printf("Enter side of the cube: ");
            scanf("%lf", &num1);
            result = volumeOfCube(num1);
            printf("Volume of cube with side %.2lf = %.2lf\n", num1, result);
            break;
        case 20:
            printf("Enter length, width and height of the cuboid: ");
            scanf("%lf %lf %lf", &num1, &num2, &num3);
            result = volumeOfCuboid(num1, num2, num3);
            printf("Volume of cuboid with length %.2lf, width %.2lf, and height %.2lf = %.2lf\n", num1, num2, num3, result);
            break;


 default :
 printf("you enter a wrong choice ");
     break;
}



    return 0;
}

 double add(double a , double b ){
 
return  a+b;
 }

 double sub(double a , double b ){
 
return  a-b;
 }
 
double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

double squareRoot(double a) {
    return sqrt(a);
}

double cubeRoot(double a) {
    return cbrt(a);
}

double logarithm(double a) {
    return log(a);
}


double areaOfCircle(double radius) {
    return  pi * radius * radius;
}

double circumferenceOfCircle(double radius) {
    return 2 * pi* radius;
}

double areaOfSquare(double side) {
    return side * side;
}

double perimeterOfSquare(double side) {
    return 4 * side;
}

double areaOfRectangle(double length, double width) {
    return length * width;
}

double perimeterOfRectangle(double length, double width) {
    return 2 * (length + width);
}

double areaOfParallelogram(double base, double height) {
    return base * height;
}

double perimeterOfParallelogram(double base, double side) {
    return 2 * (base + side);
}

double areaOfRhombus(double diagonal1, double diagonal2) {
    return (diagonal1 * diagonal2) / 2;
}

double perimeterOfRhombus(double side) {
    return 4 * side;
}

double volumeOfCube(double side) {
    return side * side * side;
}

double volumeOfCuboid(double length, double width, double height) {
    return length * width * height;
}
