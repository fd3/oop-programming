#include <iostream>
#include <vector>

using namespace std;

class Matrix{
    vector<vector<int>> l;
public:
    Matrix(int m,int n){
        for(int i = 0 ; i<m ; i++)
        {
           vector<int> k;
           for(int j = 0 ; j<n ;j++)
           {
               k.push_back(0);
           }
           l.push_back(k);
        }
    }
    int& operator()(int i, int j){
       return *((*(l.begin()+j)).begin()+i);
    }
};

int main()
{
    Matrix m(5,5);
    m(1,1)=7;
    cout<<m(1,1)<<endl;
    return 0;
}
