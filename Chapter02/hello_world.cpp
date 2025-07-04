#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
// namespace를 사용하게 되면 std::cin -> cin 이렇게 사용해도 같은 동작을 한다.
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
    cout << "Hello, World!\n";
    keep_window_open();
    return 0;
}