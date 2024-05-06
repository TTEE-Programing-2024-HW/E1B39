#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num1;
	char c;
	
	printf("***********************************************************\n");  //設計一個個人頁面 
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

	system("pause");
	system("cls");                      //清除畫面 
	char ch,num2;
	printf("請輸入一個字元");
    scanf("%c",&ch);
    if(ch=='A'||ch=='a');
	{
		system("cls");                  //清除畫面 
		printf("輸入a~n的字元");
		scanf("%c",&num2); 
		for()
	}
    else if(c=='B'&&c=='b')
	{
		printf("乘法表");
		printf("輸入1~9的整數");
		scanf("%d") 
	}
    else if(c=='C'&&c=='c')
	{
		printf("Continue?(yes/no)");
		scanf()
	}
    
		
	return 0;
 } 
 
