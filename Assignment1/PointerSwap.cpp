#include<iostream>
using namespace std;

int main(){
    int x=10, y=20, z=30;
    int * px = &x;
    int * py = &y;
    int * pz = &z;

    cout << "Value of x is : " << x << " " << "Address of x is : " << &x << endl;
    cout << "Value of y is : " << y << " " << "Address of y is : " << &y << endl;
    cout << "Value of z is : " << z << " " << "Address of z is : " << &z << endl;

   int temp = *px;   
*px = *pz;        
*pz = temp; 

    cout << "Value of x is : " << x << " " << "Address of x is : " << &x << endl;
    cout << "Value of y is : " << y << " " << "Address of y is : " << &y << endl;
    cout << "Value of z is : " << z << " " << "Address of z is : " << &z << endl;
    


    return 0;
}