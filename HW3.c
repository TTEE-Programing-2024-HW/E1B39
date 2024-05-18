#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num1,a=3;
	char c;
	
	printf("***********************************************************\n");
	printf("***********************************************************\n");
	printf("*                                                         *\n");
	printf("*                    E1B39   郭明翰                       *\n");
	printf("*                                                         *\n");
	printf("*                                                         *\n");
	printf("*                                                         *\n");
	printf("*  *******     *******    *     *                         *\n");
	printf("*     *           *       *     *                         *\n");
	printf("*     *           *       *     *                         *\n");
	printf("*     *           *         ***                           *\n");
	printf("*                                         **              *\n");
	printf("*                                         * *             *\n");
	printf("*                                         *   ****        *\n");
	printf("*                                         *   ****        *\n");
	printf("*                                         *   ****        *\n");
	printf("*                      一定要大拇指的啦   ********        *\n");
	printf("***********************************************************\n");
	printf("***********************************************************\n");
	system("pause");
	system("CLS");

	
	do{
		printf("請輸入密碼:");
		scanf("%d",&num1);
		if(num1==2024)
	{
		printf("\nWelcome");
		break;
	} 
	else
	{
		printf("Error!\a");
		a--;
    }
	}while(a!=0);
	
    		return 0;
}	 
