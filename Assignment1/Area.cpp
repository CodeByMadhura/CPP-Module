#include <iostream>   // for cout
using namespace std;

const float PI = 3.14159f;

float circleArea(float a){
    float area;
    area = PI * a * a;
    return area;
}

float circlePerimeter(float b){
    float perimeter;
    perimeter = 2 * PI * b;
    return perimeter;
}

int main(){

//     PI = 3.0f;
// Area.cpp: In function 'int main()':
// Area.cpp:20:10: error: assignment of read-only variable 'PI'
//      PI = 3.0f;
          

    cout << "Area of a circle is " << circleArea(7.0) << endl;
    cout << "Perimeter of a circle is " << circlePerimeter(7.0) << endl;

    return 0;
}