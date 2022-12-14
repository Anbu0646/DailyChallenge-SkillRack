/*
The program must accept an integer X followed by the brand name or the product number of N laptops with their costs. The program must print either the brand name or the product number of a laptop which has the minimum cost among N laptops. If X is 1 then X is followed by the brand name. If X is 2 then X is followed by the product number. Fill in the missing lines of code so that the program runs successfully. Note: If two or more laptops have the same cost then print the information of first occurring laptop. Input Format: The first line contains the value of N. The next N lines contain an integer, a string (brand name) or an integer (product number) and an integer (cost) separated by space(s). Output Format: The first line contains either a string (brand name) or an integer (product number) of the laptop which has the minimum cost among N laptops. 

Example Input/Output 1: 

Input:  4 
        1 Sony 70000 
        2 89793456 30000 
        2 65765767 60000 
        1 HP 45000 
Output: 89793456 

Example Input/Output 2: 

Input:  3 
        1 Samsung 50000 
        2 76576777 45000 
        1 Acer 20000 
Output: Acer

Solution:
*/
#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 
struct device 
{ 
  int X; 
  int cost;
  union name 
  { 
    char brandName[101]; 
    int productNumber; 
  } nameOrNum; 
}; 
int main() 
{ 
  int N, X, min=INT_MAX; 
  scanf("%d",&N); 
  struct device laptops[N]; 
  for (int index=0; index<N; index++) 
  { 
    scanf("%d",&X); 
    if(X==1) 
    { 
      laptops[index].X=1; 
      scanf("%s %d",laptops[index].nameOrNum.brandName,&laptops[index].cost); 
    } 
    else if(X==2) 
    { 
      laptops[index].X=2; 
      scanf("%d %d",&laptops[index].nameOrNum.productNumber,&laptops[index].cost); 
    } 
  }
  int minu=100000000;
     int storage;
     char sax[1001];
     int xflag=0, yflag=0;
     for(int i=0;i<N;i++)
     {
         if(laptops[i].cost<minu)
         {
             minu=laptops[i].cost;
             if(laptops[i].X==1)
             {
                 strcpy(sax, laptops[i].nameOrNum.brandName);
                 xflag=1;
            
             }
             else
             {
                 storage=laptops[i].nameOrNum.productNumber;
                 xflag=0;
             }
         }
     }
     if(xflag==0)
        printf("%d", storage);
     else
        printf("%s", sax);
  return 0;
}
