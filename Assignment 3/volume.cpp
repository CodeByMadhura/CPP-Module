#include<iostream>
using namespace std;


class Box{
   private:
       int length;
       int width;
       int height;

    public:
    //Parameterized Constructor
    Box(int length, int width, int height){
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Function
    void setDimensions(int length, int width, int height){
         this->length = length;
        this->width = width;
        this->height = height; 
    }

      // Function to calculate volume
    int volume()
    {
        return length * width * height;
    }

};

int main(){


// Initialization using constructor
    Box b1(2, 3, 4);
    cout << "Volume after constructor initialization: " << b1.volume() << endl;

    // Assignment using setDimensions()
    b1.setDimensions(5, 6, 7);
    cout << "Volume after assignment using setDimensions: " << b1.volume() << endl;


    return 0;
}


// Initialization creates the object and gives it its first value.
// When an object is created, its data members need initial values to start with.

// Assignment only changes an already existing value.
// It assumes that the variable or object already exists and has been initialized.

// Initialization is preferred over assignment in the following cases:
//    1. When an object is created
    //   2. For const data members