#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int balance;
    srand(time(NULL));
    balance = rand() % 10000;       // рандомная сумма на баласне
    int valid_pin = 7777;           // правильный ПИН код карты
    int pin;                        // ПИН код, который будет вводить пользователь
    bool t = false;                 // хранит в себе true, если ПИН код верный
    int n = 3;                      // количество попыток ввода ПИН кода
    
    cout << "Введите PIN" << endl;
    cin >> pin;
    if (pin != valid_pin)
    {
        for (int i = 1; pin != valid_pin; i++)
        {
            n = n - 1;
            if (n == 0)
            {
                cout << "Доступ заблокирован на 24 часа. Обратитесь в техподдержку." << endl;
                return 0;
            }
            cout << "Неверный PIN. Осталось попыток: " << n << endl;
            cin >> pin;
        }        
    }
    if (pin == valid_pin)
    {
        t = true;
    }
    int currency_type;
    int operation_type;
    int summ;               // сумма, которую пользователь хочет снять
    if (t == true)
        {
            cout << endl << "Выберите тип операции " << endl << "1. Снять наличные" << endl << "2. Внести наличные" << endl;
            cin >> operation_type;
            if (operation_type != 1 || operation_type != 2)
            {
                while (operation_type != 1 && operation_type != 2)
                    {
                        cout << endl << "Ошибка. Выберите тип операции " << endl << "1. Снять наличные" << endl << "2. Внести наличные" << endl;
                        cin >> operation_type;
                    }
            }
        }
    if (operation_type == 1)
    {
        cout << endl << "На вашем счету " << balance << " RUB";
        cout << endl << "Выберите валюту" << endl;
        cout << "1. RUB" << endl << "2. USD" << endl << "3. EUR" << endl;
        cin >> currency_type;
        if (currency_type == 1)
        {
            cout << "Введите сумму кратную 10" << endl;
            cin >> summ;
            while (summ % 10 != 0)
            {
                cout << "Ошибка. Введите сумму кратную 10" << endl;
                cin >> summ;
            }
            if (summ > balance)
            {
                cout << endl << "Недостаточно средств на балансе. Введите другую сумму" << endl;
                cin >> summ;
                while (summ > balance)
                {
                    cout << endl << "Недостаточно средств на балансе. Введите другую сумму" << endl;
                    cin >> summ;
                    while (summ % 10 != 0)
                    {
                        cout << "Ошибка. Введите сумму кратную 10" << endl;
                        cin >> summ;
                    }
                }
            }
            int check;              // распечатать чек
            if (summ <= balance)
            {
               cout << endl << "Печатать чек?" << endl;
               cout << "1. Да" << endl << "2. Нет" << endl;
               cin >> check;
                if (check != 1 || check != 2)
                {
                    while (check != 1 && check != 2)
                        {
                            cout << endl << "Ошибка. Печатать чек?" << endl;
                            cout << "1. Да" << endl << "2. Нет" << endl;
                            cin >> check;
                        }
                }
                if (check == 1)
                {
                    cout << endl << "Заберите деньги" << endl << "." << endl << "." << endl << "." << endl << "Возьмите чек" << endl;
                }
                if (check == 2)
                {
                    cout << endl << "Заберите деньги" << endl;
                }
            }
        }
        if (currency_type == 2)
        {
            int usd = balance / 75;
            cout << endl << "Вам доступно " << usd << " USD по курсу 1 USD = 75 RUB";
            cout << endl << "Введите сумму" << endl;
            cin >> summ;
            if (summ > balance / 75)
            {
                cout << endl << "Недостаточно средств на балансе. Введите другую сумму" << endl;
                cin >> summ;
                while (summ > balance / 75)
                {
                    cout << endl << "Недостаточно средств на балансе. Введите другую сумму" << endl;
                    cin >> summ;
                }
            }
            int check;
            if (summ <= balance / 75)
            {
               cout << endl << "Печатать чек?" << endl;
               cout << "1. Да" << endl << "2. Нет" << endl;
               cin >> check;
                
                if (check != 1 || check != 2)
                {
                    while (check != 1 && check != 2)
                        {
                            cout << endl << "Ошибка. Печатать чек?" << endl;
                            cout << "1. Да" << endl << "2. Нет" << endl;
                            cin >> check;
                        }
                }
                if (check == 1)
                {
                    cout << endl << "Заберите деньги" << endl << "." << endl << "." << endl << "." << endl << "Возьмите чек" << endl << "До свидания!" << endl;
                }
                if (check == 2)
                {
                    cout << endl << "Заберите деньги" << endl << "До свидания!" << endl;
                }
            }
        }
        if (currency_type == 3)
        {
            int eur = balance / 90;
            cout << endl << "Вам доступно " << eur << " EUR по курсу 1 EUR = 90 RUB";
            cout << endl << "Введите сумму" << endl;
            cin >> summ;
            if (summ > balance / 90)
            {
                cout << endl << "Недостаточно средств на балансе. Введите другую сумму" << endl;
                cin >> summ;
                while (summ > balance / 90)
                {
                    cout << endl << "Недостаточно средств на балансе. Введите другую сумму" << endl;
                    cin >> summ;
                }
            }
            int check;
            if (summ <= balance / 90)
            {
               cout << endl << "Печатать чек?" << endl;
               cout << "1. Да" << endl << "2. Нет" << endl;
               cin >> check;
                
                if (check != 1 || check != 2)
                {
                    while (check != 1 && check != 2)
                        {
                            cout << endl << "Ошибка. Печатать чек?" << endl;
                            cout << "1. Да" << endl << "2. Нет" << endl;
                            cin >> check;
                        }
                }
                if (check == 1)
                {
                    cout << endl << "Заберите деньги" << endl << "." << endl << "." << endl << "." << endl << "Возьмите чек" << endl << "До свидания!" << endl;
                }
                if (check == 2)
                {
                    cout << endl << "Заберите деньги" << endl << "До свидания!" << endl;
                }
            }
        }
    }
   if (operation_type == 2)
   {
       int more;            // добавить еще к уже внесенной сумме
       int zach;            // рандомная сумма внесения денег
       zach = rand() % 150;
       zach = zach * 100;
       cout << endl << "Внесите купюры в купюроприемник. Пачкой не более 50 купюр без скрепок и зажимов" << endl;
       cout << "Внесено рублей: " << zach;
       cout << endl << "Добавить еще?" << endl << "1. Да" << endl << "2. Нет" << endl;
       cin >> more;
       while (more != 1 && more != 2)
       {
           cout << endl << "Ошибка. Добавить еще?" << endl << "1. Да" << endl << "2. Нет" << endl;
           cin >> more;
           if (more == 1)
           {
               while (more == 1)
               {
                   int zach2;
                   zach2 = rand() % 150;
                   zach = (zach + (zach2 * 100));
                   cout << endl << "Внесено: " << zach << endl;
                   cout << endl << "Добавить еще?" << endl << "1. Да" << endl << "2. Нет" << endl;
                   cin >> more;
               }
            }
            if (more == 2)
            {
                cout << endl << "Внесено рублей: " << zach << endl << "До свидания!" << endl;
            }
       }
    }
    return 0;
}
