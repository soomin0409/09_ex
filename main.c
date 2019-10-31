#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void addmatrix(int a[][col],int b[][col],int c[][col]){
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
void printmatrix(int c[][col]){
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) {
	int a[row][col]={
		{2,3,0},
		{8,9,1},
		{7,0,5}
		};
	int b[row][col]={
	{1,0,0},
	{0,1,0},
	{0,0,1}
	};
	int c[row][col];
	
	addmatrix(a,b,c);
	printmatrix(c);
	
	return 0;
}
