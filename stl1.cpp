#include <vector>
#include <iostream>

using namespace std;


pair<int, int> minmax(vector<int>& liczby)
{
  int rozmiar = liczby.size();

  int maksimum = liczby[0];
  int minimum = liczby[0];

  for (int i = 1; i < rozmiar; ++i)
  {
    if (liczby[i] > maksimum)
      maksimum = liczby[i];

    else if (liczby[i] < minimum)
      minimum = liczby[i];
  }

  pair<int, int> wynik;
  wynik.first = minimum;
  wynik.second = maksimum;

  return wynik;
}


int main()
{
  vector<int> liczby;

  liczby.push_back(2);
  liczby.push_back(3);
  liczby.push_back(1);
  liczby.push_back(5);
  liczby.push_back(4);

  pair<int, int> wynik = minmax(liczby);

  cout << "minimum: " << wynik.first << std::endl
       << "maksimum: " << wynik.second << std::endl;

  return 0;
}
