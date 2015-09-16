#include <iostream>

class IDGenerator {
    private:
        static int s_nNextID;
     
    public:
         static int GetNextID() { return s_nNextID++; }
};
 
int IDGenerator::s_nNextID = 1;
 
int main(int argc, char *argv[]) {
    for (int i=0; i < 5; i++) {
        std::cout << "The next ID is: " << IDGenerator::GetNextID() << std::endl;
    }
    return 0;
}