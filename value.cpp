#include <iostream>

using namespace std;
class Value{
private:
    int val;
public:
    Value(int x){
        val=x;
    }
friend void swap(Value &w1, Value &w2);
friend class ValuePrinter;
};
class ValuePrinter;
void swap(Value &w1, Value &w2){
    int x=w1.val;
    w1.val=w2.val;
    w2.val=x;
}


class ValuePrinter{
public:
    void printValue(Value &w){
        cout<<"value: "<<w.val<<endl;
    }
};

int main()
{   ValuePrinter x1;
    Value v1(6);
    Value v2(3);
    x1.printValue(v1);
    x1.printValue(v2);
    swap(v1,v2);
    x1.printValue(v1);
    x1.printValue(v2);
    return 0;
}
