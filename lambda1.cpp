#include <iostream>
#include <functional>
using namespace std;

class Number{
    int n;
public:
    Number(int n){
        this->n=n;
    }
    int get(){
        return n;
    }
};
function<Number ()> f (int x){
    return [=] {return Number (x);};
}

int main()
{

    function<Number ()> a = f(5);
    Number b = a();
    Number c = a();
    Number d = a();
    cout << b.get() << endl;
    cout << c.get() << endl;
    cout << d.get() << endl;
    return 0;
}
