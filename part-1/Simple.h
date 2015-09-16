#ifndef SIMPLE_H
#define SIMPLE_H

class Simple {
    private:
        int m_nID;
     
    public:
        Simple(int nID);
     
        ~Simple();
     
        int GetID();
};

#endif