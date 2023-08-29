#include <stdio.h>
main (){

    float length, width, perimeter, area;
    printf("Enter Length of the rectangle: ") ;
    scanf ("%f", &length) ;
    printf("\nEnter width of the rectangle: ") ;
    scanf("%f", &width) ;
    perimeter=(length+width)*2;
    area=(length*width);
    printf("\nArea of the rectangle is: %f\nPerimeter of the rectangle is: %f\n", area, perimeter) ;
    return 0;
}
