#include <iostream>
int main(int argc, char ** argv) {
// Написать функцию проверки, является ли число простым
// Простое число - это число, которое делится без остатка только на единицу и себя само.
    int a=0;
    while(a<2) {
      std::cout << "Введите целое число больше 1: ";
      std::cin >> a;
    }
    bool d=false;
    for(int i=2;i<a;i++){ // 2 первое и единственное чётное простое число, так как условие i<a, то цикл для 2 не выполнится.
        if (a%i == 0) {
            d=true;
            break;
        }
    }
    if(d)
        std::cout << "Число " << a << " не является простым." << std::endl;
    else
        std::cout << "Число " << a << " является простым." << std::endl;
// суммировать в цикле числа от 1 до 10
    int summ = 1;
    for(int toAdd = 2;toAdd<11;toAdd++) {
        summ=summ+toAdd;
    }
    std::cout << "Сумма целых чисел от 1 до 10: " << summ << std::endl;

    return 0;
}
