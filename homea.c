#include<stdio.h>
#include<math.h>
#include<limits.h>
//int main ()
// {
//    int L1,L2,G1,G2;
//    float D;
//    printf("tnter the value of L1 and L2\n");
//    scanf("%d %d",&L1,&L2);
//    printf("enter the value of G1 and G2\n");
//    scanf("%d%d",&G1,&G2);
//    D=(3963.00)*acos((sin(L1))* (sin(L2)) + (cos(L1))*(cos(L2))*cos(G2 -G1)) ;
//    printf("%f",D);
// return 0;
// }
// 
// {
//     int t,v;
//     float wcf ;
//     printf("enter the value of t,v \n");
//     scanf("%d %d",&t,&v);
//     wcf=35.74 + 0.6215*t +(0.4275*t -35.75)*pow(v,0.16);
//     printf("%f",wcf);
//     return 0;
//           



// 
// {
//     int a,b,c,sum;
//     printf("enter the value of a,b,c\n");
//     scanf("%d%d%d",&a,&b,&c);
//     sum=a+c+b;
//     if(sum==180 && a!=0 && b!=0 && c!=0)
//     printf("the triangle is perfect\n");
//     else
//     printf("invalid traingle");
//     return 0;
    
// }





// {
//     int a;
//     printf("enter the value of a\n");
//     scanf("%d",&a);
//     if(a<0)
//     {
//         a= abs(a);
//         printf("absolute value is %d",a);
//     }
//     else 
//     printf("its absolute value is %d",a);
//     return 0;
// }




// {
//     int l,b,A,P;
//     printf("enter the value of l and b\n");
//     scanf("%d%d",&l,&b);
//     A=l*b;
//     P=2*(l+b);
//     if(A>P)
//     printf("area of recatngle is greater than its perimeter\n");
//     else
//     printf("perameter is greater than its area");
//     return 0;
// }




// {
//     int x1,x2,x3,y1,y2,y3 ,A;
//     printf("enter the value of x1 and y1\n");
//     scanf("%d%d",&x1,&y1);
//      printf("enter the value of x2 and y2\n");
//     scanf("%d%d",&x2,&y2);
//      printf("enter the value of x3 and y3\n");
//     scanf("%d%d",&x3,&y3);
//     A= x1*(y2 - y3) +x2*( y3 - y1) + x3*(y1 - y1);
//     if(A==0)
//     printf("these points are collinear\n");
//     else 
//     printf("these points are not collinear \n");
//     return 0;
// }





// {
//     int x,y;
//     float dis,r;
//     printf("enter the value of x,y,r\n");
//     scanf("%d%d%f",&x,&y,&r);
//     dis=sqrt( pow(x,2.0) + pow(y,2.0));
//     if(dis==r)
//     printf("point lies on circle\n");
//     else
//     {
//         if(dis>r)
//         printf("point lies outside the circle\n");
//         else 
//         printf("point lie inside the circle\n");
//     }
//     return 0;
// }





// {
//     int x,y;
//     printf("enter the value of x and y\n");
//     scanf("%d%d",&x,&y);
//     if(x==0 && y==0)
//     printf("point lies on origin\n");
//     else{
//         if (x!=0 && y==0)
//         printf("point lies on x-axis");
//         else 
//         {
//             if(x==0 && y!=0)
//             printf("point lies on y-axis");
//             else 
//             printf("point lies betwwem the quadrants");
//         }
//     }
//     return 0;
// }




// {
//     int yr;
//     printf("enter the year\n");
//     scanf("%d",&yr);
//     if(yr%400==0 || yr%100!=0 && yr%4==0)
//     printf("year is leap year\n");
//     else 
//     printf("yaer   is not leap year");
//     return 0;
// }



// {
//     char ch;
//     printf("enter the character\n");
//     scanf("%c",&ch);
//     if(ch>=65 && ch<=90)
//     printf("character is upper case\n");
//     else if(ch>=97 && ch<=122)
//     printf("character is small case");
//     else if(ch>=48 && ch<=57)
//     printf("entered character is digit\n");
//     else if( (ch>=0 && ch<=47 )||( ch>=58 && ch<=64) ||( ch>=91 && ch<=96 )||(ch>=123 && ch<=127 ))
//     printf("character are special symbols ");
//     return 0;

// }





// {
//     int side1,side2,side3,sum,longest;
//     printf("enter the value of side1 ,side2 and side3\n");
//     scanf("%d%d%d",&side1,&side2,&side3);
//     if(side1>side2)
//     {
//         if(side1>side3)
//         {
//         sum=side2 + side3; longest=side1;
//         }
//         else
//         {
//         sum=side1 + side2; longest=side3;
//         }
//     }
//     else
//     { 
//         if(side2>side3)
//         {
//         sum=side1+side3; longest=side2;
//         }
//         else
//         {
//         sum=side1+ side2; longest=side3;
//         }
//     }
//     if(sum>longest)
//     printf("this triangle is valid\n");
//     else
//     printf("trianle is not valid");
//     return 0;
// }





// {
//     float a,b,c;
//     printf("enter the sides a ,b, c (a,b,c>0)\n");
//     scanf("%f%f%f",&a,&b,&c);
//     if(a==b && b==c)
//     printf("this triangle is equilateral traingle\n");
//     else if (a==b||b==c||a==c)
//     printf("this is isosceles triangle\n");
//      else if (pow(a,2) ==pow(b,2) + pow(c,2) || pow(b,2)==pow(a,2) + pow(c,2) || pow(c,2) ==pow(a,2) + pow(b,2))
//     printf("this is right angled triangle");
//     else 
//     printf("this is scelene triangle\n");
   
//     return 0;
// }





// {
//     float red,green,blue,white,max;
//     float cyan,magneta,yellow,black;
//     printf("write the value of red , greem , blue inthe range of [0,255]\n");
//     scanf("%f%f%f",&red,&green,&blue);
//     if(red==0 && green==0 && blue==0)
//     {
//         cyan=0;magneta=0;yellow =0; black=1;
//     }
//     else
//     {
//     red=red/255; green=green/255; blue=blue/255;
//     max=red;
//     if(green>max)
//     max=green;
//     else if (blue>max)
//     {
//         max=blue;/* code */
//     }
//     white=max;
//     cyan=(white -red)/white;
//     magneta = (white -green)/white;
//     yellow = (white -blue)/white;
//     black =1 -white;
//     }
//     printf("the code is =(%f,%f,%f,%f)",cyan,magneta,yellow,black);
//     return 0;
// }





// {
//     int h,t;
//     float c;
//    printf("enter the value of hardness ,carbon content and tensile strenght\n");
//    scanf("%d%f%d",&h,&c,&t);
//    if(h>50 && c<0.7 && t>5600)
//    printf("grade 10\n");
//    else if (h>50 && c<0.7)
//    printf("grade 9\n");
//    else if (c<0.7 && t>5600)
//    printf("grade 8\n");
//    else if (h>50 && t>5600)
//    printf("grade 7\n");
//    else if (h>50 || c<0.7 || t>5600)
//    printf("grade 6\n");
//    else
//    printf("grade 5");
//    return 0;

// }





// {
//     float weight, height,bmi;
//     printf("enter the weight(in kg) and height(in m)\n");
//     scanf("%f%f",&weight,&height);
//     bmi=(weight/height)/height;
//     if(bmi<15)
//     printf("starvation\n");
//     else if(bmi>=15.1 && bmi<=17.5)
//     printf("anorexic\n");
//     else if(bmi>=17.6 &&bmi<=18.5)
//     printf("underwight");
//     else if(bmi>=18.6 && bmi<=24.9)
//     printf("ideal");
//     else if(bmi>=25 && bmi<=29.9)
//     printf("overweight");
//     else if(bmi>=30 && bmi <=39.9)  
//     printf("obese");
//     else if(bmi>=40)
//     printf("morbidly obese");
//     return 0;
// }





// {
//     int p,n,count;
//     float r,si;
//     count =1;
//     while(count>=0)
//     {
//     printf("\nenter the value of p,n and r\n");
//     scanf("%d%d%f",&p,&n,&r);
//     si=(p*n*r)/100;
//     printf("simple interest =%f",si);
//     count=count +1;
//     }
//     return 0;
// }





// {
//     int num,a,b,c,d,e;
//     printf("enter five digit number\n");
//     scanf("%d",&num);
//     a=num%10;
//     num=num/10;
//     b=num%10;
//     num=num/10;
//     c=num%10;
//     num=num/10;
//     d=num%10;
//     num=num/10;
//     e=num%10;
//     printf("%d%d%d%d%d",a,b,c,d,e);
//     return 0;
// }





// {
//     int i=0;
//     while(++i<10)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }


// {
//     int h,ot,i=1;
//     while(i<=10)
//     {
//         printf("enter the number of hours work by employee\n");
//         scanf("%d",&h);
//         if(h>40)
//         ot=120*(h-40);
//         else {
//         ot =0;}
//         printf("no. of hrs worked =%d  and \n overtime pay=%d\n\n\n\n\n\n\n\n\n\n\n\n\n\n ", h,ot);
//         i++;
//     }
//}




// {
//     int num,i=1,fact=1;
//     printf("enter the number\n");
//     scanf("%d",&num);
//     while(i<=num)
//    { 
//     fact=fact*i;
//     i++;
//    }
//    printf("%d",fact);
//    return 0;
// }




// {
//     float x,power;
//     int y,i;
//     power=i=1;
//     printf("enter the value of x and y\n");
//     scanf("%f%d",&x,&y);
//     while(i<=y)
//     {
//         power=power*x;
//         i++;
//     }
//     printf("%f raised to power of %d is %f",x,y,power);
//     return 0;
// }


// {
//       int i=0;
//     while(i<=255)
//     {
//         printf("%d %c\n",i,i);
//         i++;
//     }
// return 0;
// }





// {
//     int a,b,c,i=1;
//     while(i<=500)
//     {
//     a=i/100;i=i%100;
//     b=i/10; i=i%10;
//     c=i/1;
//     i=a*100 +b*10 +c*1;
//     if(i==a*a*a +b*b*b +c*c*c)
//     {
//     printf("%d*%d*%d +%d*%d*%d + %d*%d*%d \n",a,a,a,b,b,b,c,c,c);
//     i++;

//     }
//     else
//     i++;
//     }
//     return 0;
// }



                                                             //{
                                                             //    int m=21,p,c;
                                                             //    while(1)
                                                             //     {
                                                             //         printf("\nno. of matchstick left=%d\n",m);
                                                             //         printf("pick the stick 1 or 2 or 3 or 4\n");
                                                             //         scanf("%d",&p);
                                                             //         if(p>4 || p<1)
                                                             //         continue;
                                                             //         m=m-p;
                                                             //         printf("no. of matchstick left=%d\n",m);
                                                             //         c=5-p;
                                                             //         printf("out of which computer pick=%d\n",c);
                                                             //         m=m-c;
                                                             //         if(m==1)
                                                             //         {
                                                             //             printf("no. of matchstick left=%d\n",m);
                                                             //            printf("you have lost\n");
                                                             //            break;
                                                             //         }
                                                             //     }
                                                             //     return 0;
                                                             // }




// {
//     int num,p=0,n=0,z=0,ans;
    
//     while(1)
//     {
//         printf("\n enter the number\n");
//         scanf("%d",&num);
//         if(num>0)
//         p=p+1;
//         if(num<0)
//         n=n+1;
//         if(num==0)
//         z=z+1;
//         printf("do you want to continue yes=1 an n=0\n");
//         scanf("%d",&ans);
//         if(ans==1)
//         continue;
//         if(ans==0)
//         break;
//     }
//     printf("no of postitive=%d\n no. ofnegative=%d\n no. of zero=%d",p,n,z);
//     return 0;

// }






// {
// int small,big,num,lim,range;
// printf("enter the limit\n");
// scanf("%d",&lim);
// printf("enter the %d numbers\n",lim);
// scanf("%d",&num);
// big=small=num;

// lim = lim-1;

// while(lim)
// {
//     scanf("%d",&num);
//     if(num>big)
//     big=num;
//     if(num<small)
//     small=num;
//     lim--;
// }
// range=big-small;
// printf("small number=%d\n big number=%d\n",small,big);
// printf("%d",abs(range));
// return 0;
// }





 //{
 //    int num,i,flag=0;
 //    printf("enter the number\n");
 //    scanf("%d",&num);
 //    for(i=2;i<num;i++)
 //    {
 //        if(num%i==0)
 //       { 
 //        flag=1;
 //        break;
 //       }
 //         if(num%i!=0)
 //         {
 //            flag=0;
 //            continue;
 //         }
 //
 // }
 //if(flag==1)
 //printf("not prime\n");
 //if(flag==0)
 //printf("prime\n");
 // return 0;
 //}





//  {
//     int n=1,i;
//     for(n=1;n<=300;n++)
//     {
//         for(i=2;i<n;i++)
//         {
//             if(n%i==0)
//             break;
//         }
//         if(n==i)
//         {
//             printf("%d\t",n);
//             continue;
//         }
//     }
//     return 0;
//  } 





// {
//     char another;
//     int num;
//     do
//     {
//       printf("enter a number \n");
//       scanf("%d",&num);
//       //scanf("%c",&another);
//       printf("square of %d is %d\n",num,num*num);
//       printf("want to enter again y\n");
//       // fflush(stdin);
//       scanf("%c",&another);
//     } while (another=='y');
//     return 0;
// }
                                                                     //{
                                                                     //    float sum=0.0,fact=1.0;
                                                                     //    int n=1,i;
                                                                     //    for(n=1;n<=7;n++)
                                                                     //    {
                                                                     //        fact=1.0;
                                                                     //        for(i=1;i<=n;i++)
                                                                     //        {
                                                                     //        fact=fact*i;
                                                                     //        }
                                                                     //        sum=sum+ (n/fact);
                                                                     //        
                                                                     //    }
                                                                     //    printf(" sum of first seven digit is%f\n",sum);
                                                        
                                                                     //}
// {
//     int i,j,k;
//     for(i=1;i<=3;i++)
//     {
//         for(j=1;j<=3;j++)
//         {
//             for(k=1;k<=3;k++)
//             {
//                 printf("%d %d %d\n",i,j,k);
//             }
//         }
//     }
//     return 0;
// }




// {
//     int num,i;
//     printf("enter the number\n");
//     scanf("%d",&num);
//     for(i=1;i<=10;i++)
//     {
//     printf("%d*%d=%d\n",num,i,num*i);
//     }
//     return 0;
// }




// {
//     int y;
//     float i,x;
//     for(y=1;y<=6;y++)
//     {
//         for(x=5.5;x<=12.5;x+=0.5)
//         {
//             i=2+(y + 0.5*x);
//             printf("y=%d   x=%f    i=2+(y + 0.5*x)= %f\n",y,x,i);
//         }
//     }
//     return 0;
// }




// {
//     int q,n,p,i;
//     float r,a;
//     for(i=1;i<=10;i++)
//     {
//         printf("enter the principle amount\n");
//         scanf("%d",&p);
//         printf("enter the number of years\n");
//         scanf("%d",&n);
//         printf("interest compound per year\n");
//         scanf("%d",&q);
//         printf("interest rate\n");
//         scanf("%f/100",&r);
//         a=p*pow(1+r/q,n*q);
//         printf("a=%f\n",a);
//     }
//     return 0;
// }





// {
//     int i;
//     float t,b,x,sum=0.0;
//     printf("enter a number\n");
//     scanf("%f",&x);
//     t=((x-1)/x );
//     sum=sum+t;
//     for(i=2;i<=7;i++)
//     {
       
//         b=0.5*pow(t,i);
//         sum=sum+  b;
//     }
//     printf("%f",sum);
//     return 0;
// }




// {
//     int a,b,i,c;
    
//     for(c=1;c<=30;c++)
//     {
//         for(a=1;a<c;a++)
//         {
//             for(b=1;b<c;b++)
//             {
//             if(a*a + b*b==c*c)
//             printf("(%d,%d,%d)\n",a,b,c);
//             }
//         }
//     }
//      return 0;
// }




    // int calsum(int x, int y, int z);
    // {
    //     int d;
    //     d= x+y+z;
    //     return d;
    // }
    // int main()
    // {
    // int a,b,c,sum;
    // printf("enterthe value of a , b and c\n");
    // scanf("%d %d %d",&a,&b,&c);
    // sum=calsum(a,b,c);
    // printf("sum=%d",sum);
    // return 0;
    // }
    // int calsum(int f, int g, int h)
    // {
    // int d;
    // d= f+g+h;
    //  return d;
    //  }





// int factorial(int n)
// {
//    int fact=1 ,i;
//    for(i=1;i<=n;i++)
//    {
//     fact=fact*i;
//    }
//    return fact ;
// }
// int main(){
//     int n,fact;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     fact=factorial(n);
//     printf("%d",fact);
//     return 0;
// }




// int power(int a,int b)
// {
//     int i,pow=1;
//     for(i=1;i<=b;i++)
//     {
//         pow=pow*a;
//     }
//     return pow;
// }
// int main()
// {
//     int a,b,pow;
//     printf("enter the value of a\n");
//     scanf("%d",&a);
//      printf("enter the value of b\n");
//     scanf("%d",&b);
//     pow=power(a,b);
//     printf("%d",pow);
//     return 0;
// }





// void roman(int num)
// {
//     while(num)
//     {
//         if(num>=1000){
//         printf("m");
//         num=num-1000;}
//         else if( num>=500)
//         {
//             printf("d");
//             num=num-500;
//         }
//         else if(num>=100)
//         {
//             printf("c");
//             num=num-100;
//         }
//          else if(num>=50)
//         {
//             printf("l");
//             num=num-50;
//         }
//          else if(num>=10)
//         {
//             printf("x");
//             num=num-10;
//         }
//          else if(num>=5)
//         {
//             printf("v");
//             num=num-5;
//         }
//         else if(num>=1)
//         {
//             printf("i");
//             num=num-1;
//         }
//     }
       printf("\n");
// }
// int main()
// {
//     int yr;
//     printf("enter the year\n");
//     scanf("%d",&yr);
//     roman(yr);
//     return 0;
// }



                           
                           // int roman(int ,int ,char );
                           // int main ()
                           // {
                           //     int yr ;
                           //     printf("enter the year\n");
                           //     scanf("%d",&yr);
                           //     yr=roman(yr,1000,'m');
                           //     yr=roman(yr,500,'d');
                           //     yr=roman(yr,100,'c');
                           //     yr=roman(yr,50,'l');
                           //     yr=roman(yr,10,'x');
                           //     yr=roman(yr,5,'v');
                           //     roman(yr,1,'i');
                           //     return 0;
                           // }
                           // int roman(int x,int y, char ch )
                           // {
                           //     int i,j;
                           //     j=x/y;
                           //     for(i=1;i<=j;i++)
    
                           //         printf("%c",ch);
                           //         return x%y;
                               
                           // }




// void leapornot(int yr)
// {
//     if((yr%400==0 || yr%100!=0 ) && yr%4==0)
//     printf("%d is leap year",yr);
//     else 
//     printf(" not leap year",yr);
// }
// int main()
// {
//     int yr;
//     printf("enter the year\n");
//     scanf("%d",&yr);
//     leapornot(yr);
//     return 0;
// }



// void primefactor(int num)
// {
// int count ;
// printf("prime factors of %d is:",num);
// for(count=2;num>1;count++)
// {
//     while(num%count==0)
//     {
//         printf("%d ",count);
//         num=num/count;
//     }
  
// }
// }
// int main()
// {
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     primefactor(n);
//     return 0;
// }
  


// int decreasing(int n)
// {
//      printf("%d\n",n);
//      if(n==1) return 0;
//     int rec=decreasing(n-1);
//     return rec;
// }
// int main()
// {
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     decreasing(n);
//     return 0;
// }



// void increasing(int n)
// {

//      printf("%d\n",n);
//      if(n==0) return ;
//     increasing(n-1);
//     printf("%d\n",n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     increasing(n);
//     return 0;
// }  



// void summation(int x)
// {
//     int sum=0,i;
//     for(i=1;i<=x;i++)
//     {
//         sum=sum+i;
//     }
//     printf("%d",sum);
//     return ;
// }
// int main ()
// {
//     int n , sum;
//     printf("enter the number:");
//     scanf("%d",&n);
//     summation(n);
//     return 0;
// }


// void summation(int x,int sum)
// {
//     if(x==0)
//     {
//         printf("%d",sum);
//         return;
//     }
//     summation(x-1,sum+x);
//     return ;
// }
// int main ()
// {
//     int n , sum;
//     printf("enter the number:");
//     scanf("%d",&n);
//     summation(n,0);
//     return 0;
// }


// void power(int x, int y,int pow)
// {
//     int i;
//     if(y==0) 
//     {
//         printf("%d",pow);
//         return;
//     }
//     power(x,y-1,pow*x);
//     return;
// }
// int main ()
// {
//     int a,b;
//     printf("enter the numbers:\n");
//     scanf("%d %d",&a,&b);
//     power(a,b,1);
//     return 0;
// }


// int main()
// {
//    int a=1,b=1,sum,i,n;
//    printf("enter the number\n");
//    scanf("%d",&n);

//    for(i=3;i<=n;i++)
//    {
//     sum=a+b;
//     a=b;
//     b=sum;
//    printf("%d\n",sum);
//    }
//    printf("%d\n",sum);
   
//    return 0;
// }


// int fibonacci(int n)
// {
//     if(n<=2) return 1;
//     return fibonacci(n-1) + fibonacci(n-2) ;
// } 
// int main()
// {
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     printf("%d",fibonacci(n));
//     return 0;
// }


// int sum(int x , int add)
// {
//     add=add + x%10;
//     if(x==0) return add;
//     return sum(x/10,add);
    
// }
// int main()
// {
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     printf("%d",sum(n,0));
//     return 0;
// }




// void factor(int x, int count)
// {
//     if(x>=count)
//     {
//     if(x%count==0)
//     {
//         printf("%d\n",count);
//         x=x/count;
//     }
//     else 
//     count++;
//     factor(x,count);
//     }
// }
// int main()
// {
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     factor(n,2);
//     return 0;
// }





// int main()
// {
//     int n,count;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     for(count=2;n>1;count++)
//     {
//         while(n%count==0)
//         {
//             printf("%d\n",count);
//             n=n/count;
//         }
//     }
//     return 0;
// }



// int fibo(int n)
// {
//     if(n==1||n==2) return 1;
//     return fibo(n-1) + fibo(n-2);
// }
// int main()
// {
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     printf("%d",fibo(n));
//     return 0;
// }



// int sum(int x,int add)
// {
    
//     if(x==0) return add;
//     return sum(x-1,add+x);
// }
// int main()
// {
//     int n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     printf("%d",sum(n,0));
//     return 0;
// }



// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     printf("%p\n",&arr[0]);
    
     
//     return 0;
// }






// int main(){
//     int i ,add=0;
//     int sum[10];
//     for(i=0;i<10;i++){
//         printf("enter %d term of array\n",i+1);
//         scanf("%d",&sum[i]);
//         add=add+sum[i];
//     }
//     printf("%d",add);
//     return 0;
// }



// int main()
// {
//     int array[5]={4,7,3,6,5};
//     int i,max;
//     max=array[0];
//     for ( i = 0; i < 5; i++)
//     {
//         if(array[i]>=max)
//         max=array[i];
//     }
//     printf("%d",max);
//     return 0;
// }



// int main(){
//     int max=INT_MIN;
//     printf("%d",max);
//     return 0;
// }


// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int i;
//     for(i=0;i<10;i++)
//     {
//         if(i==0 || i%2==0)
//         arr[i]=arr[i] + 10;
//         else 
//         arr[i] =arr[i]*2;
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }



// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int i,count=0;
//     for(i=0;i<10;i++){
//         if(arr[i]>5)
//         count=count +1;
//     }
//     printf("%d",count);
//     return 0;
// }



// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int i,sumodd=0,sumeven=0;
//     for(i=0;i<10;i++)
//     {
//         if(i%2!=0)
//         sumodd=sumodd + arr[i];
//         else 
//         sumeven=sumeven +arr[i];
//     }
//      printf("sumodd=%d\n  sumeven=%d\n",sumodd,sumeven);
//     printf("%d",abs(sumeven-sumodd));
//     return 0;
// }


