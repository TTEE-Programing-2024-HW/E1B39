#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num1;
	char c;
	
	printf("***********************************************************\n");
	printf("***********************************************************\n");
	printf("*                                                         *\n");
	printf("*                    E1B39   ������                       *\n");
	printf("*                   ***        ***                        *\n");
	printf("*                      *      *                           *\n");
	printf("*                       ******                            *\n");
	printf("*                       * ** *                            *\n");
	printf("*                       *** **                            *\n");
	printf("*                          *                              *\n");
	printf("*                          *                              *\n");
	printf("*                          *                              *\n");
	printf("*                          *                              *\n");
	printf("*                        *   *                            *\n");
	printf("*                       *     *                           *\n");
	printf("*                       *     *                           *\n");
	printf("*                     ***     ***                         *\n");
	printf("***********************************************************\n");
	printf("***********************************************************\n");
	system("pause");
	system("CLS");

	printf("�п�J�K�X:");
	scanf("%d",&num1);
	if(num1==2024)
	{
		printf("\Welcome");
	} 
	else
	{
		printf("Error!\a");
		return 0;
	} 
	printf("\n-----------------------------------------------------------\n");
	printf("|       'a' :  �e�X�����T����                               |\n");
	printf("|-----------------------------------------------------------|\n");
	printf("|       'b' :  ��ܭ��k��                                   |\n");
	printf("|-----------------------------------------------------------|\n");
	printf("|       'c' :  ����                                         |\n");
	printf("|-----------------------------------------------------------|\n");
	printf("\n-----------------------------------------------------------\n");

	
	printf("�п�J�@�Ӧr��");
	fflush(stdin);
    scanf("%c",&c);
    if(c>='A'&&c<='Z')
	{
		printf("*        ");
		printf("**       ");
		printf("* *      ");
		printf("*  *     ");
		printf("*   *    ");
		printf("******   ");
	}
    else if(c>='C'&&c<='z')
	{
		printf("c");
		printf("bc");
		printf("abc");
	}
    else if(c>=48&&c<=57)
	{
		printf("Digit");
	}
    else
	{
	printf("E1B39 ������");
	}	 
		
	return 0;
 } 
 
