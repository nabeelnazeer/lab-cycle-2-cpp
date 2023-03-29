#include <iostream>
#include <string>

class bank // for bank to enter customer details
{
public:
	std::string name;
	int acc_no;
	std::string acc_type;
	int balance;
	void input()
	{
		std::cout << "enter account holders name : " << std::endl;
		std::cin >> name;
		std::cout << "enter account number : " << std::endl;
		std::cin >> acc_no;
		std::cout << "enter type of account (savings/nri) : " << std::endl;
		std::cin >> acc_type;
		std::cout << "type balance amount : " << std::endl;
		std::cin >> balance;
	}
	void display()
	{
		std::cout << "account name : " << name << std::endl;
		std::cout << "account no. : " << acc_no << std::endl;
		std::cout << "account type  :" << acc_type << std::endl;
		std::cout << "balance :  0rs" << std::endl;
	}
};
class customer // customer access
{
private:
	std::string customer_name;
	int acc_no;
	double balance;
	std::string account_type;

public:
	customer(std::string cn, int an, std::string at, double b) // constructor  for initializing
	{
		customer_name = cn;
		acc_no = an;
		account_type = at;
		balance = b;
	}
	int serial_no();
	void add_account();
	void deposit();
	void check_balance();
	void withdraw();
	void statement();
};
void customer::add_account() // function for adding customer account
{
	std::cout << "enter account name : " << std::endl;
	std::cin >> customer_name;
	std::cout << "enter preferred account type : " << std::endl;
	std::cin >> account_type;
	std::cout << "enter balance : " << std::endl;
	std::cin >> balance;
	std::cout << "successfully created account of : " << customer_name << std::endl;
}
void customer::deposit() // deposit amount
{
	double amount;
	std::cout << "enter the amount to be deposited : " << std::endl;
	std::cin >> amount;
	balance += amount;
	std::cout << "successfully deposited " << amount << "rs "
			  << "available balance : " << balance << std::endl;
}
void customer::check_balance()
{
	std::cout << "avilable balanace : " << balance << std::endl;
}
void customer::withdraw() // withdraw amount
{
	double amount;
	std::cout << "enter amount to be withdrawn : ";
	std::cin >> amount;
	if (balance - amount < 500)
	{
		std::cout << "sorry minimum balance should be 500" << std::endl;
	}
	else
	{
		balance -= amount;
		std::cout << "withdrawal successfull. balance: " << balance << std::endl;
	}
}
int customer::serial_no()
{ // generating account no. for the customer
	acc_no = 1;
	return (acc_no);
}

void menu() // function displays menu
{
	std::cout << "_____________USER INTERFACE_____________" << std::endl;
	std::cout << "press 1 to add a new account\n";
	std::cout << "press 2 to deposit cash\n";
	std::cout << "press 3 for balance enquiry\n";
	std::cout << "press 4 to withdraw money\n";
	std::cout << "press 5 for account statement\n";
	std::cout << "press 6 for exit\n";
}
void customer::statement() // bank statement
{
	std::cout << "************* ACCOUNT STATEMENT **************" << std::endl;
	std::cout << "Account name : " << customer_name << std::endl;
	std::cout << "Account number : " << acc_no << std::endl;
	std::cout << "Account type : " << account_type << std::endl;
	std::cout << "Balance amount : " << balance << std::endl;
}
const std::string YES = "yes";
const std::string NO = "no";

int main() // main function
{
	int choice, n;
	bank accounts[10];
	std::string command;
	std::string name;
	int ac_no;
	std::string ac_ty;
	double bal;

	while (true)
	{
		std::cout << "press yes to become bank server  no to  become customer : " << std::endl;
		std::cin >> command;
		if (command == YES)
		{
			std::cout << "enter no. of accounts to be saved : " << std::endl;
			std::cin >> n;
			for (int i = 0; i < n; i++)
			{
				accounts[i].input();
			}
			for (int i = 0; i < n; i++)
			{
				accounts[i].display();
			}
		}
		else
		{
			break;
		}
	}
	// taking account dtails from user balance and acc_mo is set.
	std::string password, username;
	std::cout << "please provide your user name and password" << std::endl;
	getline(std::cin, password);
	getline(std::cin, username);
	std::cout << "please create an account to continue!" << std::endl;
	std::cout << "enter account name : " << std::endl;
	std::cin >> name;
	std::cout << "enter account type [savings/nri] : " << std::endl;
	std::cin >> ac_ty;
	bal = 0;
	customer c1(name, ac_no, ac_ty, bal);
	std::cout << "account number : " << c1.serial_no() << std::endl;

	while (true)
	{
		menu();
		std::cout << "select your option" << std::endl; // loop continues until break
		std::cin >> choice;
		switch (choice)
		{ // function allows user to select option
		case 1:
		{
			std::cout << "****THANK YOU FOR BANKING WITH US****" << std::endl;
			c1.add_account();
			std::cout << "the account no. is : " << c1.serial_no() << std::endl;
			break;
		}
		case 2:
		{
			std::cout << "*********DEPOSIT AMOUNT**********" << std::endl;
			c1.deposit();
			break;
		}
		case 3:
		{
			c1.check_balance();
			break;
		}
		case 4:
		{
			std::cout << "**********WITHDRAW AMOUNT**********" << std::endl;
			c1.withdraw();
			break;
		}
		case 5:
		{
			c1.statement();
			break;
		}
		case 6:
			std::cout << "THANK YOU FOR BANKING WITH US" << std::endl;
			return 0;
		default:
			std::cout << "invalid entry try again!!" << std::endl;
		}
	}
	std::cout << "thank you for using our services.vist again!" << std::endl;
	return (0);
}