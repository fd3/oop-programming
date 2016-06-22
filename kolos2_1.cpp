#include <iostream>

class Czlowiek {
private:
    int szczescie;
public:
    Czlowiek(int s) {
        szczescie = s;
    }

    int getSzczescie() {
        return szczescie;
    }
};

int operator/ (Czlowiek c1, Czlowiek c2) {
    return c1.getSzczescie()*c2.getSzczescie();
}

std::ostream& operator<< (std::ostream& os, Czlowiek c) {
    os << "pomnozone szczescie: " << c.getSzczescie();
    return os;
}

int main() {
    Czlowiek c1(5);
    Czlowiek c2(7);

    std::cout << c1/c2 << std::endl;

    std::cout << c1 << std::endl;

    return 0;
}
