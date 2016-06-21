#include <vector>
#include <iostream>

using namespace std;


vector<int> parzyste(vector<int> liczby)
{
  int rozmiar = liczby.size();

  vector<int> wynik;

  for (int i = 0; i < rozmiar; ++i)
  {
    if (liczby[i] % 2 == 0)
      wynik.push_back(liczby[i]);
  }

  return wynik;
}


int main()
{
  int tablica[7] = {0, 1, 2, 3, 4, 5, 6};
  vector<int> liczby(tablica, tablica + 7);

  vector<int> wynik = parzyste(liczby);
  int wynik_rozmiar = wynik.size();

  for (int i = 0; i < wynik_rozmiar; ++i)
    std::cout << wynik[i] << std::endl;

  return 0;
}
