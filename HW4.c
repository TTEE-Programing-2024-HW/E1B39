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
	printf("*                    E1B39   ������                       *\n");
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
		printf("�п�J�K�X:");
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
    printf("�п�J�ﶵ:");
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
		
		printf("��J�ǥͪ��ƶq(5~10):\n");
		scanf("%d",&n);
		if(n<5||n>10)
		{
			printf("�Э��s��J");
			return;
		}
		for(i=0;i<n;i++)
		{
			printf("�п�J�ǥͪ��m�W:");
			scanf("%s",students[studentcount].name);
			printf("�п�J�Ǹ�:");
			scanf("%d",&students[studentcount].id);
			printf("�п�J�ƾǦ��Z:");
			scanf("%d",&students[studentcount].math);
			printf("�п�J���z���Z:");
			scanf("%d",&students[studentcount].physics);
			printf("�п�J�^�妨�Z:");
			scanf("%d",&students[studentcount].english);
			
			
		}
		}	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
			
