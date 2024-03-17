#include <bits/stdc++.h>

using namespace std;

int main()
{
    time_t now = time(0);
    tm* gmtm = gmtime(&now);
    cout << "Hello world!" << endl;
    cout << "Current time: \t\t" << ctime(&now) << endl;
    cout << "Current time GMT: \t" << asctime(gmtm) << endl;

    return 1;
}