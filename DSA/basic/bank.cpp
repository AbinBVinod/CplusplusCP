#include <iostream>
#include <iomanip>

void showbal(double balance);
double deposit();
double withdraw(double balance);

int main()
{

    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "*** \n";
        std::cout << "enter your choice \n";
        std::cout << "1. show balance \n";
        std::cout << " 2.dep money\n";
        std::cout << " 3 withdra mon \n";
        std::cout << "exit \n";

        std::cin >> choice;

        switch (choice)
        {

        case 1:
            showbal(balance);
            break;

        case 2:
            balance += deposit();
            showbal(balance);

            break;

        case 3:
            balance -= withdraw(balance);
            showbal(balance);
            break;
        case 4:
            std::cout << "thank for vis";

        default:
            std::cout << "uinvalid";
        }

    } while (choice != 4);

    return 0;
}
void showbal(double balance)
{
    std::cout << "your bal is : $"
              << std::setprecision(2) << std::fixed << balance;
}
double deposit()
{

    double amount = 0;
    std::cout << "enter  amt to dep";
    std::cin >> amount;

    if(amount  )

    return amount;
}
double withdraw(double balance)
{
    return 0;
}
