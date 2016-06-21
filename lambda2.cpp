#include <iostream>
#include <functional>
using namespace std;

void sortowanie(int tab[],int n,function <bool(int,int)>f){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if( f(tab[j-1],tab[j]) ){
                swap(tab[j-1],tab[j]);
            }
        }
    }
}

int main()
{
    int t[10]={9,2,3,1,7,4,5,2,5,1};
    sortowanie(t,10,[](int a, int b){return a<b;});
    for(int i=0;i<10;i++){
        cout<<t[i]<<endl;
    }
    return 0;
}
