#include<stdio.h>
#include<conio.h>

int main()
{
	int M[5],S[5][6],C[6],
	MValue[5],SValue[5][6],
	Mweek[5];Sweek[5];
	MProduct[6],SProduct[6],
	Mtotal,Stotal,i,j,number;

	printf("Enter Product Manufactured week wise:/n");
	printf("M11,M12,-----,M21,M22,----etc\n");
	for (int i = 1; i <= 4; ++i)
	{
		for (int j = 0; j <= 5; ++j)
		{
		  scanf("%d",&M[i][j]);
		}
	}
    
    printf("Enter Product Sold week wise:\n");
    printf("S11,S12,----,S21,S22-----\n");
    for (int i = 1; i <=4; ++i)
    {
    	for (int j = 1; j <=4; ++j)
    	{
    		scanf("%d",&S[i][j]);
    	}
    }

    printf("Enter Cost of Each Product:\n");
    for (int j = 0; i < 5; ++j)
    {
    	scanf("%d",&C[j]);
    }
    for (int i = 1; i <= 4; ++i)
    {
    	for (int j = 1; j <=5; ++i)
    	{
    		MValue[i][j]=M[i][j]*C[j];
    		SValue[i][j]=S[i][j]*C[j];
    	}
    }
    for (int i = 1; i <=4; ++i)
    {         
    	    Mweek[i]=0;
    		Sweek[i]=0;
    		for (int j = 1; j <=5; ++j)
    		{
    			Mweek[i]+=MValue[i][j];
    			Sweek[i]+=SValue[i][j];
    		}
    }

    for (int j = 1; j <=5; ++j)
    {
    	MProduct[j]=0;
    	SProduct[j]=0;
    	for (int i = 1; i <=4; ++i)
    	{
    		MProduct[j]+=MValue[i][j];
    		SProduct[j]+=SValue[i][j];

    	}
    }

    Mtotal=Stotal=0;
    for (int i = 1; i <= 4; ++i)
    {
    	Mtotal+=Mweek[i];
    	Stotal+=Sweek[i];
    }
    
    printf("List of things you can:\n");
    printf("Enter appropiate item number:\n");
    printf("Press Any Return key:\n");
    printf("1.Value matrix of production and sales:\n");
    printf("2.Total Value of weekly production and sales:\n");
    printf("Product wise monthly value of production:\n");
    printf("Sales:\n");
    printf(" Grand Total Value of production and sales :\n");
    printf("Exit:\n");
    int number=0;
    while(1)
    {
    	printf("Enter Your Choice:\n");
    	scanf("%d",&number);
    	printf("\n");
    	if (number==5)
    	{
    		printf("Good Bye\n");
    		break;
    	}
    switch(number)
    {
    	case 1:
    	printf("Value matrix of production:\n");
    	for (int i = 1; i <=4; ++i)
    	{
    		for (int j = 1; j <=5; ++j)
    		{
    			printf("%7d",MValue[i][j]);
    		}
    		printf("\n");
    	}
    	printf("Value matrix of sales:\n");
    	for (int i = 1; i <=4; ++i)
    	{
    		printf("Week(%d)\t",i);
    		for (int j = 1; j <=5; ++j)
    		{
    			printf("%7d",SValue[i][j]);
    		}
    		printf("\n");
    	}

    	break;

    	case 2:
    	printf("Total weekly production and sales:\n");
    	printf("Production and sales:\n");
    	printf("----------\n");
    	for (int i = 1; i <=4; ++i)
    	{
    		printf("Week(%d)\t",i);
    		printf("%7d\t%7d\n",Mweek[i],Sweek[i]);
    	}
    	break;

    	case 3:
    	printf("Product wise total production:\n");
    	printf("Sales\n\n");
    	printf("Production Sales:\n");
    	printf("-----------\n");
    	for (int j = 1; j <= 5; ++j)
    	{
    		printf("Product(%d)\t\n",j);
    		printf("%7d\t%7d\n",MProduct[j],SProduct[j]);
    	}
    	break;
    	case 4:
    	printf("Grand Total of Production and Sales:\n");
    	printf("\n Total production = %d\n",Mtotal);
    	printf("\n Total sales=%d\n",Stotal);
    	break;
    	default:
    	printf("\n Wrong Choice - Select Again:\n");
    	break;

    }

    }

}  