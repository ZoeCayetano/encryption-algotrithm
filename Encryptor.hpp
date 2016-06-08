//************************************************************************************************************** 
// FILE:        Encryptor.hpp
//
// DESCRIPTION: An encryption class. Encrypts the contents of a text file using the stars-and-spaces encryption
//              algorithm.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
//
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************
#ifndef ENCRYPTOR_HPP
#define ENCRYPTOR_HPP

#include <string>

using namespace std;

class Encryptor {
public:
    Encryptor();
    void encryptFile(string pPlainFile, string pCipherFile);
private:
    string encryptPlainChar(char pPlainChar);
};

#endif