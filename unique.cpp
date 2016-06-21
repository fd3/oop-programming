#include <iostream>
using namespace std;

class unique{
private:
    const unsigned int id;
    static unsigned int i;
public:
    unique():id(i++){}
    unsigned int getid(){
        return id;
    }
};
unsigned int unique::i=1;
int main()
{
    unique u1,u2,u3,u4;
    cout<<u1.getid()<<endl;
    cout<<u2.getid()<<endl;
    cout<<u3.getid()<<endl;
    cout<<u4.getid()<<endl;
    return 0;
}
