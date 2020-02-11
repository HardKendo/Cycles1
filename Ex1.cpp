#include <iostream>

int main()
{

    int sum = 0;
    int a = 0;
    std::cout << "Enter any value: ";
    std::cin >> a;

    while (a > 500)
    {
        std::cout << "Enter value less then 500: ";
        std::cin >> a;
    }

    while (a <= 500)
    {
        sum += a++;
    }
    std::cout << sum << " ";

    return 0;
}