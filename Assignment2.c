//Febonacci series
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int y=1,x=0,sum;
    printf("%d\n%d\n",x,y);
    for(;y<55;)
    {
        sum=x+y;
        printf("%d\n",sum);
        x=y;
        y=sum;

    }
    system("pause");
    return 0;
}


//print 19 numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=1;
    for(a=1;a<=19;a=a+2)
    {
        printf("%d\n",a);
    }
    system("pause");
    return 0;
}

//Program 2: 
#include<stdlib.h>
int main()
{
    int a=1,b=0;
    for(a=1;a<=17;a=a+2)
    {
        b=b+a;
        printf("%d\n",b);
    }
    system("pause");
    return 0;
}
