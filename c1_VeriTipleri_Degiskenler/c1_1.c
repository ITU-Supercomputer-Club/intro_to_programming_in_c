/*
 * The Numerical Equivalents of Turkish Characters
 * Author: Mustafa Can Caliskan
 * ITU Supercomputer Club, 2024 
*/

#include <stdio.h>
#include <wchar.h> // wchar_t data type and wprintf function
#include <locale.h> // setlocale function

int main() {
    setlocale(LC_ALL, ""); // Setting the locale to support Turkish characters

    wchar_t ch1 = L'ü'; // Declaration of wide characters representing Turkish characters
    wchar_t ch2 = L'ğ';
    wchar_t ch3 = L'ş';
    wchar_t ch4 = L'ç';

    wprintf(L"Turkish characters and their numerical equivalents: %lc: %d, %lc: %d, %lc: %d, %lc: %d\n", ch1, ch1, ch2, ch2, ch3, ch3, ch4, ch4);

    return 0;
}
