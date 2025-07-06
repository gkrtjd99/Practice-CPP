#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    constexpr double    one_m_to_cm = 100;
    constexpr double    one_in_to_cm = 2.54;
    constexpr double    one_ft_to_in = 12;
    double              a = 0.0;
    string              b = "";
    vector<double>      v;

    cout << "Enter one number and a unit, the unit can be cm, in, ft, or m.\n";
    while (cin >> a >> b)
    {
        if (b == "cm")
            a /= one_m_to_cm;
        else if (b == "in")
            a = a * one_in_to_cm / one_m_to_cm;
        else if (b == "ft")
            a = a * one_ft_to_in *one_in_to_cm / one_m_to_cm;
        else if (b == "m");
        else
        {
            cout << "That's an invalid unit.\n";
            continue;
        }
        v.push_back(a);
    }
    double max_value = *max_element(v.begin(), v.end());
    double min_value = *min_element(v.begin(), v.end());
    sort(v.begin(), v.end());
    double value_sum;
    for(double x : v)
        value_sum += x;
    cout << "max value : " << max_value << "m\n";
    cout << "min value : " << min_value << "m\n";
    cout << "number of values : " << v.size() << "\n";
    cout << "sum of values : " << value_sum << "m\n";
    return 0;
}