#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A[5][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	for(int i=0;i<5;i++)
 	{
 		for(int j=0;j<4;j++)
		{
 			printf("%d ",A[i][j]);
		}
 		printf("\n");
 	}
 	return 0;
}
