#include <iostream>
using namespace std;

// declare a class
class Wall {
   private:
    double length;
    double height;

   public:
   //constructor overloadin2
   Wall() {
       length = 7;
       height = 3;
   }

    // parameterized constructor
    Wall(double len, double hgt) {
        length = 4;
        height = 5;
    }

    // copy constructor with a Wall object as parameter
    Wall(Wall &obj) {
        length = obj.length;
        height = obj.height;
    }
    double calculateArea() {
        return length * height;
    }
};

int main() {

    // create an object of Wall class
    Wall wall1;

    // print area of wall1
    cout << "Area of Wall 1 is: " << wall1.calculateArea() << endl;

    // copy contents of wall1 to another object wall2
    Wall wall2 = wall1;

    // print area of wall2
    cout << "Area of Wall 2 is: " << wall2.calculateArea() << endl;

    return 0;
}
