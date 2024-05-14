#include<iostream>

unsigned long long factorial(int number)
{
    if(number < 0)
        return 0;
    else
        return factorial_inside(number);    
}

unsigned long long factorial_inside(int number)
{
    if(number == 0)
        return 1;

    unsigned long long result = factorial(number-1)*number;
    return result;
}

int main()
{
    int x;
    std::cin >> x;
    unsigned long long result = factorial(x);
    std::cout << x << "! = " << result << std::endl;
}