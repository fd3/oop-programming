#include <iostream>

using namespace std;


class LiczbaZespolona
{
  private:
    double a;
    double b;

  public:
    LiczbaZespolona(double a, double b):
      a(a),
      b(b)
    {
    }

    double getA()
    {
      return a;
    }

    double getB()
    {
      return b;
    }

    void setA(double a)
    {
      this->a = a;
    }

    void setB(double b)
    {
      this->b = b;
    }
};


LiczbaZespolona operator+(LiczbaZespolona& x, LiczbaZespolona& y)
{
  LiczbaZespolona wynik(x.getA() + y.getA(), x.getB() + y.getB());
  return wynik;
}


LiczbaZespolona operator-(LiczbaZespolona& x, LiczbaZespolona& y)
{
  LiczbaZespolona wynik(x.getA() - y.getA(), x.getB() - y.getB());
  return wynik;
}


ostream& operator<<(ostream& s, LiczbaZespolona& x)
{
  s << '[' << x.getA() << ", " << x.getB() << ']';
}


int main()
{
  LiczbaZespolona x(1, 2);
  LiczbaZespolona y(3, 4);

  LiczbaZespolona z = x + y;
  LiczbaZespolona v = x - y;

  cout << z << endl << v << endl;

  return 0;
}
