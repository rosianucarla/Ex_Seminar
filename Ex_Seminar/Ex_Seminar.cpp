// Ex_Seminar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "Konto.h"

using namespace std;


char* strfind(char* s, char* f)
{
    char* c;
    c = strstr(f, s);
    if (c != NULL)
    {
        return c;
    }
    else
        return NULL;

}


int main() {

    char a[4] = "abc";
    char b[10] = "abcdefghi";
    cout <<strfind(a, b) << "\n";
    cout << "\n";
    Konto k;
    k.Einzahlung(100);
    k.Bezahlen(20);
    k.Einzahlung(10);
    cout << "Kontostand: " << k.Kontostand();

    return 0;
}
