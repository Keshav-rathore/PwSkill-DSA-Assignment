#include<iostream>
using namespace std;

void swapByValue(int a , int b){ // it create new container and assign value
    int temp = a;
    a=b;
    b=temp;
    cout<<"its function value not real  -> "<<a<<" "<<b<<endl;
}

void swapByAddress(int *a, int *b){ //it recieve 0xadefa and 0xafgerg
    int temp = *a; //create a temp container to store value whose address a store in this case a temp = 10
    *a=*b; // update the value of a to value b  a= 20 , b= 20
    *b = temp; // b= 10
}
int main(){
    int a =10, b=20;
    swapByValue(a,b);
    cout<<a<<" "<<b<<endl;
    swapByAddress(&a,&b);
    cout<<a<<" "<<b<<endl;

return 0;
}