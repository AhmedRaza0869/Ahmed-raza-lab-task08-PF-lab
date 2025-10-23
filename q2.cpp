#include<stdio.h>
int main()
{
	int dtable[3][3],i,j;
	printf("Data table which represents row as a students and column as a subject:!\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter details about student%d , subjects%d:",i+1,j+1);
			scanf("%d", &dtable[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",dtable[i][j]);
			
		}
		printf("\n");
	}
	printf("Transposed Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",dtable[j][i]);
			
		}
		printf("\n");
	}
	
	
	
}


