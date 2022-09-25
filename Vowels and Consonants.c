/*
The program must a string S as the input. The program must print all the vowels in the string followed by all the consonants in the string as the output.

Boundary condition(s): 1 <= length of s <= 200 

Example input/output 1: 

Input:  elephant 
Output: eealphnt 

Explanation: 
Here the vowels are "eea" and the consonants are "lphnt" hence the output is "elephant". 

Example input/output 2:
 
Input:  HETEROGENEOUS 
Output: EEOEEOUHTRGNS


SOLUTION:
C:
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[201];
    scanf("%s", &s);
    for(int i=0; s[i]!='\0'; i++)
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
            printf("%c", s[i]);
    for(int i=0; s[i]!='\0'; i++)
        if(!(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'))
            printf("%c", s[i]);
}
