#include <iostream>
#include <iomanip>

void showBalance(double balance);
void deposit(double &balance);
void withdraw(double &balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "\n*********************\n";
        std::cout << "Tentukan pilihan anda\n";
        std::cout << "1. Info Saldo\n";
        std::cout << "2. Deposit Saldo\n";
        std::cout << "3. Tarik Saldo\n";
        std::cout << "4. Exit\n";
        std::cout << "*********************\n";
        std::cout << "Pilihan: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            deposit(balance);
            break;
        case 3:
            withdraw(balance);
            break;
        case 4:
            std::cout << "Terima kasih telah menggunakan layanan kami.\n";
            break;
        default:
            std::cout << "Pilihan tidak valid.\n";
        }

    } while (choice != 4);

    return 0;
}


void showBalance(double balance)
{
    std::cout << "Saldo Anda: Rp. "
              << std::fixed << std::setprecision(2)
              << balance << "\n";
}

void deposit(double &balance)
{
    double amount;
    std::cout << "Masukkan jumlah deposit: Rp. ";
    std::cin >> amount;

    if (amount > 0)
    {
        balance += amount;
        std::cout << "Deposit berhasil.\n";
    }
    else
    {
        std::cout << "Jumlah tidak valid.\n";
    }
}

void withdraw(double &balance)
{
    double amount;
    std::cout << "Masukkan jumlah penarikan: Rp. ";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Saldo tidak cukup.\n";
    }
    else if (amount <= 0)
    {
        std::cout << "Jumlah tidak valid.\n";
    }
    else
    {
        balance -= amount;
        std::cout << "Penarikan berhasil.\n";
    }
}
