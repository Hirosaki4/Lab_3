#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    //Завдання:Напишіть програму, яка обчислює суму цифр введеного числа, використовуючи цикл while.
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
        int number, sum = 0;

        cout << "Введіть ціле число: ";
        cin >> number;
  
        if (number < 0) {
            number = -number;
        }
        while (number != 0) {
            sum += number % 10;  
            number /= 10;        
        }

        cout << "Сума цифр: " << sum << endl;

        return 0;
    }
