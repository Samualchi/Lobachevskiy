#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void num2()
         {
            int ch, a1, a2, b1 = 0, b2 = 0, bull = 0, cows = 0;
	        do ch = 10 + rand()%90;
	        while (ch % 10 == ch / 10);
	        ch = 10 + rand() % 90;
	        printf("\n%d", ch);
	        a1 = ch / 10;
	        a2 = ch % 10;
	        while ((a1 != b1) || (a2 != b2))
	        {
		         printf("\nenter digits separated by to verify\n");
		         scanf("%d%d", &b1, &b2);
		         if (b1 == a1) bull++;
		         if (b2 == a2) bull++;
		         if (b1 == a2) cows++;
		         if (b2 == a1) cows++;
		         if (bull == 2) printf("you win");
		         else
			        printf("\ncount of bulls: %d, count of cows: %d", bull, cows);
	        }                   
         }

void num3()
         {
           int ch, a1, a2, a3, b1 = 0, b2 = 0, b3 = 0, bull = 0, cows = 0;
	       do ch = 100 + rand() % 900;
	       while ((ch % 100) == (ch % 100 / 10) || (ch % 100 / 10) == (ch % 10) || (ch % 100) == (ch % 10));
	       printf("%d", ch);
	       a1 = ch / 100;
	       a2 = ch / 10 % 10;
	       a3 = ch % 10;
	       while ((a1 != b1) || (a2 != b2) || (a3 != b3))
	        {
		         printf("\nenter digits separated by to verify\n");
		         scanf("%d%d%d", &b1, &b2, &b3);
		         if (b1 == a1) bull++;
		         if (b2 == a2) bull++;
		         if (b3 == a3) bull++;
		         if (b1 == a2) cows++;
		         if (b1 == a3) cows++;
		         if (b2 == a3) cows++;
		         if (b2 == a1) cows++;
		         if (b3 == a1) cows++;
		         if (b3 == a2) cows++;
		         if (bull == 3) printf("you win");
		         else
			        printf("\ncount of bulls: %d, count of cows: %d", bull, cows);
	        } 
         }

void num4()
         {
            int ch, a1, a2, a3, a4, b1 = 0, b2 = 0, b3 = 0, b4 = 0, bull = 0, cows = 0;
	        do ch = 1000 + rand() % 9000;
	        while ((ch / 1000) == (ch / 100 % 10) || (ch / 1000) == (ch / 10 % 10) || (ch / 1000) == (ch % 10) || (ch / 100 % 10) == (ch / 10 % 10) || (ch / 100 % 10) == (ch % 10) || (ch / 10 % 10) == (ch % 10));
	        printf("%d", ch);
	        a1 = ch / 1000;
	        a2 = ch / 100 % 10;
	        a3 = ch / 10 % 10;
	        a4 = ch % 10;
	        while ((a1 != b1) || (a2 != b2) || (a3 != b3) || (a4 != b4))
	        {
		         printf("\nenter digits separated by to verify\n");
		         scanf("%d%d%d%d", &b1, &b2, &b3, &b4);
		         if (b1 == a1) bull++;
		         if (b2 == a2) bull++;
		         if (b3 == a3) bull++;
		         if (b4 == a4) bull++;
		         if (b1 == a2) cows++;
		         if (b1 == a3) cows++;
		         if (b1 == a4) cows++;
		         if (b2 == a3) cows++;
		         if (b2 == a1) cows++;
		         if (b2 == a4) cows++;
		         if (b3 == a1) cows++;
		         if (b3 == a2) cows++;
		         if (b3 == a4) cows++;
		         if (b4 == a1) cows++;
		         if (b4 == a2) cows++;
		         if (b4 == a3) cows++;
		         if (bull == 4) printf("you win");
		         else
			         printf("\ncount of bulls: %d, count of cows: %d\n", bull, cows);
	        }
         }
void num5()
         {
            int ch, a1, a2, a3, a4, a5, b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, bull = 0, cows = 0;
	        do ch = 10000 + rand() % 90000;
	        while ((ch / 10000) == (ch / 1000 % 10) || (ch / 10000) == (ch / 100 % 10) || (ch / 10000) == (ch / 10 % 10) || (ch / 10000) == (ch % 10) || (ch / 1000 % 10) == (ch / 100 % 10) || (ch / 1000 % 10) == (ch / 10 % 10) || (ch / 1000 % 10) == (ch % 10) || (ch / 100 % 10) == (ch / 10 % 10) || (ch / 100 % 10) == (ch % 10) || (ch / 10 % 10) == (ch % 10));
	        printf("%d", ch);
	        a1 = ch / 10000;
	        a2 = ch / 1000 % 10;
	        a3 = ch / 100 % 10;
	        a4 = ch / 10 % 10;
	        a5 = ch % 10;
	        while ((a1 != b1) || (a2 != b2) || (a3 != b3) || (a4 != b4) || (a5 != b5))
	        {
		         printf("\nenter digits separated by to verify\n");
		         scanf("%d%d%d%d%d", &b1, &b2, &b3, &b4, &b5);
		         if (b1 == a1) bull++;
		         if (b2 == a2) bull++;
		         if (b3 == a3) bull++;
		         if (b4 == a4) bull++;
		         if (b5 == a5) bull++;
		         if (b1 == a2) cows++;
		         if (b1 == a3) cows++;
		         if (b1 == a4) cows++;
		         if (b1 == a5) cows++;
		         if (b2 == a3) cows++;
		         if (b2 == a1) cows++;
		         if (b2 == a4) cows++;
		         if (b2 == a5) cows++;
		         if (b3 == a1) cows++;
		         if (b3 == a2) cows++;
		         if (b3 == a4) cows++;
		         if (b3 == a5) cows++;
		         if (b4 == a1) cows++;
		         if (b4 == a2) cows++;
		         if (b4 == a3) cows++;
		         if (b4 == a5) cows++;
		         if (b5 == a1) cows++;
		         if (b5 == a2) cows++;
		         if (b5 == a3) cows++;
		         if (b5 == a4) cows++;
		         if (bull == 5) printf("you win");
		         else
			         printf("\ncount of bulls: %d, count of cows: %d\n", bull, cows);
	        }
         }
int main()
         {
             int n;
             srand(time(0));
             printf("input length from 2 to 5\n");
             scanf("%d", &n);
             switch (n)
                     {
                         case 2:
                               {
                                   num2();
                                   break;
                               }
                         case 3:
                               {
                                   num3();
                                   break;
                               }
                         case 4:
                               {
                                   num4();
                                   break;
                               }
                         case 5:
                               {
                                   num5();
                                   break;
                               }
                     }
             system("pause");
             return 0;    
         }