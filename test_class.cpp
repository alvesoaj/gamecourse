#include <iostream>

class Simple {
    private:
        int m_nID;
     
    public:
        Simple(int nID) {
            std::cout << "Constructing Simple: " << nID<< std::endl;
            m_nID = nID;
        }
     
        ~Simple() {
            std::cout << "Destructing Simple: " << m_nID << std::endl;
        }
     
        int GetID() { return m_nID; }
};
 
int main(int argc, char *argv[]) {
    // Alocando no stack
    Simple cSimple(1);
    std::cout << "Class ID: " << cSimple.GetID() << std::endl;
 
    // Alocando dinamicamente
    Simple *pSimple = new Simple(2);
    std::cout << "Class ID: " << pSimple->GetID() << std::endl;
    delete pSimple;
 
    return 0;
}