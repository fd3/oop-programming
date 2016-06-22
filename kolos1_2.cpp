#include <fstream>

using namespace std;

class Plik{
private:
    fstream plik;
public:
    Plik(string sciezka){
        plik.open(sciezka.c_str(), ios::out | ios::app);
    }

    ~Plik(){
        plik.close();
    }

};

int main(){
 
}
