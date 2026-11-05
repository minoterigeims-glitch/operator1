

#include <iostream>
#include<windows.h>
#include <string>

using namespace std;

class Overcoat
{
private:
    string name;
    double price;

public:
    Overcoat() : name(""), price(0) {}

    Overcoat(string name_, double price_): name(name_), price(price_) {
    }

    void Print() const{
        cout << "Тип одягу: " << name<< ", Ціна: " << price << " грн" << endl;
    }

    
    bool operator==(const Overcoat& other) const{
        return name == other.name;
    }

    
    Overcoat& operator=(const Overcoat& other)
    {
        if (this != &other)
        {
            name = other.name;
            price = other.price;
        }

        return *this;
    }

   
    bool operator>(const Overcoat& other) const
    {
        return (name == other.name && price > other.price);
    }
   
};
class Flat
{
private:
    int m;
	double price;
public:
    Flat() : m(0), price(0) {}

    Flat(int m_, double price_) : m(m_), price(price_) {
    }
    void Print() const {
        cout << "Площа : " << m << ", Ціна: " << price << " грн" << endl;
    }
    bool operator==(const Flat& other) const {
        return m == other.m;
    }

    Flat& operator=(const Flat& other)
    {
        if (this != &other)
        {
            m = other.m;
            price = other.price;
        }

        return *this;
    }
    bool operator>(const Flat& other) const
    {
        return (price > other.price);
    }



};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    do {
        cout << "Виберіть завдання (1-2; 0 - Вийти): ";
        cin >> a;
        switch (a) {

        case 1:
        {
            Overcoat a("Пальто", 3500);
            Overcoat b("Пальто", 4200);
            Overcoat c;

            cout << "Перевірка рівності: " << (a == b) << endl;

            c = b;
            cout << "Перевірка присвоювання: ";
            c.Print();

            cout << "Перевірка ціни: " << (b > a) << endl;

			break;
        }
        case 2:
            Flat a(67, 3500);
            Flat b(67, 4200);
            Flat c;

            cout << "Перевірка рівності: " << (a == b) << endl;

            c = b;
            cout << "Перевірка присвоювання: ";
            c.Print();

            cout << "Перевірка ціни: " << (b > a) << endl;

            break;

        }
        } while (a != 0);
    }


