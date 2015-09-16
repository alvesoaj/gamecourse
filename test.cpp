#include <iostream>
#include "Simple.h"
 
using namespace std;

int main(int argc, char *argv[]) {
        // Alocando no stack
    Simple cSimple(1);
    cout << "Class ID: " << cSimple.GetID() << endl;
 
    // Alocando dinamicamente
    Simple *pSimple = new Simple(2);
    cout << "Class ID: " << pSimple->GetID() << endl;
    delete pSimple;
 
    return 0;
}