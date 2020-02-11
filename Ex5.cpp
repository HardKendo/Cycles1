#include <iostream>

int main()
{

    int num = 0;
    std::cout << "Enter number: ";
    std::cin >> num;

    int i = 0;
    while (i < 10)
    {
        ++i;
        std::cout << num << " x " << i << " = " << num * i << std::endl;
    }
    return 0;
}