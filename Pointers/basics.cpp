#include <iostream>
using namespace std;

int main()

{
    int a = 10, b = 20;

    /*
    way to declare pointer
    int* p =&a;
    int *q=&b;
    */

    int *p = &a, *q = &b;
    int* r, s; // r is a pointer and s is a int variable


    cout << p << endl;  // it print the address of a;
    cout << *p << endl; // it print the value whose address store at p. so first it move to address and then check the value of store at that address.
    cout << q << endl;
    cout << *q << endl;


    return 0;
}