
#include <iostream>
#include <string>

struct BankInfo
{
    int numberBankAccount = 0;
    std::string nameOwner;
    double balance = 0;
};

void AddBalanceInBank(BankInfo& bankInfo, double &newBalance)
{
    bankInfo.balance = newBalance;
}

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    double newBalance = 0;
    BankInfo bankInfo;
    std::cout << "������� ����� �����: ";
    std::cin >> bankInfo.numberBankAccount;
    std::cout << "������� ��� ���������: ";
    std::cin >> bankInfo.nameOwner;
    std::cout << "������� ������: ";
    std::cin >> bankInfo.balance;
    std::cout << "������� ����� ������: ";
    std::cin >> newBalance;
    AddBalanceInBank(bankInfo, newBalance);
    std::cout << "��� ����: " << bankInfo.nameOwner << ", " << bankInfo.numberBankAccount << ", " << bankInfo.balance << std::endl;
}

