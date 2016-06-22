#include <iostream>
#include <string>

using namespace std;

void autoformatowanie(string &napis){
    for(int i=0; i<napis.length(); i++){
        if(napis[i] == ','){
            if(napis[i+1]!=' ') napis.insert(i+1, " ");
        }
    }

    for(int i=0; i<napis.length()-1; i++){
        if(napis[i] == '.'){
            if(napis[i+1]!=' ') napis.insert(i+1, " ");
            if(napis[i+2] > 'Z') napis[i+2] = toupper(napis[i+2]);
        }

    }
}

int main(){
    string napis = "Ala,ma.kota i psa.";
    cout << "Przed: " << napis << endl;
    autoformatowanie(napis);
    cout << "Po: " << napis << "|" << endl;
}
