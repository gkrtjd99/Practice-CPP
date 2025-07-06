#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Please enter two numbers.\n";
    while (cin >> a >> b)
    {
        if (a > b)
        {
            cout << "The smaller value is "<< b <<"\n";
            cout << "The larger value is "<< a <<"\n";
        }
        else if (a < b)
        {
            cout << "The smaller value is "<< a <<"\n";
            cout << "The larger value is "<< b <<"\n";
        }
        else
        cout << "the numbers are equal\n";

    }
    return 0;
}