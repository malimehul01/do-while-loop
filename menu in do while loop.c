#include<stdio.h>
main()
{
	int opt,qty;
	
	do
	{
		
		
		printf("\n press 1 for pizza");
		printf("\n press 2 for dhosa");
		printf("\n press 3 for sandwich");
		printf("\n press 4 for exit");
		
		printf("\nENter opt=>");
		scanf("%d",&opt);
		 
		 
		 if(opt==1)
		 {
		 	
		 	
		 	printf("\n price of pizza is 300");
	        printf("\n Enter qty=>");
	        scanf("%d",&qty);
	        printf("\n your bill=>%d",qty*300);
	        
	        
		 }
		else if(opt==2)
		 {
		 	
		 	
		 	printf("\n price of dhosa is 150");
	        printf("\n Enter qty=>");
	        scanf("%d",&qty);
	        printf("\n your bill=>%d",qty*150);
	        
	        
		 }
	     else if(opt==3)
		 {
		 	
		 	
		 	printf("\n price of sandwich  is 200");
	        printf("\n Enter qty=>");
	        scanf("%d",&qty);
	        printf("\n your bill=>%d",qty*200);
	        
	        
		 }
		  else if(opt==4)
		{
			
			printf("\n Thanks for visit !");
			break;
		}
		else
		{
			
			
			printf("go to any hotel ");
			break;
		}
		
	}
while(opt!=5);
}
