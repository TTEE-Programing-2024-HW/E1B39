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


{
 
    printf("--------------------[Grade  System]----------------------|\n");
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
}
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
			
			if(students[studentcount].math<0||students[studentcount].math||students[studentcount].physics<0||students[studentcount].physics||students[studentcount].english<0||students[studentcount].english);
			{
				printf("�Э��s��J:\n");
				i--;
				return;
			}
			student[studentcount].avg=(student[studentcount].math +students[studentcount].physics +student[studentcount].english)/3.0;
			studentcount++;
		}
	}	
		
		
		
		{
			int i,
			printf("�ǥͦ��Z:\n");
			printf("�m�W  �Ǹ�  �ƾ�  ���z  �^��  ����  \n");
			for(i=0;i<studentcount;i++)
			{
				printf("%s  %d  %d  %d  %d  %f  \n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].avg);
				printf("\n");
			}
			printf("���U���N�����^�D���\n");
			getchar();
		}
		
		
		{
			
			int f=0,i;
			char searchname[50];
			printf("�п�J�n�j�s���ǥͩm�W:\n");
			scanf("%s",searchname);
			
			for(i=0;i<studentcount;i++)
			{
				if(strcmp(students[i].name,searchname)==0)
				{
					printf("�m�W  �Ǹ�  �ƾ�  ���z  �^��  ����  \n");
					printf("%s  %d  %d  %d  %d  %f  \n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].avg);
			    	printf("\n");
			    	f=1;
			    	break;
				}
			}
			
		}//�߱o:�o�����@�~��ı�o�ڦ���۪�����,�ܤ֥i�H�g�X�X�D���{���X�F,���M�٬O���৹�㪺����{��,���O���٬O�Ǩ�F�ܦh 
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
			
