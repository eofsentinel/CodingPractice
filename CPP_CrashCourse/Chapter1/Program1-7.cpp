#include <iostream>
using namespace std;

/*
 * 
 * 
*/

int step_function(int x)
{
    if (x < 0) {
        return -1;
    }
    else if (x == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    cout << step_function(100) << endl;
    cout << step_function(-100) << endl;
    cout << step_function(0) << endl;
}