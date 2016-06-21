#include <iostream>

using namespace std;


class Klasa
{
  private:
    static int licznikObiektow;

  public:
    Klasa()
    {
      licznikObiektow++;
    }

    ~Klasa()
    {
      licznikObiektow--;
    }

    static bool czyIstnieje()
    {
      return (licznikObiektow > 0);
    }
};


int Klasa::licznikObiektow = 0;


int main()
{
  cout << Klasa::czyIstnieje() << endl;

  Klasa* obiekt = new Klasa;

  cout << Klasa::czyIstnieje() << endl;

  delete obiekt;

  cout << Klasa::czyIstnieje() << endl;

  return 0;
}
