#include <stdio.h>
#include <stdlib.h>
#define size 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[size];
	int score[size];
	for(i=0;i<size;i++)
	{
		grade[i]=rand()%100;
		score[i]=grade[i];
		
	}
	for(i=0;i<size;i++)
	{
		printf("score[%i] : %d\n",i,score[i]);
		}
	
	return 0;
}
