#include<stdio.h>
#include<stdlib.h>
#include"math.h"
int main()
{
    double a;
    double b;
    double c;
    char d;
    printf("please input:\n");
    scanf("%c",&d);
    if (d=='+')
    {
        printf("ADD\n");
        scanf("%lf+%lf",&a,&b);
        c=add(a,b);
        printf("%lf\n",c);
    }
   if(d=='-')
   {
        printf("SUB\n");
        scanf("%lf-%lf",&a,&b);
        c=sub(a,b);
        printf("%lf\n",c);
   }
   if (d=='*')
   {
        printf("MUL\n");
        scanf("%lf*%lf",&a,&b);
        c=mul(a,b);
        printf("%lf\n",c);
   }
   if (d=='/')
   {
        printf("DIVS\n");
        scanf("%lf/%lf",&a,&b);
        c=divs(a,b);
        printf("%lf\n",c);
   }
    system("pause");
    return 0;
}
