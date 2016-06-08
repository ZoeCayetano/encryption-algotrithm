//************************************************************************************************************** 
// FILE:        Decryptor.hpp
//
// DESCRIPTION: A decryption class. Decrypts the contents of a text file using the stars-and-spaces encryption
//              algorithm.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
//
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************
#ifndef DECRYPTOR_HPP
#define DECRYPTOR_HPP

#include <string>

using namespace std;

class Decryptor {
public:
    Decryptor();
    void decryptFile(string pCipherFile, string pPlainFile);
private:
    char decryptCipherString(string pCipherString);
    string readCipherString(ifstream& pFin);
};

#endif