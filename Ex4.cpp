#include <iostream>

int main()
{

    int a = 0;
    std::cout << "Enter any number 1 to 20 inclusive: ";
    std::cin >> a;

    while (a > 20 || a < 1)
    {
        std::cout << "Enter any number 1 to 20 inclusive: ";
        std::cin >> a;
    }
    int multi = 1;
    while (a <= 20)
    {
        multi *= a++;
    }
    std::cout << multi << " ";
    return 0;
}