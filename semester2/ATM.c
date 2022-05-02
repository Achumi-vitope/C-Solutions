/* Functioning process of an ATM machine
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int withdraw(int pin);

int balance(int pin, int amount, int bal);
int receipt(int pin, int amount, int bal);
int transfer(int pin);
int pin(int pin);
int n, inp;
int userPin;
int newPin;

int main()
{
    
    int amount = 0;
    int bal = 0;
    
    printf("Before proceeding any further, please choose a PIN number: \n");
    int pin;
    scanf("%d", &pin);
    printf("PIN set successfully! \n\n");
    printf("Please insert your card: \n");
    printf("Press one to insert\n");
    int ins;
    scanf("%d", &ins);
    if(ins != 1)
    {   
        printf("Invalid Card!");
        return 0;
    }
    
    int options;
    do
    {
        printf("\n\n*******SBI*******\n\n");
        printf("What do you want to do? \n1.Balance Inquiry \n2.Fast Cash \n3.Mini Statement \n4.Cash Withdrawal \n5.Deposit \n6.Pin Change\n\n");
        scanf("%d", &options);
        switch(options)
        {
            case 1:
                printf("\n\n*******BALANCE INQUIRY*******\n\n");
                balance(pin, amount, bal);
                break;
            case 2:
                printf("\n\n*******FAST CASH*******\n\n");
                
                do
                {
                    printf("Enter a number between 1-25\n");
                    scanf("%d", &inp);

                    if(inp > 25 || inp <= 0)
                        printf("Try Again!\n");

                }while(inp > 25 || inp <= 0);

                printf("\n\nEnter Your Security Number\n");
                scanf("%d", &userPin);

                if(userPin != pin)
                {
                    printf("Invalid Pin\n\n");
                    return 0;
                }
                
                char options;
                printf("Choose an amount\n");
                printf("\n\n1.500 \n2.1000 \n3.1500 \n4.2000 \n5.3000 \n6.5000\n\n");
                scanf("%d", &options);
                int option1 = 500;
                int option2 = 1000;
                int option3 = 1500;
                int option4 = 2000;
                int option5 = 3000;
                int option6 = 5000;


                if(bal < 500)
                {
                    printf("Insufficientbalance\n\n");
                    return 0;
                } else if(bal < 1000)
                {
                    printf("Insufficientbalance\n\n");
                    return 0; 
                }else if(bal < 1500)
                {
                    printf("Insufficientbalance\n\n");
                    return 0; 
                }else if(bal < 2000)
                {
                    printf("Insufficientbalance\n\n");
                    return 0; 
                }else if(bal < 3000)
                {
                    printf("Insufficientbalance\n\n");
                    return 0; 
                }else if(bal < 5000)
                {
                    printf("Insufficientbalance\n\n");
                    return 0; 
                }

                if(options == 1)
                {
                    bal = bal - option1;
                }else if(options == 2)
                {
                    bal = bal - option2;
                }else if(options == 3)
                {
                    bal = bal - option3;
                }else if(options == 4)
                {
                    bal = bal - option4;
                }else if(options == 5)
                {
                    bal = bal - option5;
                }else if(options == 6)
                {
                    bal = bal - option6;
                }


                printf("Please Wait\n");
                Beep(1000, 200);
                Sleep(500);
                Beep(1000, 200);
                Sleep(500);
                Beep(1000, 200);
                Beep(1000, 200);
                Beep(1000, 200);
                Beep(1000, 150);
                Beep(1000, 150);
                Beep(1000, 150);
                Beep(1000, 150);
                Beep(1000, 150);
                Beep(1000, 150);
                Beep(1000, 500);
                printf("Please Collect your cash\n\n");
                break;

            case 3:
                printf("\n\n*******MINI STATEMENT*******\n\n");
                receipt(pin, amount, bal);
                break;

            case 4:
                printf("\n\n*******CASH WITHDRAWAL*******\n\n");
                
                do
                {
                    printf("Enter a number between 1-25\n");
                    scanf("%d", &inp);

                    if(inp > 25 || inp <= 0)
                        printf("Try Again!\n");

                }while(inp > 25 || inp <= 0);

                printf("\n\nEnter Your Security Number\n");
                scanf("%d", &userPin);

                if(userPin != pin)
                {
                    printf("Invalid Pin\n\n");
                    return 0;
                }
                
                int with_amount;
                do{
                    printf("Type in an amount\n");
                    scanf("%d", &with_amount);
                    if(with_amount%100 != 0)
                    {
                        printf("Invalid amount!\n");
                    }
                }while(with_amount%100 !=0);

                if(with_amount > bal)
                {
                    printf("Insufficient Balance!\n");
                    return 0;
                }

                bal = bal - with_amount;
                printf("\nPlease Wait\n\n");
                Beep(1000, 200);
                Sleep(500);
                Beep(1000, 200);
                Sleep(500);
                Beep(1000, 200);
                Beep(1000, 200);
                Beep(1000, 200);
                Beep(1000, 150);
                Beep(1000, 150);
                Beep(1000, 150);
                Beep(1000, 150);
                Beep(1000, 150);
                Beep(1000, 150);
                Beep(1000, 500);
                printf("\n\nPlease Collect your cash\n\n");
                break;
            case 5:
                printf("\n\n*******DEPOSIT*******\n\n");
                int inp, userPin;
                do
                {
                    printf("Enter a number between 1-25\n");
                    scanf("%d", &inp);

                    if(inp > 25 || inp <= 0)
                        printf("Try Again!\n");

                }while(inp > 25 || inp <= 0);

                printf("\n\nEnter Your Security Number\n");
                scanf("%d", &userPin);

                if(userPin != pin)
                {
                    printf("Invalid Pin\n\n");
                    return 0;
                }

                printf("Enter amount to deposit \n\n");
                scanf("%d", &amount);
                bal = bal + amount;
                printf("\nSuccessful!\n");
                break;
            case 6:
                printf("\n\n*******PIN CHANGE*******\n\n");
                int oldPin;
                do{
                    printf("\nEnter Old Pin\n");
                    scanf("%d", &oldPin);
                    if(oldPin != pin)
                    {
                        printf("\nIvalid. Try again!\n");
                    }
                }while(oldPin != pin);

                printf("Please enter your New Pin aftre a Beep\n\n");
                Sleep(2000);
                Beep(700, 500);
                printf("Enter new PIN: \n");
                scanf("%d", &newPin);
                printf("\nNew Pin set successfully!\n");
                pin = newPin;
                break;
            default:
                printf("\n\nPlease Enter a valid number\n\n");
        }

        printf("\n\nContinue(y)\nExit(n)\n\n");
        fflush(stdin);
        scanf("%c", &inp);
        if(inp == 'n' || inp == 'N')
            n=1;
    }while(!n);
}

int balance(int pin,int amount, int bal)
{
    int inp, userPin;
    do
    {
        printf("Enter a number between 1-25\n");
        scanf("%d", &inp);

        if(inp > 25 || inp <= 0)
            printf("Try Again!\n");

    }while(inp > 25 || inp <= 0);

    printf("\n\nEnter Your Security Number\n");
    scanf("%d", &userPin);

    if(userPin != pin)
    {
        printf("Invalid Pin\n\n");
        return 0;
    }
    
    printf("Available Balance: %d \n\n", bal);
}


int receipt(int pin, int amount, int bal)
{
    int inp, userPin;
    do
    {
        printf("Enter a number between 1-25\n");
        scanf("%d", &inp);

        if(inp > 25 || inp <= 0)
            printf("Try Again!\n");

    }while(inp > 25 || inp <= 0);

    printf("\n\nEnter Your Security Number\n");
    scanf("%d", &userPin);

    if(userPin != pin)
    {
        printf("Invalid Pin\n\n");
        return 0;
    }

    printf("\n\n\n");
    time_t current_time;
    char* c_time_string;

    /* Obtain current time. */
    current_time = time(NULL);

    if (current_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to obtain the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

    if (c_time_string == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }

    /* Print to stdout. ctime() has already added a terminating newline character. */
    (void) printf("%s", c_time_string);
    printf("\n-------------------------------------\n\n");
    //random 1111-9999
    int lower = 1111, upper = 9999;

    srand(time(0));
    int num = (rand() % (upper - lower + 1)) + lower;
    printf("Card Number         : ************%d\n",num);
    printf("Transaction         : MINISTATEMENT\n");
    
    int lBound = 10, upper_bound = 99;
    srand(time(0));
    int rsp = (rand()%(upper_bound - lBound + 1)) + lBound;
    printf("RSP                 : %d\n", rsp);
    printf("Available Balance   : %d", bal);
    return 0;   
}