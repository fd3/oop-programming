#include <utility>
#include <vector>

using namespace std;

pair< vector<double>, vector<double> > divideVector(vector<double> v) {
    vector<double> v1, v2;


    unsigned int i = 0;
    for (vector<double>::const_iterator it = v.begin(); it != v.end(); it++, i++) {
        if (i%3) {
            v2.push_back(*it);
        } else {
            v1.push_back(*it);
        }
    }


    for (unsigned int i=0; i<v.size(); i++) {
        if (i%3) { // 1, 2, 4, 5, 7, 8...
            v2.push_back( v1[i] );
        } else { // 0, 3, 6, 9...
            v1.push_back( v1[i] );
        }
    }


    pair< vector<double>, vector<double> > p;
    p.first = v1;
    p.second = v2;


    return p;
}

#include <iostream>

int main() {

    vector<double> v = {2, 3, 5, 8, 13, 21, 34};
    pair< vector<double>, vector<double> > p = divideVector(v);

    cout << (p.first)[1] << endl; // 8
    cout << (p.second)[3] << endl; // 21

    return 0;
}
