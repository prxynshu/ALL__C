#include <stdio.h>

int main()
{
    int side, l, b, area_sq, area_rect;
    float area_circle, radius;

    printf("\nEnter the Length of Side of square: ");
    scanf("%d", &side);

    area_sq = side * side;
    printf("\nArea of Square : %d", area_sq);


    printf("\nEnter the Length and Breath of rectangle: ");
    scanf("%d%d", &l, &b);

    area_rect = l * b;
    printf("\nArea of rectangle : %d ", area_rect);


    printf("\nEnter the radius of circle: ");
    scanf("%f", &radius);

    area_circle = 3.14 * radius * radius;
    printf("\nArea of Circle : %f ", area_circle);

    return (0);
}
