#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> s = new vector<string>({ "+5F" });
    int n = s.size();
    bool b[10][26] = {false};
    int c = 0;
    for(int i=0;i<n;i++)
    {
        string a = s[i];
        if(a.length()!=3)
        {
            throw new exception;
        }
        else if(a[0]!='+' || a[0]!='-')
        {
            throw new exception;
        }
        else if(a[1] < '0'||a[0] > '9')
        {
            throw new exception;
        }
        else if(a[2]<'A' || a[2]>'Z')
        {
            throw new exception;
        }
        else{
            if(a[0]=='+')
            {
                if(b[a[1]-'0'][a[2]='A'] == true)
                {
                    throw new exception;
                }
                else{
                    b[a[1]][a[2]] = true;
                    c++;
                }
            }
            else{
                if(b[a[1]][a[2]] == false)
                {
                    throw new exception;
                }
                else{
                    b[a[1]][a[2]] = false;
                    c--;
                }
            }
        }
    }
    return c;
}