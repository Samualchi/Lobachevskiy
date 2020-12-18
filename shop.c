 #include <stdio.h>
 #include <stdlib.h>

 struct thing
    {
        int barcode;
        char name[10];
        int cost;
        float discount;
        float total;
        int num;
    };
 float a,b,c;
 void addspagetti()
    {   
        struct thing obj = { 3145,"spagetti", 120, 0.5 };
	    printf ("enter amount of product:");
	    scanf ("%d", &obj.num);
	    printf ("\n %s %d info:\n",obj.name, obj.barcode);
	    printf ("-------------------\n");
	    printf ("cost %d\n", obj.cost);
	    printf ("amount of product %d\n", obj.num);
	    printf ("discount %f\n", obj.discount);
	    float total = obj.num * obj.cost - obj.num * obj.cost * obj.discount;
	    obj.total=total;
	    printf ("total: %f\n", obj.total);
	    a=a+total;
	    c=c+obj.cost*obj.num;
    }
    
 void addwine()
    {
        struct thing obj = { 3642,"wine", 500, 0.7 };
	    printf ("enter amount of product:");
	    scanf ("%d", &obj.num);
	    printf ("\n %s %d info:\n",obj.name, obj.barcode);
	    printf ("-------------------\n");
	    printf ("cost %d\n", obj.cost);
	    printf ("amount of product %d\n", obj.num);
	    printf ("discount %f\n", obj.discount);
	    float total = obj.num * obj.cost - obj.num * obj.cost * obj.discount;
	    obj.total=total;
	    printf ("total: %f\n", obj.total);
	    a=a+total;
	    c=c+obj.cost*obj.num;
    }
    
 void addcake()
    {
        struct thing obj = { 4446,"cake", 100, 0.4 };
	    printf ("enter amount of product:");
	    scanf ("%d", &obj.num);
	    printf ("\n %s %d info:\n",obj.name,obj.barcode);
	    printf ("-------------------\n");
	    printf ("cost %d\n", obj.cost);
	    printf ("amount of product %d\n", obj.num);
	    printf ("discount %f\n", obj.discount);
	    float total = obj.num * obj.cost - obj.num * obj.cost * obj.discount;
	    obj.total=total;
	    printf ("total: %f\n", obj.total);
	    a=a+total;
	    c=c+obj.cost*obj.num;
    }
    
 void addlemon()
    {
        struct thing obj = { 6677, "lemon", 90, 0.6 };
	    printf ("enter amount of product:");
	    scanf ("%d", &obj.num);
	    printf ("\n %s %d info:\n",obj.name,obj.barcode);
	    printf ("-------------------\n");
	    printf ("cost %d\n", obj.cost);
	    printf ("amount of product %d\n", obj.num);
	    printf ("discount %f\n", obj.discount);
	    float total = obj.num * obj.cost - obj.num * obj.cost * obj.discount;
	    obj.total=total;
	    printf ("total: %f\n", obj.total);
	    a=a+total;
	    c=c+obj.cost*obj.num;
    }
    
 void addsugar()
    {
        struct thing obj = { 9400, "sugar",15, 0 };
	    printf ("enter amount of product:");
	    scanf ("%d", &obj.num);
	    printf ("\n %s %d info:\n",obj.name, obj.barcode);
	    printf ("-------------------\n");
	    printf ("cost %d\n", obj.cost);
	    printf ("amount of product %d\n", obj.num);
	    printf ("discount %f\n", obj.discount);
	    float total = obj.num * obj.cost - obj.num * obj.cost * obj.discount;
	    obj.total=total;
	    printf ("total: %f\n", obj.total);
	    a=a+total;
	    c=c+obj.cost*obj.num;
    }
    
 void addsalt()
    {
        struct thing obj = { 1645, "salt", 50, 0.6 };
	    printf ("enter amount of product:");
	    scanf ("%d", &obj.num);
	    printf ("\n %s %d info:\n",obj.name, obj.barcode);
	    printf ("-------------------\n");
	    printf ("cost %d\n", obj.cost);
	    printf ("amount of product %d\n", obj.num);
	    printf ("discount %f\n", obj.discount);
	    float total = obj.num * obj.cost - obj.num * obj.cost * obj.discount;
	    obj.total=total;
	    printf ("total: %f\n", obj.total);
	    a=a+total;
	    c=c+obj.cost*obj.num;
    }
    
 void addbread()
    {   
        struct thing obj = { 7604, "bread", 19, 0.1 };
	    printf ("enter amount of product:");
	    scanf ("%d", &obj.num);
	    printf ("\n %s %d info:\n",obj.name, obj.barcode);
	    printf ("-------------------\n");
	    printf ("cost %d\n", obj.cost);
	    printf ("amount of product %d\n", obj.num);
	    printf ("discount %f\n", obj.discount);
	    float total = obj.num * obj.cost - obj.num * obj.cost * obj.discount;
	    obj.total=total;
	    printf ("total: %f\n", total);
	    a=a+total;
	    c=c+obj.cost*obj.num;
    }
    
 int savecheck()
    {
        FILE *fc;
        struct thing obj;
        fc = fopen("check.txt","a+");
        fprintf(fc,"tovar %s (%d) ------------------%f\n%d rub\n%d amount of product\n%f discount\n\n", obj.name, obj.barcode, obj.total, obj.cost, obj.num,obj.discount);
        fclose(fc);
    }

 int main (void)
    { 
        extern float a;
        FILE *fc;
        int answer = 0, barcode;
        printf
        ("Welcome to the store .For now we have:bread (code:7604), salt (code:1645), sugar (code:9400), lemon (code:6677), cake (code:4446), wine (code:3642), spagetti (code:3145). Sooner the number of things will be increased.\n");
        printf
        ("----------------------------------\n");
        while (answer != 2)
            {
                printf ("Enter the barcode of the product\n");
                scanf ("%d", &barcode);
                switch (barcode)
         	{
     	case 7604:
            {
	            addbread();
	            savecheck();
	            break;
	        }
    	case 1645:
	        {
	            addsalt();
	            savecheck();
	            break;
	        }
	    case 9400:
	        {
	            addsugar();
	            savecheck();
	            break;
	        }
	    case 6677:
	        {
	            addlemon();
	            savecheck();
	            break;
	        }
	    case 4446:
	        {
	            addcake();
	            savecheck();
	            break;
	        }
	    case 3642:
	         {
	            addwine();
	            savecheck();
	            break;
	         }
	    case 3145:
	         {
	            addspagetti();
	            savecheck();
	            break;
	         }
	    default:
	    printf ("error\n");
	         }
                printf ("proceed to payment?\n");
                printf ("1. no.        ");
                printf ("2. yes\n");
                scanf ("%d", &answer);
            }
 b=(c-a)/c;
 fc = fopen("check.txt","a+");
 fprintf(fc,"------------------------------------------\ntotal cost: %f\ntotal discount: %f",a,b);
 fclose(fc);
 system("pause");
    }