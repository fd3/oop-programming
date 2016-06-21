#include <iostream>
#include <math.h>
using namespace std;

class OutOfRange
{
private:
  bool e1,e2,e3;
public:
  OutOfRange(bool e1,bool e2, bool e3)
  {
    this->e1=e1;
    this->e2=e2;
    this->e3=e3;
  }
  void message(){
    if(e1)
    cout<<"Przekroczono zakres e1"<<endl;
    if(e2)
    cout<<"Przekroczono zakres e2"<<endl;
    if(e3)
    cout<<"Przekroczono zakres e3"<<endl;
  }
};

void SWAP(int t1[],int t2[],int t3[],int l1,int l2,int l3, int n)
{
  bool e1,e2,e3;
  e1=(l1>=n);

  e2=(l2>=n);

  e3=(l3>=n);

  if(e1||e2||e3)
    throw OutOfRange(e1,e2,e3);
  int pom;
  pom=t2[l2];
  t2[l2]=t1[l1];
  t1[l1]=t3[l3];
  t3[l3]=pom;
}
int main()
{
  int t1[] = {1,2,3};
  int t2[] = {4,5,6};
  int t3[] = {7,8,9};
  int l1 = 3;
  int l2 = 2;
  int l3 = 2;
  int n = 3;
  try{
  SWAP(t1,t2,t3,l1,l2,l3,n);
  }
  catch(OutOfRange & o)
  {
    o.message();
  }
  return 0;
}
