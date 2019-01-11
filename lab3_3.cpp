#include <iostream>
using namespace std;
int main()
{
    long double i;
    i=19;
    long double ans=0;
    while(i>5)
    {
        ans = ans+(1/i);
        i=i-1;
    }
    cout << "ans = " <<ans;
    return 0;
}