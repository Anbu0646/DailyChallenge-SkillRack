/*The program must accept an integer matrix of size rxc as the input. the program must print the sum of top left quadrant elements as the output. 

Boundary condition(s): 1 <= r, c <= 99 

Input format:  the first line contains the integer values r and c separated by space(s). 
               the next r lines contain c integers each separated by space. 
Output format: the first line contains the sum of top left quadrant elements. 

Example input/output 1: 

Input:  4 4 
        1 2 3 4 
        5 6 7 8 
        9 1 2 3 
        4 5 6 7
Output: 14


Solution:
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r, c, s=0, r1, c1;
    scanf("%d %d", &r, &c); int mat[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d ", &mat[i][j]);}}
    if(r%2==0) r1=r/2; else r1 = (r/2) + 1;
    if(c%2==0) c1=c/2; else c1 = (c/2) + 1;
    for(int i=0; i<r1 ; i++){
        for(int j=0; j<c1 ; j++){
            s+=mat[i][j];}}
    printf("%d", s);
}
