/*  ~~~~~~~~~~~~~~~~~~~Roll a DICE~~~~~~~~~~~~~~~~~
 		Programmer :SAIFUDHEEN P

Instructions: Just run the program and hit Enter key for next roll.		
*/		
  
#include<stdio.h>
#include<unistd.h>
#include<stdio_ext.h>
#include<stdlib.h>
void display();
void tab();
int main()
{
	while(1)
	{
		int i,ret;
		char ch;
		srand((unsigned long int)&i);
		system("clear");
		for (i=0;i<6;i++)
		{
			ret=rand()%6+1;
			display();
		switch (ret)
		{
			case 1: tab();printf(" -----------\n");
				tab();printf("|           |\n");
				tab();printf("|           |\n");
				tab();printf("|     0     |\n");
				tab();printf("|           |\n");
				tab();printf("|           |\n");
			        tab();printf(" -----------\n");
				break;
			case 2: tab();printf(" -----------\n");
			 	tab();printf("|           |\n");
				tab();printf("|       0   |\n");
				tab();printf("|           |\n");
				tab();printf("|  0        |\n");
				tab();printf("|           |\n");
			        tab();printf(" -----------\n");
				break;
			case 3: tab();printf(" -----------\n");
				tab();printf("|         0 |\n");
				tab();printf("|           |\n");
				tab();printf("|     0     |\n");
				tab();printf("|           |\n");
				tab();printf("| 0         |\n");
				tab(); printf(" -----------\n");
				break;
			case 4: tab();printf(" -----------\n");
				tab();printf("| 0       0 |\n");
				tab();printf("|           |\n");
				tab();printf("|           |\n");
				tab();printf("|           |\n");
				tab();printf("| 0       0 |\n");
			     	tab();printf(" -----------\n");
				break;
			case 5: tab();printf(" -----------\n");
				tab();printf("| 0       0 |\n");
				tab();printf("|           |\n");
				tab();printf("|     0     |\n");
				tab();printf("|           |\n");
				tab();printf("| 0       0 |\n");
			        tab();printf(" -----------\n");
				break;
			case 6: tab();printf(" -----------\n");
				tab();printf("|           |\n");
				tab();printf("| 0   0   0 |\n");
				tab();printf("|           |\n");
				tab();printf("| 0   0   0 |\n");
				tab();printf("|           |\n");
			        tab();printf(" -----------\n");
				break;
			default:printf("BETTER LUCK NEXT TIME");
		}
			sleep(1);
			system("clear");
			__fpurge(stdin);
                	scanf("%c",&ch);
		}
	}
}
	
void display()
{
	int i;
	for(i=0; i<13;i++)
		printf("\n");
}

void tab()
{
		printf("\t\t\t\t\t\t\t");
}


