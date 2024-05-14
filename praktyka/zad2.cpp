#include <iostream>
#include <limits.h>
#include <math.h>

unsigned long long factorial_inside(int number)
{
    if(number == 0)
        return 1;

    unsigned long long previous = factorial_inside(number-1);

    if(previous >= (ULLONG_MAX/number))
        return 0;
    else
        return previous*number;
}

unsigned long long factorial(int number)
{
    if(number < 0)
        return 0;
    else
    {
        return factorial_inside(number);
    }
}

int main()
{
    int x;
    std::cout << "Proszę o podanie liczby" << std::endl;
    std::cin >> x;
    unsigned long long result = factorial(x);
    if(result == 0)
        std::cout << "error" << std::endl;           
    else 
        std::cout << x << "! = " << result << std::endl;
}