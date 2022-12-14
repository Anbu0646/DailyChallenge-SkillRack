/*

The program must accept an integer N and a digit D as the input. The program must print the sum of the integers from 1 to N which have the unit digit as D as the output. If there is no such integer from 1 to N then the program must print -1 as the output. 

Boundary Condition(s): 1 <= N <= 1000 0 <= D <= 9 

Input Format:  The first line contains the values of N and D seperated by space. 
Output Format: The first line contains either the sum of the integers from 1 to N which have the unit digit as D or -1. 

Example Input/Output 1: 

Input:  30 3 
Output: 39 

Explanation: The integers from 1 to 30 which have the unit digit as 3 are 3, 13 and 23. 
             So the sum is 39 ( 3 + 13 + 23 ). 
             Hence the output is 39 

Example Input/Output 2: 

Input:   5 7 
Output: -1

SOLUTION:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, d, s=0, f=0;
    scanf("%d %d", &n, &d);
    for(int i=1; i<=n; i++)
        if(i%10==d)
        {
            s+=i;
            f=1;
        }
    printf("%d", (f==1)?s:-1);
    return 0;
}
