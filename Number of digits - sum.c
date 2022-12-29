/*
The program must accept two integers X and Y as the input. The program must print their sum S if the number of digits in S is equal to X. Else the program must print the integer X as the output. 

Boundary Condition(s): 1 <= X, Y <= 10^8 

Input Format:  The first line contains the values of X and Y separated by a space. 
Output Format: The first line contains either S or X. 

Example Input/Output 1: 

Input:  4 997 
Output: 1001 

Explanation: The sum of 4 and 997 is 1001. 
             The number of digits in 1001 is 4 and it is equal to X. 
             So print the sum 1001. 
             Hence the output is 1001 
             
Example Input/Output 2: 

Input:  8 3 
Output: 8

SOLUTION:
*/

int x,y;
  scanf("%d %d", &x, &y);
  int total=x+y, c=0;
  while(total)
  {
    c++;
    total/=10;
  }
  (c==x)?(printf("%d", x+y)):printf("%d", x);

