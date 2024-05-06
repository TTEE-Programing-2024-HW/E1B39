#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num1;
	char c;
	
	printf("***********************************************************\n");
	printf("***********************************************************\n");
	printf("*                                                         *\n");
	printf("*                    E1B39   郭明翰                       *\n");
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

	printf("請輸入密碼:");
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
	printf("|       'a' :  畫出直角三角形                               |\n");
	printf("|-----------------------------------------------------------|\n");
	printf("|       'b' :  顯示乘法表                                   |\n");
	printf("|-----------------------------------------------------------|\n");
	printf("|       'c' :  結束                                         |\n");
	printf("|-----------------------------------------------------------|\n");
	printf("\n-----------------------------------------------------------\n");

	
	printf("請輸入一個字元");
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
	printf("E1B39 郭明翰");
	}	 
		
	return 0;
 } 
 
