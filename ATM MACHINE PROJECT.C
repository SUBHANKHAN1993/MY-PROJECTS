 // ATM MACHINE 
#include<stdio.h>
 float balance = 0;
 int anothertransaction;
 
 void transaction()
 {  system("color 9f");
	int choice;
    printf("ENTER ANY OPTION TO SERVED ....!!\n\n");
	printf("1: WITHRAWL\n");
    printf("2: DEPOSIT\n");
    printf("3: BALANCE\n");
    scanf("%d",&choice);
    switch (choice)
    {
   int amountToWithdraw;
   case 1;
    printf("Please enter amount to withdraw");
    scanf("%d", &amountToWithdraw);
    if(amountToWithdraw > balance)
    {
    printf("There is no insufficient funds in your account");
    
	
	printf("\n\nDo you want another transaction?\nPress 1 to procced and 2 to exit\n\n");
	scanf("%d", &anotherTransaction);
	if(anotherTransaction ==1)	
    	
 	{
 		transaction();
	 
	 		
	
		 }
	
   }
    else
    {
    balance = balance - amountToWithdraw;
    
	printf("You have withdrawn %d and your new balance is %f", amountToWithdraw,balance);
	
	printf("\n\nDo you want another transaction?\n press 1 to proccesed and 2 to exit\n\n");
	scanf("%d", &anotherTransaction);
	if(anotherTransaction == 1)
	{
		
		}	
	}
 }
}


	  
 	
	 
	 
	 
	 
	 
	 	
	  
