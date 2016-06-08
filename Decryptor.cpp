//************************************************************************************************************** 
// FILE:        Decryptor.cpp
//
// DESCRIPTION: Implementation of the Decryptor class.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
//
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************
#include <fstream>
#include "Decryptor.hpp"

using namespace std;

Decryptor::Decryptor()
{
}


void Decryptor::decryptFile(string pCipherFile, string pPlainFile)
{
    pCipherFile = "cipher.txt";
    ifstream fin(pCipherFile.c_str());

    ofstream fout(pPlainFile.c_str());

    string cipherstring = readCipherString(fin);

    while(cipherstring != "#####") {
        fout << decryptCipherString(cipherstring);
        string cipherstring = readCipherString(fin);
    }

    fin.close();
    fout.close();
}


char Decryptor::decryptCipherString(string pCipherString)
{
    char plainchar = ' ';

    if  (pCipherString == " ** *") {
        plainchar = 'A';

    } else if (pCipherString == " *  *") {
        plainchar = 'B';
        
    } else if (pCipherString == "  ***") {
        plainchar = 'C';

    } else if (pCipherString == "* * *") {
        plainchar = 'D';
    
    } else if (pCipherString == "   * ") {
        plainchar = 'E';
    
    } else if (pCipherString == " *** ") {
        plainchar = 'F';
    
    } else if (pCipherString == " *   ") {
        plainchar = 'G';
        
    } else if (pCipherString == " **  ") {
        plainchar = 'H';
        
    } else if (pCipherString == "**** ") {
        plainchar = 'I';
        
    } else if (pCipherString == "*   *") {
        plainchar = 'J';
        
    } else if (pCipherString == " * **") {
        plainchar = 'K';
        
    } else if (pCipherString == "*** *") {
        plainchar = 'L';
        
    } else if (pCipherString == "    *") {
        plainchar = 'M';
        
    } else if (pCipherString == "* ** ") {
        plainchar = 'N';
        
    } else if (pCipherString == "** * ") {
        plainchar = 'O';
        
    } else if (pCipherString == " ****") {
        plainchar = 'P';
        
    } else if (pCipherString == "  ** ") {
        plainchar = 'Q';
        
    } else if (pCipherString == "*  **") {
        plainchar = 'R';
        
    } else if (pCipherString == "* ***") {
        plainchar = 'S';
        
    } else if (pCipherString == "***  ") {
        plainchar = 'T';
        
    } else if (pCipherString == "*  * ") {
        plainchar = 'U';
        
    } else if (pCipherString == "  *  ") {
        plainchar = 'V';
        
    } else if (pCipherString == "** **") {
        plainchar = 'W';
        
    } else if (pCipherString == "  * *") {
        plainchar = 'X';
        
    } else if (pCipherString == "*    ") {
        plainchar = 'Y';
        
    } else if (pCipherString == "**   ") {
        plainchar = 'Z';
    }
    
    return plainchar;
}

string Decryptor::readCipherString(ifstream& pFin)
{
    string cipherstring = "";
    for (int cntr = 1; cntr <= 5; ++cntr) {
        char ch = pFin.get();
        cipherstring += ch;
    }
    return cipherstring;
}
