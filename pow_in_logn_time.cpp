#include<bits/stdc++.h>
using namespace std;

int pow(int base, int power)
{
    if(power == 0)
    {
        return 1;
    }

    if(power == 1)
    {
        return base;
    }

    if(power % 2 == 0)
    {
        int x = pow(base, power/2);

        return x * x;
    }
    else
    {
        int x = pow(base, power/2);

        return x * x * base;
    }
}

int main()
{
    cout << pow(2, 5) << endl;
}
