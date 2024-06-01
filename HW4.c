#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num1,a=3;
	char c;
	
	printf("***********************************************************\n");
	printf("***********************************************************\n");
	printf("*                                                         *\n");
	printf("*                    E1B39   ³¢©ú¿«                       *\n");
	printf("*                                                         *\n");
	printf("*                                                         *\n");
	printf("*                                                         *\n");
	printf("*  *******    *******    *     *                          *\n");
	printf("*     *          *       *     *                          *\n");
	printf("*     *          *       *     *                          *\n");
	printf("*     *          *         ***                            *\n");
	printf("*                                         **              *\n");
	printf("*                                         * *             *\n");
	printf("*                                         *  *****        *\n");
	printf("*                                         *   ****        *\n");
	printf("*                                         *   ****        *\n");
	printf("*                                         ********        *\n");
	printf("***********************************************************\n");
	printf("***********************************************************\n");
	system("pause");
	system("CLS");

	
	do{
		printf("½Ð¿é¤J±K½X:");
		scanf("%d",&num1);
		if(num1==2024)
	{
		printf("\nWelcome");
		break;
	} 
	else
	{
		printf("Error!\a\n");
		a--;
    }
	}while(a!=0);
	
    		return 0;
}	 
