#include <iostream>

using namespace std;

class factorial
{
    public:
    int num;

    factorial(int n)
    {
        num = n;
    }

    factorial()
    {
        num = 5;
    }

    void calcularFactorial()
    {
        int fac = 1;
        for (int i=1 ; i<=num ; i++)
        {
            fac = fac * i;
        }
        cout<<"factorial de "<<num<<" es : "<<fac;
         
    }
};
int main()
{
    factorial f1;

    f1.calcularFactorial();
    
    return 0;
}