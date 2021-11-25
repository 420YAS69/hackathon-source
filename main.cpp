/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(void)
{
    int importantData=1;
    int buffer[10];
    for (int i=0;i<=15;i++)
    {
        buffer[i]=7;
    }
    cout<< "after buffer overflow"<< endl;
    cout<< "importantData = "<< importantData << endl;
    return 0;
    
}

