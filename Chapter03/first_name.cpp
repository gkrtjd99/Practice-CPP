#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    string  first_name = "???";
    string  sign;
    char    friend_sex;
    int     age;

    cout << "Please enter the name of the recipient.\n";
    cin >> first_name;
    cout << "Dear, " << first_name <<"\n";
    cout << "How are you? I'm doing well. I miss you \n";
    cout << "Please write your friend's name. : ";
    cin >> first_name;
    cout << "Please enter m if your friend is male, and f if your friend is female. : ";
    cin >> friend_sex;
    while (friend_sex != 'm' && friend_sex != 'f')
    {
        cout << "Don't mess around!\n";
        cout << "Please enter m if your friend is male, and f if your friend is female. : ";
        cin >> friend_sex;
    }
    if (friend_sex == 'm')
        cout << "Please tell him to call me if you see " << first_name << "\n";
    else
        cout << "Please tell her to call me if you see " << first_name << "\n";
    cout << "Please enter the age of the other person. : ";
    cin >> age;
    while (age < 0 || age > 100)
    {
        cout << "Don't mess around!\n";
        cout << "Please enter the age of the other person. : ";
        cin >> age;
    }
    cout << "I heard you recently celebrated your " << age << "th birthday\n";
    if (age < 12)
        cout << "You\'ll be 13 next year.\n";
    else if (age > 70)
        cout << "Are you enjoying your retirement?\n";
    else
        cout << "You\'ll be able to vote next year.\n";
    cout << "Your friend ";
    cin >> sign;
}