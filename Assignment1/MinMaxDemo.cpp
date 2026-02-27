#include<iostream>
using namespace std;

void findMinMax(int a, int b, int c, int &minVal, int &maxVal){
    minVal = a;
    maxVal = a;

    if(b < minVal)
        minVal = b;
    if(b > maxVal)
        maxVal = b;

    if(c < minVal)
        minVal = c;
    if(c > maxVal)
        maxVal = c;
}

int main(){

    int a, b, c;
    cout << "Enter the integers: ";
    cin >> a >> b >> c;

    int lo, hi;

    findMinMax(a, b, c, lo, hi);

    cout << "Minimum value: " << lo << endl;
    cout << "Maximum value: " << hi << endl;

    return 0;
}