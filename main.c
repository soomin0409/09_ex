#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score[5],i;
	score[0]=60;
	score[1]=70;
	score[2]=80;
	score[3]=90;
	score[4]=100;
	for(i=0;i<5;i++)
	{
		printf("score[%d]=%d\n",i,score[i]);
	}
	
	return 0;
}
