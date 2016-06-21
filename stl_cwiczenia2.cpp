#include <iostream>
#include <vector>
using namespace std;

void f(vector<int> &a){
    vector<int> c;
    while(!a.empty()){
        c.push_back(a.back());
        a.pop_back();
    }
    for(vector<int>::iterator it = c.begin();it!=c.end();it++)
    {
        a.push_back(*it);
    }
}

int main()
{
    vector<int> a;
    for(int i=0;i<5;i++)
    {
        a.push_back(i);
    }
    f(a);
    for(vector<int>::iterator it = a.begin();it!=a.end();it++)
    {
        cout<< *it <<endl;
    }

    return 0;
}
