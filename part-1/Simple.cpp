#include <iostream>
#include "Simple.h"

Simple::Simple(int nID) {
    std::cout << "Constructing Simple: " << nID<< std::endl;
    m_nID = nID;
}
     
Simple::~Simple() {
    std::cout << "Destructing Simple: " << m_nID << std::endl;
}
     
int Simple::GetID() {
    return m_nID;
}