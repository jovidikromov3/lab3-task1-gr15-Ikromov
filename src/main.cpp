/* main.cpp */
#include <iostream>
#include <cmath>
 
bool isPrime (int n)
{
    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0)
            return false; 
    return true;
}
 
int main()
{
    for (int i=100; i < 1000; i++)
        if (isPrime(i))
            std::cout<< i << " ";
    return 0;
}