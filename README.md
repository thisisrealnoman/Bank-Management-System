# Bank-Management-System

This code appears to be a simple banking system implemented in C. It allows users to perform various banking operations such as depositing money, withdrawing money, transferring money, checking account details, and viewing transaction history. Here is a breakdown of the code:

- The code begins with including the necessary header file `stdio.h`.
- It declares global variables such as `name`, `dip_amt`, `amt`, `acc_no`, `with_amt`, `trans_amt`, `ac_receiver`, and `count`.
- Function prototypes for different banking operations are declared: `menu()`, `deposit_money()`, `withdraw_money()`, `transfer_money()`, `account_details()`, and `transaction_details()`.
- The `main()` function is defined and serves as the entry point of the program.
  - It prompts the user to enter their name and account number.
  - It enters a while loop that displays a menu of banking operations and prompts the user for their choice.
  - Based on the user's choice, the corresponding function is called to perform the selected operation.
- The `menu()` function clears the screen and displays the main menu options.
- The remaining functions (`deposit_money()`, `withdraw_money()`, `transfer_money()`, `account_details()`, `transaction_details()`) are responsible for performing the respective banking operations.
- These functions prompt the user for necessary inputs, update account balances, and store transaction details in a file named "account.txt".
- The `account_details()` function displays the user's account information such as name, account number, number of transactions, and total balance.
- The `transaction_details()` function reads and displays the transaction details stored in the "account.txt" file.
- The program continues to run until the user chooses to exit.

Overall, this code provides a basic framework for a command-line banking system allowing users to perform essential banking operations and retrieve transaction information.
