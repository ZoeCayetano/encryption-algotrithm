//************************************************************************************************************** 
// FILE:        Test.cpp
//
// DESCRIPTION: Implementation of the Test class.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
//
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************
#include "Decryptor.hpp"
#include "Encryptor.hpp"
#include "Test.hpp"

using namespace std;

Test::Test()
{
}

void Test::run()
{
    Encryptor encryptor;
    encryptor.encryptFile("plain.txt", "cipher.txt");
    Decryptor decryptor;
    decryptor.decryptFile("cipher.txt", "plain-new.txt");
}