//************************************************************************************************************** 
// FILE:        Encryptor.cpp
//
// DESCRIPTION: Implementation of the Encryptor class declared in Encryptor.hpp.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
//
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************
#include <fstream>
#include "Encryptor.hpp"

Encryptor::Encryptor()
{
}

void Encryptor::encryptFile(string pPlainFile, string pCipherFile)
{
    ifstream fin(pPlainFile.c_str());
    ofstream fout(pCipherFile.c_str());

    char plainchar;
    while (fin >> plainchar) {
        fout << encryptPlainChar(plainchar);
    }

    fout << "#####" << endl;

    fin.close();
    fout.close();
}


string Encryptor::encryptPlainChar(char pPlainChar)
{
    string cipherchar = "";

    if (pPlainChar == 'A') {
        cipherchar = " ** *";
    } else if (pPlainChar == 'B') {
        cipherchar = " *  *";
        
    } else if (pPlainChar == 'C') {
        cipherchar = "  ***";
        
    } else if (pPlainChar == 'D') {
        cipherchar = "* * *";
        
    } else if (pPlainChar == 'E') {
        cipherchar = "   * ";
        
    } else if (pPlainChar == 'F') {
        cipherchar = " *** ";
        
    } else if (pPlainChar == 'G') {
        cipherchar = " *   ";
        
    } else if (pPlainChar == 'H') {
        cipherchar = " **  ";
        
    } else if (pPlainChar == 'I') {
        cipherchar = "**** ";
        
    } else if (pPlainChar == 'J') {
        cipherchar = "*   *";
        
    } else if (pPlainChar == 'K') {
        cipherchar = " * **";
        
    } else if (pPlainChar == 'L') {
        cipherchar = "*** *";
        
    } else if (pPlainChar == 'M') {
        cipherchar = "    *";
        
    } else if (pPlainChar == 'N') {
        cipherchar = "* ** ";
        
    } else if (pPlainChar == 'O') {
        cipherchar = "** * ";
        
    } else if (pPlainChar == 'P') {
        cipherchar = " ****";
        
    } else if (pPlainChar == 'Q') {
        cipherchar = "  ** ";
        
    } else if (pPlainChar == 'R') {
        cipherchar = "*  **";
        
    } else if (pPlainChar == 'S') {
        cipherchar = "* ***";
        
    } else if (pPlainChar == 'T') {
        cipherchar = "***  ";
        
    } else if (pPlainChar == 'U') {
       cipherchar = "*  * ";
        
    } else if (pPlainChar == 'V') {
        cipherchar = "  *  ";
        
    } else if (pPlainChar == 'W') {
        cipherchar = "** **";
        
    } else if (pPlainChar == 'X') {
        cipherchar = "  * *";
        
    } else if (pPlainChar == 'Y') {
        cipherchar = "*    ";
        
    } else if (pPlainChar == 'Z') {
        cipherchar = "**   ";
    }
    
    return cipherchar;
}
