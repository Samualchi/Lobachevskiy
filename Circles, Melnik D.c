

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
    {
    float x1, y1, r1, x2, y2, r2, c;
    printf("Write radiouses for first circle/second circle\n");
    scanf_s("%f%f", &r1, &r2);
    printf("Write cooridantes for the center of first circle/second circle\n");
    scanf_s("%f%f%f%f", &x1, &y1, &x2, &y2);
    c = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    c = c - r1 - r2;
    if (c == 0) 
        {
        printf("Circles are crossing in 1 point");
        }
    if ((r1 == r2) && (x1 == x2) && (y1 == y2))
        {
        printf("Circles are identical");
        }
    if (c > 0)
        {
        printf("circles aren't crossing");
        }
    if (c < 0)
       {
        printf("Circles are crossing in 2 points");
       }
    if ((x1 == x2) && (y1 == y2) && !(r1 == r2))
       {
        printf("circles have identical centers");
       }
    system("pause");
    return 0;
    }
#include <stdio.h>
#include<stdlib.h>
#include<math.h>