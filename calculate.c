#include<stdio.h>
int calc(int a, int b)
{
	int num,i;
	for(num=0;num<=6;num++)
	{
		printf("Enter of Your Choice = ");
		scanf("%d",&num);
	
		switch(num)
		{
		case 1 :
			    printf("Enter Value A = ");
			    scanf("%d",&a);
			    printf("Enter Value B = ");
			    scanf("%d",&b);
			    printf("A & B Sum of = %d \n\n",a+b);
			    break;
			    
		case 2 :
			    printf("Enter Value A = ");
			    scanf("%d",&a);
			    printf("Enter Value B = ");
			    scanf("%d",&b);
			    printf("A & B Substraction of = %d \n\n",a-b);
			    break;
				
		case 3 :
			    printf("Enter Value A = ");
			    scanf("%d",&a);
			    printf("Enter Value B = ");
			    scanf("%d",&b);
			    printf("A & B Multiplication of = %d \n\n",a*b);
			    break;
				
		case 4 :
			    printf("Enter Value A = ");
			    scanf("%d",&a);
			    printf("Enter Value B = ");
			    scanf("%d",&b);
			    printf("A & B Division of = %d \n\n",a/b);
			    break;
				
		case 5 :
			    printf("Enter Value A = ");
			    scanf("%d",&a);
			    printf("Enter Value B = ");
			    scanf("%d",&b);
			    printf("A & B Modulus of = %d \n\n",a%b);
			    break;
			    
				case 6:
				printf("You Are Exited");
				break;
				default:
				printf("plz Enter Given Choice");	
		}
		    
	}
}
void main()
{
	int a,b;
	printf("press 1 to sum\n");
	printf("press 2 to substraction\n");
	printf("press 3 to multiplication\n");
	printf("press 4 to division\n");
	printf("press 5 to modulus\n");
	printf("press 6 to exit\n\n");

	calc(a,b);
		
}