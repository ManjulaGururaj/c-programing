#include <stdio.h>
#include <stdlib.h>

unsigned long long n=0;
/*
[ ] [ ] [ ] [ ] [ ] [ ] [ ] [ ]
   7   6   5   4   3   2   1   x

   M[x]   <- 0xff
[ ] [ ] [ ] [ ] [ ] [ ] [ ] [ff]
   M[X+1 : 2] <- 0X2Affff;
[ ] [ ] [ ] [ ] [ ] [2a] [ff] [ff]
   M[X+3 : 6] <- 0X35ff45ff2Affff
[ ] [35] [ff] [45] [ff] [2a] [ff] [ff]
   M[X+7 : 7] <- 0xff35ff45ff2Affff
[7f] [35] [ff] [45] [ff] [2a] [ff] [ff]

*/
int main(void)
{
    printf("n = %llx \n",n);

    *(char*)&n= 0xff;      //0xff
    printf("n= %llx \n",n);


    *(short*)((char*)(&n)+1)= 0x2aff;   //
    printf("n= %llx \n",n);


    *(int*)((char*)&n +3)= 0x35ff45ff;
    printf("n= %llx \n",n);

    *(char*)((char*)&n +7)=0x7f;
    printf("n= %llx \n",n);

    return(0);
}
