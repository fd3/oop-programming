#include <iostream>
#include <vector>
using namespace std;

int main()
{
    unsigned int n;

    cin >> n;

    vector<unsigned int> l;


    while(n!=0)
    {
        l.push_back(n);
        cin >> n;
    }
    l.push_back(0);
    for(vector<unsigned int>::iterator it = l.begin(); it!=l.end(); it++ )
    {
        cout<<*it;
    }
    return 0;
}
