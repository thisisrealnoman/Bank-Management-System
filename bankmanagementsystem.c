#include <stdio.h>

char name[35];

int dip_amt, amt = 10000, acc_no, with_amt, trans_amt, ac_receiver, count=0;


void menu();
void deposit_money();
void withdraw_money();
void transfer_money();
void account_details();
void transaction_details();


int main(){


    int choice;

    printf("Enter your name: ");
    gets(name);

    printf("Enter your account number: ");
    scanf("%d", &acc_no);

while(1){

    menu();

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);


    switch(choice){

case 1:
    system("cls");
    deposit_money();
    break;

case 2:
    system("cls");
    withdraw_money();
    break;

case 3:
    system("cls");
    transfer_money();
    break;

case 4:
    system("cls");
    account_details();
    break;

case 5:
    system("cls");
    transaction_details();
    break;

default:
    printf("INVALID CHOICE!");
    break;
    }

}


    return 0;
}

void menu(){

    system("cls");
    printf("\n\nMAIN MENU\n");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("3. Transfer Money\n");
    printf("4. Account Details\n");
    printf("5. Transaction Details\n");
    printf("6. Exit\n");

}

void deposit_money(){

    time_t tm;
    time(&tm);

    FILE *ptr = fopen("account.txt", "a");

    printf("DEPOSITING MONEY\n");
    printf("Enter the amount: ");
    scanf("%d", &dip_amt);

    amt = amt + dip_amt;

    printf("MONEY DEPOSITED\n");
    printf("Current Balance: %d\n\n", amt);

    fprintf(ptr, "Tk %d had been deposited to your account \n", dip_amt);
    fprintf(ptr, "Date / time of transaction %s \n", ctime(&tm));

    count++;

    getch();
}

void withdraw_money(){

    time_t tm;
    time(&tm);

    FILE *ptr = fopen("account.txt", "a");

    printf("WITHDRAW MONEY \n");
    printf("Enter the amount: ");
    scanf("%d", &with_amt);

    amt = amt - with_amt;

    printf("MONEY WITHDRAWN\n");
    printf("Current Balance: %d\n\n", amt);

    fprintf(ptr, "Tk %d had been withdrawn from your account \n", with_amt);
    fprintf(ptr, "Date / time of transaction %s \n", ctime(&tm));

    count++;

    getch();

}

void transfer_money(){

    time_t tm;
    time(&tm);

    FILE *ptr=fopen("account.txt", "a");

    printf("TRANSFERING MONEY\n");
    printf("Enter the amount: ");
    scanf("%d", &trans_amt);
    printf("Enter the account number of receiver: ");
    scanf("%d", &ac_receiver);

    if(amt<trans_amt){
        printf("You don't have sufficient balance\ ");
    }
    else{
        amt = amt - trans_amt;
        printf("Money Transferred!\n");
        printf("Current Balance: %d\n\n", amt);
        fprintf(ptr, "Tk %d had been transferred from your account to %d \n", trans_amt, ac_receiver);
        fprintf(ptr, "Date / time of transaction %s \n", ctime(&tm));
    }

    fclose(ptr);

    count++;

    printf("PRESS ANY KEY TO CONTINEU...\n");
    getch();
}

void account_details(){

    printf("ACCOUNT DETAILS\n");

    for(int i=0; i<15; i++){
        printf("-");
    }

    printf("\nName: %s\n", name);
    printf("Account Number: %d\n", acc_no);
    printf("No. of transaction: %d\n", count);
    printf("Total Balance: %d\n", amt);


    printf("\n\nPRESS ANY KEY TO CONTINEU...\n");
    getch();

}

void transaction_details(){

    FILE *ptr;
    ptr=fopen("account.txt", "r");

    char c = fgetc(ptr);

    if(c == EOF){
        printf("No recent transaction\n");
    }
    else{
        printf("\n\nTRANSACTION DETAILS\n\n");

        while(c != EOF){
            printf("%c", c);
            c=fgetc(ptr);
        }
    }
    getch();
}
