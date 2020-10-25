#include <studio.h>
#include <studlib.h>

int main()
        {
          srand (time(NULL));
          int a,b;
          int i=0;
          int k=0;
          printf ("Choose mode\n");
          printf ("1.You are creator of number\n");
          printf ("2.Your computer is creator of number\n");
          int inputov;
          char input;
          scanf_s("%d",&inputov);
        switch(inputov)
                   {
                           case 1:
                                  {
                                  printf("write the number\n");
                                  scanf_s("%d",&a);
                                  b=rand()%1000;
                                  while (a!='b')
                                            {
                                                    i++;
                                                    if (b>a)
                                                    b=b+rand()%(1000-b+1);
                                                    if (b<a)
                                                    b=rand()%(b+1);
                                            } 
                                  printf("number of tries %d",i);
                                  break;
                                  }
                           case 2:
                           {
                                   a=0+rand()%1000;
                                   printf("computer create the number. Try to find this number\n");
                                   printf("b- too big number, m-not enough, =-correct number\n");
                                   printf("write the number\n");
                                   scanf_s("%d",&b);
                                   printf("and ask advice\n");
			           while (a != b)
			               {
				         k+= 1;
				         scanf("%d", &b);
				         printf("\nadvice: \n");
				         scanf("%c", &input);
				         if (input == 'm')
				          {
					    if (a < b) printf("yes");
					    else printf("no");
				          }
				         if (input == 'b')
				           {
					      if (a > b) printf("yes");
					      else printf("no");
				           }
			               }
		                   printf("you find the number %d\n", a);
		                   printf("number of tries %d", k);
		                   break; 
                           }      
                   }    
         system('pause');
         return 0;
        }