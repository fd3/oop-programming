#include <iostream>


class ArrayException{
  virtual void message() = 0;
};
class ArrayAllocationException:public ArrayException{
  void message() {
    std::cout << "Problem z alokacja" << std::endl;
  }
};
class ArrayTooLowIndexException:public ArrayException{
  void message(){
    std::cout << "Za maly indeks" << std::endl;
  }
};
class ArrayTooHighIndexException:public ArrayException{
  void message(){
    std::cout << "Za duzy indeks" << std::endl;
  }
};
class Array{
public:
  int *tab;
  int size;
  Array(int size){
    this->size=size;
      tab = new int [size];
      if (tab==NULL)
        throw ArrayAllocationException();
  }
  int get(int i) const{
    if(i<0)
      throw ArrayTooLowIndexException();
    return tab[i];
    if(i>=size)
      throw ArrayTooHighIndexException();
  }
  int &get(int *i){
    if(i<0)
      throw ArrayTooLowIndexException();
    return tab[i];
    if(i>=size)
      throw ArrayTooHighIndexException();
      
  }
};

int main()
{
  Array a1(4);
  try{
  a1.get(5);
  }
  catch (ArrayException &o){
    o.message();
  }
  return 0;
}
