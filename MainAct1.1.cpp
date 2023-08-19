#include "activity.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    unsigned int n;
    cout << "número: ";
    cin >> n;
    cout << "sumaIterativa: " << sumaIterativa(n) << endl;
    cout << "sumaRecursiva: " << sumaRecursiva(n) << endl;
    cout << "sumaDirecta: " << sumaDirecta(n) << endl;
    return 0;
}