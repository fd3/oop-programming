#include <iostream>
using namespace std;

class Unikalna {
    private:
        const unsigned int id;
        static unsigned int cnt; // unikalne id elementu
        static unsigned int num; // liczba elementow
    public:
        Unikalna();
        ~Unikalna();
        static unsigned int ile();
    };

unsigned int Unikalna::cnt = 0;
unsigned int Unikalna::num = 0;

Unikalna::Unikalna() :
    id(cnt)
    {
        cnt++;
        num++;
}

Unikalna::~Unikalna() {
    num--;
}

unsigned int Unikalna::ile() {
    return num;
}

int main() {
    Unikalna u1;
    Unikalna u2;
    Unikalna u3;
    std::cout << Unikalna::ile() << std::endl; // sa 3

    {
        Unikalna u4;
        std::cout << Unikalna::ile() << std::endl; // powstaje dodatkowy, 4
    }

    std::cout << Unikalna::ile() << std::endl; // dodatkowy niszczony, 3

    return 0;
}
