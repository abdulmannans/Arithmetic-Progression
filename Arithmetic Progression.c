#include <stdio.h>
#include <conio.h>

void main()
{
    int a, d, tn ,n;
   printf("ARITHMETIC PROGRESSION v1.0 \n");
   printf("CREATED BY: ABDUL MANNAN\n\n\n");

   printf("ENTER INTIAL VALUE: ");
   scanf("%d",&a);
   printf("\nENTER DIFFRENCE: ");
   scanf("%d",&d);
   printf("\nENTER NTH TERM: ");
   scanf("%d",&n);
   tn=a+(n-1)*d;
   printf("THE %d TERM IS: %d ",n,tn);
   getch();
}
