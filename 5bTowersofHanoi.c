// Towers of Hanoi
#include <stdio.h>
void towers(int, char, char, char);
int main()
{
int num;
printf("enter the number of disks : ");
scanf("%d", &num);
printf("the sequence of moves involved in the tower of hanoi are :\n");
towers(num, 'a', 'c', 'b');
return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
if (num == 1)
return;
{
printf("\n move disk 1 from peg %c to peg %c", frompeg, topeg);
}
towers(num - 1, frompeg, auxpeg, topeg);
printf("\n move disk %d from peg %c to peg %c", num, frompeg, topeg);
towers(num - 1, auxpeg, topeg, frompeg);
}