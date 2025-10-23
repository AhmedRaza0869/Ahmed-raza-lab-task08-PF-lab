#include<stdio.h>
int main()
{                              
	int m1[3][3],m2[3][3],i,j;
	printf("Enter the values for Matrix 1,(branch )&)(sales in Quarter 1):\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the sales for branch%d and product%d:",i+1,j+1);
			scanf("%d", &m1[i][j]);
		}
	}
	
	printf("Enter the values for Matrix 2(branch )&(sales in Quarter 2):\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the sales for branch%d and product%d:",i+1,j+1);
			scanf("%d", &m2[i][j]);
		}
		
	}
	printf("Total sales in half year in Matrix form:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
	 
}

