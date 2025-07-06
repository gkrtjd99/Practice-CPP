#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    double a = 0.0;
    double b = 0.0;

    cout << "Please enter two numbers.\n";
    while (cin >> a >> b)
    {
        if (a - b > 0.01)
        {
            cout << "The smaller so far "<< b <<"\n";
            cout << "The larger so far "<< a <<"\n";
        }
        else if (a - b < 0.01)
        {
            cout << "The smaller so far "<< a <<"\n";
            cout << "The larger so far "<< b <<"\n";
        }
        else
        cout << "the numbers are almost equal\n";

    }
    return 0;
}