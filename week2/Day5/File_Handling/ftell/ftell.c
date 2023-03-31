#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp=NULL;
	char ch;
	char str[50];
	fp=fopen("abc.txt","r");
	if (fp==NULL)
	{
		printf("cannot open file");
		exit(1);
	}
	printf("%ld\n",ftell(fp));
	fseek(fp,8,SEEK_SET);
	printf("%ld\n",ftell(fp));
	ch=fgetc(fp);
	printf("%c\n",ch);
	printf("%ld\n",ftell(fp));
	fscanf(fp,"%s",str);
	printf("%s\n",str);
	printf("%ld\n",ftell(fp));
	fclose(fp);
	return 0;
}
