#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char english;
	printf("請輸入一個字母:"); 
	scanf("%c",&english);
	if(english<91)
	 printf("小寫是%c",english+32);
	if(english>96)
	 printf("大寫是%c",english-32); 
	
	return 0;
}
