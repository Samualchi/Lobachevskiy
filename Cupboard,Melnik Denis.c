#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
    {
    float h = 0;//высота
    float w = 0;//ширина
    float d = 0;//глубина
    float a = 0.5;//толщина из двп
    float b = 1.5;//толщина из дсп
    float c = 1;//толщина из дерева
    float p1=0.82;//плотность двп
    float p2=0.8;//плотность дсп
    float p3=0.52;//плотность дерева (для задачи взята сосна)
    float m1=0;//масса задней стенки из двп
    float m2=0;//масса 2-х боковых стенок из дсп
    float m3=0;//масса верхней и нижней накладной крышки из дсп
    float m4=0;//масса 2-х дверей из дерева. Их высота равна высоте шкафа-нижняя крышка
    float m5=0;//масса всех полок из дсп
    float fin=0;//вес всего шкафа
    int k = 0;//кол-во полок без верхней полки
    int r = 40;//расстояние между полками
    printf("Write width and depth of cupboard\n");
    scanf_s("%f%f", &w, &d);
    if ((w < 80 || w>120) || (d < 50 || d>90))
    {
        printf("Information is incorrect, try again");
    }
    else
        if ((w >= 80 && w <= 120) && (d >= 50 && d <= 90));
         {
             h = h + a;
             {
                 do
                 {
                     h = h + a + r;
                     k = k + 1;
                 } 
                 while (h <= 220 - 40);
             }
             k = k - 1;
             m1 = w * h * a * p1;
             m2 = (h - b - b) * d * b *2 * p2;
             m3 = w * d * b *2 * p2;
             m4 = (h - b) * w * c * p3;
             m5 = (w - b - b) * d * b * p2 * k;
             fin = (m1 + m2 + m3 + m4 + m5) / 1000;
             printf("\n %f kg", fin);
         }
     return 0;
    }

      