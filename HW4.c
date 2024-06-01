#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
		printf("請輸入密碼:");
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
    printf("|--------------------[Grade  System]----------------------|\n");
	printf("|       'a' :  Enter student grades                       |\n");
	printf("|---------------------------------------------------------|\n");
	printf("|       'b' :  Display student grades                     |\n");
	printf("|---------------------------------------------------------|\n");
	printf("|       'c' :  Search for student grades                  |\n");
	printf("|---------------------------------------------------------|\n");
	printf("|       'd' :  Grade ranking                              |\n");
	printf("|---------------------------------------------------------|\n");
	printf("|       'e' :  Exit system                                |\n");
	printf("-----------------------------------------------------------\n"); 
char choice;
    printf("請輸入選項:");
    scanf("%d",&choice);
    getchar();
    switch (choice)
	{
    	case 'a':
    		
    		
    	case 'b':	
    		
    		
    	case 'c':
    	
		
		case 'd':
		
		
		
		case 'e':
		
		
		
		
		
	{
		int n,i;
		
		printf("輸入學生的數量(5~10):\n");
		scanf("%d",&n);
		if(n<5||n>10)
		{
			printf("請重新輸入");
			return;
		}
		for(i=0;i<n;i++)
		{
			printf("請輸入學生的姓名:");
			scanf("%s",students[studentcount].name);
			printf("請輸入學號:");
			scanf("%d",&students[studentcount].id);
			printf("請輸入數學成績:");
			scanf("%d",&students[studentcount].math);
			printf("請輸入物理成績:");
			scanf("%d",&students[studentcount].physics);
			printf("請輸入英文成績:");
			scanf("%d",&students[studentcount].english);
			
			
		}
		}	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
			
