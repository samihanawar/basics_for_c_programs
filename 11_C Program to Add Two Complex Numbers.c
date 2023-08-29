#include <stdio.h>
 main()
{
   int complex, a_real,a_img, b_real,b_img, c_img,c_real;

   printf("Enter a and b \nwhere a + ib is the first complex number.\n");
   scanf("%d%d", &a_real, &a_img);
   printf("Enter c and d \nwhere c + id is the second complex number.\n");
   scanf("%d%d", &b_real, &b_img);

   c_real = a_real + b_real;
   c_img = a_img + b_img;

   printf("Sum of the complex numbers: %d + %di\n", c_real, c_img);

   return 0;
}
