#include <iostream>

using namespace std;


class Oryginalna
{
  private:
    static bool bylyTworzoneObiekty;
    bool jestemPierwszymObiektem;

  public:
    Oryginalna()
    {
      if (bylyTworzoneObiekty)
      {
        jestemPierwszymObiektem = false;
      }
      else
      {
        jestemPierwszymObiektem = true;
        bylyTworzoneObiekty = true;
      }
    }

    bool oryginal()
    {
      return jestemPierwszymObiektem;
    }
};


bool Oryginalna::bylyTworzoneObiekty = false;


int main()
{
  Oryginalna a; // pierwszy obiekt - oryginal
  Oryginalna b;
  Oryginalna c;

  cout << "czy a jest oryginalem: " << a.oryginal() << endl;
  cout << "czy b jest oryginalem: " << b.oryginal() << endl;
  cout << "czy c jest oryginalem: " << c.oryginal() << endl;

  return 0;
}
