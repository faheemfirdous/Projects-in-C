#include<stdio.h>


int main()
{
    int pin,pinn, balance, withdraw, atm_on, input,amount;
    pin = 1234;
    balance= 98778;
    atm_on = 1;
    printf("Welcome to the American Express!!\nInsert your card.\n");
    while(atm_on == 1)
    {
        printf("Enter your ATM Pin:\n");
        scanf("%d", &pinn);
        if (pinn != pin)
        {
            printf("You have entered the wrong pin.");
            atm_on = 0;
        }

        else
        {
            printf("Press 1 for Balance Enquiry.\nPress 2 to Withdraw money.\n");
            scanf("%d",&input);
            if (input == 1)
            {
                printf("Your balance is %d.", balance);
                printf("Press 1 to continue and 0 to exit:\n");
                scanf("%d", &atm_on);
            }
            else if(input== 2)
            {
                printf("Enter the amount you want to withdraw:\n");
                scanf("%d", &amount);
                if (balance > amount)
                {
                    balance -= amount;
                    printf("Your new balance is: %d\nTake your cash:)", balance);
                    printf("\nPress 1 to continue and 0 to exit:\n");
                    scanf("%d", &atm_on);
                }
                else 
                {
                    printf("Insufficient balance:(");
                    printf("Press 1 to continue and 0 to exit:\n");
                    scanf("%d", &atm_on);
                }
            }
        }

    }
    return 0;
}
