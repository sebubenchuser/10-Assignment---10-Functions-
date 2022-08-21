                                          //Assignment - 10 (Functions )(completed)


//1. Write a function to calculate the area of a circle. (TSRS)

   #include<stdio.h>
   float area(int x);
   int main()
   {
     int r;
     float A;
     printf("Enter radious of circle");
     scanf("%d",&r);
     A=area(r);
     printf("%f",A);
   }
   float area(int x)
   {
       return 3.14*x*x;
   }

//2. Write a function to calculate simple interest. (TSRS)

  /*#include<stdio.h>
  float simple_interest(int x,int y,int z);
  int main()
  {
      int p,r,t;
      float s;
      printf("Enter principle,interest rate,time");
      scanf("%d%d%d",&p,&r,&t);
      s=simple_interest(p,r,t);
      printf("%f",s);
      return 0;
  }
  float simple_interest(int x,int y,int z)
  {
      return x*y*z/100.0;
  }*/


/*3. Write a function to check whether a given number is even or odd. Return 1 if the
   number is even, otherwise return 0. (TSRS)*/

   /*#include<stdio.h>
   int check(int x);
   int main()
   {
       int n;
       printf("Enter a number");
       scanf("%d",&n);
       printf("%d",check(n));
       return 0;
   }
   int check(int x)
   {
       if(x%2==0)
       {
           return 1;
       }
       else
       return 0;
   }*/

//4. Write a function to print first N natural numbers (TSRN)

/*#include<stdio.h>
void natural_number(int x);
int main()
{
    int n;
    printf("Enter n number");
    scanf("%d",&n);
    natural_number(n);
    return 0;
}
void natural_number(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        printf("%d ",i);
    }
}*/

//5. Write a function to print first N odd natural numbers. (TSRN)

  /*#include<stdio.h>
  void odd_natural(int x);
  int main()
  {
      int n;
      printf("Enter n number");
      scanf("%d",&n);
      odd_natural(n);
      return 0;
  }
  void odd_natural(int x)
  {
      int i;
      for(i=1;i<=x;i++)
      {
          if(i%2!=0)
          printf("%d ",i);
      }
  }*/


//6. Write a function to calculate the factorial of a number. (TSRS)

  /*#include<stdio.h>
  int factorial(int x);
  int main()
  {
      int n;
      printf("Enter a number");
      scanf("%d",&n);
      printf("%d",factorial(n));
      return 0;
  }
  int factorial(int x)
  {
      int fac=1;
      while(x>0)
      {
        fac=fac*x;
        x--;
      }
      return fac;
  }*/

/*7. Write a function to calculate the number of combinations one can make from n items
    and r selected at a time. (TSRS)*/

    /*#include<stdio.h>
    int combination(int x,int y);
    int main()
    {
        int n,r;
        printf("For combination enter value of n and r");
        scanf("%d%d",&n,&r);
        printf("%d",combination(n,r));
        return 0;
    }
    int combination(int x,int y)
    {
        int x1=1,y1=1,s1=1;
        int s;
        s=x-y;
        while(x>0)
        {
            x1=x1*x;
            x--;
        }
        while(y>0)
        {
            y1=y1*y;
            y--;
        }
        while(s>0)
        {
            s1=s1*s;
            s--;
        }
        return x1/y1*s1;
    }*/

/*8. Write a function to calculate the number of arrangements one can make from n items
   and r selected at a time. (TSRS)*/

   /*#include<stdio.h>
   int arrangements(int x,int y);
   int main()
   {
       int n,r;
       printf("Enter total element and element of arrangements");
       scanf("%d%d",&n,&r);
       printf("%d",arrangements(n,r));
       return 0;
   }
   int arrangements(int x,int y)
   {
       int s,s1=1,x1=1;
       s=x-y;
       while(x>0)
       {
          x1=x1*x;
          x--;
       }
       while(s>0)
       {
          s1=s1*s;
          s--;
       }
       return x1*s1;
   }*/

//9. Write a function to check whether a given number contains a given digit or not.(TSRS)

 /* #include<stdio.h>
  int check(int x,int y);
  int main()
  {
      int n,d;
      printf("Enter a number");
      scanf("%d",&n);
      printf("Enter a digit");
      scanf("%d",&d);
      printf("%d",check(n,d));
      return 0;
  }
  int check(int x,int y)
  {
      int l,c=0;
      while(x>0)
      {
         l=x%10;
         if(l==y)
         {
             c++;
         }
         x=x/10;
      }
      if(c==0)
      return 0;
      else
      return 1;
  }*/

/*10. Write a function to print all prime factors of a given number. For example, if the
    number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/

    /*#include<stdio.h>
    void prime_factors(int x);
    int main()
    {
        int n;
        printf("Enter a number");
        scanf("%d",&n);
        prime_factors(n);
        return 0;
    }
    void prime_factors(int n)
    {
        int i,c,j;
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                c=0;
                for(j=1;j<=i;j++)
                {
                    if(i%j==0)
                    {
                        c++;
                    }
                }
                if(c==2)
                printf("%d ",i);
            }
        }
    }*/


