#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char english;
	printf("�п�J�@�Ӧr��:"); 
	scanf("%c",&english);
	if(english<91)
	 printf("�p�g�O%c",english+32);
	if(english>96)
	 printf("�j�g�O%c",english-32); 
	
	return 0;
}
