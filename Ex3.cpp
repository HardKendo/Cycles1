#include <iostream>

int main()
{

    float average = 0.0;
    int sum = 0;
    float a = 1.0;
    float b = 1000.0;
    while (a <= b)
    {
        a++;
        sum += a;
    }
    average = sum / b;
    std::cout << "Avwrage " << average;

    return 0;
}