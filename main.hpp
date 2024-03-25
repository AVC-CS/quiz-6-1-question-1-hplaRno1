#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************

void getTwoValues(int &, int &);
int getNextPrime(int);
int getPrevPrime(int);
int isPrime(int);

void getTwoValues(int &val1, int &val2)
{
    while (1)
    {
        cout << "Enter two values : ";
        cin >> val1 >> val2;
        if (val1 < val2)
            break;
    }
}

int getNextPrime(int begin)
{
    int prime;
    prime = begin + 1;
    while (1)
    {
        if (isPrime(prime))
            return prime;
        prime += 1;
    }
    return INT_MAX;
}

int isPrime(int number)
{
    for (int i = 2; i <= (number / 2); i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int getPrevPrime(int end)
{
    int prime;
    prime = end - 1;
    while (1)
    {
        if (isPrime(prime))
            return prime;
        prime -= 1;
    }
    return INT_MIN;
}
