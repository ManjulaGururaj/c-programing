#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
	for(int i=0;i<3;i++)
 	{
 		for(int j=0;j<4;j++)
		{
 			printf("%d ",A[i][j]);
		}
 		printf("\n");
 	}
 	return 0;
}
