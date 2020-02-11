#include <iostream>

int main()
{

    int x = 0;
    int y = 0;
    std::cout << "Enter two integer number by spacebar: ";
    std::cin >> x >> y;

    int res = 1;
    int i = 0;

    while (i < y)
    {
        ++i;
        res *= x;
    }
    std::cout << res;

    return 0;
}