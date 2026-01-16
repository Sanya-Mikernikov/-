#include <iostream>

using  namespace std;

//1. Инкапсуляция
//Инкапсуляция — это механизм, который объединяет данные и методы, работающие с этими данными, в единое целое, называемое классом. Это позволяет скрыть внутреннюю реализацию класса и защитить его данные от несанкционированного доступа.

//Пример:
class BankAccount {
private:
    double balance; // Закрытое поле

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};
//2. Наследование
//Наследование позволяет создавать новые классы на основе существующих. Новый класс (наследник) может наследовать свойства и методы родительского класса, а также добавлять свои собственные.

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(double initialBalance, double rate) 
        : BankAccount(initialBalance), interestRate(rate) {}

    void applyInterest() {
        double interest = getBalance() * interestRate;
        deposit(interest);
    }
};
//3. Полиморфизм
//Полиморфизм позволяет использовать один интерфейс для работы с разными типами объектов. В C++ полиморфизм достигается через виртуальные функции и переопределение методов.
class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing a shape" << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square" << std::endl;
    }
};

void render(const Shape& shape) {
    shape.draw(); // Вызов полиморфного метода
}
//4. Абстракция
//Абстракция позволяет выделить важные характеристики объекта и игнорировать несущественные. В C++ это можно реализовать с помощью абстрактных классов и интерфейсов.

//Пример:
class AbstractShape {
public:
    virtual void draw() const = 0; // Чисто виртуальная функция
};

class Triangle : public AbstractShape {
public:
    void draw() const override {
        std::cout << "Drawing a triangle" << std::endl;
    }
};
//Заключение
//Объектно-ориентированное программирование в C++ предоставляет мощные инструменты для создания гибких и поддерживаемых программных систем. Используя инкапсуляцию, наследование, полиморфизм и абстракцию, разработчики могут создавать сложные структуры данных и алгоритмы, которые легко расширять и модифицировать.