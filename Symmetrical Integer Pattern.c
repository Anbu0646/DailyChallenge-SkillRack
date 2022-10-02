/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output sections. 

Boundary Condition(s): 1 <= N <= 20 

Input Format:  The first line contains the integer N. 
Output Format: The list of lines contain the desired pattern. 

Example Input/Output 1: 

Input:  5 
Output: 0 
        505 
        45054 
        3450543 
        234505432 
        12345054321 

Example Input/Output 2: 

Input:  4 
Output: 0 
        404 
        34043 
        2340432 
        123404321


Solution:
C:
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("0\n");
    for(int i=0; i<n; i++){
        for(int j=n-i; j<=n; j++){
          printf("%d", j);
        }
        printf("0");
        for(int k=n; k>=n-i; k--){
            printf("%d",k);
        }
        printf("\n");
    }
    

}
