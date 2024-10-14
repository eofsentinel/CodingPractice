#include<iostream>
#include<thread>
#include<string>
#include<mutex>

using namespace std;

mutex mtx;

void print(string callerName)
{
    for (int i = 0; i < 10; i++)
    {
        mtx.lock();
        cout << "From thread " << callerName << " : " << i << endl;
        mtx.unlock();
    }
}

void myFunc(string callerName)
{
    // cout << "Hello world!" << endl;
    print(callerName);
}

int main()
{
    // myFunc();

    string newThreadName("T1");
    thread t1(myFunc, newThreadName);
    // t1.join();
    // t1.detach();

    print("MAIN");

    t1.join();
    
    return 0;
}