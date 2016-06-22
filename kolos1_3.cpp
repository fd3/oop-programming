#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Gold{
private:
    float amount;
public:
    Gold(float value){
        amount = value;
    }

    float get_Amount(){
        return amount;
    }

    virtual string toString()=0;
};

class PLN : public Gold{
public:
    PLN(float value) : Gold(value/4632.98){}
    string toString(){
        stringstream ss;
        string wynik;
        ss << get_Amount() * 4632.98;
        ss >> wynik;
        return wynik+"zl";
    }
};

class USD : public Gold{
public:
    USD(float value) : Gold(value/1224.50){}
    string toString(){
        stringstream ss;
        string wynik;
        ss << get_Amount() * 1224.50;
        ss >> wynik;
        return "$" + wynik;
    }
};

int main(){
    int rozmiar;
    cin >> rozmiar;
    Gold **gold = new Gold *[rozmiar];

    for(int i=0; i<rozmiar; i++){
        string waluta;
        float wartosc;
        cin >> wartosc >> waluta;
        if(waluta == "PLN") gold[i] = new PLN(wartosc);
        else if(waluta == "USD") gold[i] = new USD(wartosc);
    }

    for(int i=0; i<rozmiar; i++){
        cout << gold[i]->toString() << endl;
    }

    //po wyswietleniu w petli powyzej mozna bylo od razu kasowac. Wtedy mozna ponizsza petle pominac
    for(int i=0; i<rozmiar; i++){
        delete gold[i];
    }
    delete [] gold;
}
