#include <vector>
#include <iostream>

using namespace std;


class Zwierze
{
  public:
    virtual string opis() = 0;
};


class Pies: public Zwierze
{
  private:
    const string imie;

  public:
    Pies(string i):
      imie(i)
    {
    }

    string opis()
    {
      return "Pies " + imie;
    }
};


class Kot: public Zwierze
{
  private:
    const string imie;

  public:
    Kot(string i):
      imie(i)
    {
    }

    string opis()
    {
      return "Kot " + imie;
    }
};


class Krolik: public Zwierze
{
  private:
    const string imie;

  public:
    Krolik(string i):
      imie(i)
    {
    }

    string opis()
    {
      return "Krolik " + imie;
    }
};


void listaZwierzat(vector<Zwierze*> zwierzeta)
{
  int rozmiar = zwierzeta.size();

  for (int i = 0; i < rozmiar; ++i)
    cout << zwierzeta[i]->opis() << endl;
}


int main()
{
  vector<Zwierze*> zwierzeta;

  zwierzeta.push_back(new Pies("Burek"));
  zwierzeta.push_back(new Kot("Filemon"));
  zwierzeta.push_back(new Krolik("Albin"));

  listaZwierzat(zwierzeta);

  for (int i = zwierzeta.size() - 1; i >= 0; --i)
    delete zwierzeta[i];

  return 0;
}
