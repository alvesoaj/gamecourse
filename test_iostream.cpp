// Arquivo TestIOStream.cpp
#include <iostream>

using namespace std;
 
int main(int argc, char *argv[]) {
    std::cout << "Insira um número: ";
    int x = 0;
    cin >> x;
    cout << "Você digitou " << x << endl;
    return 0;
}