#include"number.h"
#include<iostream>

using namespace std;

  int main(){


     IntegerNumber int1(4);
     IntegerNumber int2(7);
     IntegerNumber int1.add(int2).print();
     IntegerNumber int1.mul(int2).print();

     ComplexNumber comp1(3,4);
     ComplexNumber comp2(6,7);
     ComplexNumber comp1.add(comp2).print();
     ComplexNumber comp1.mul(comp2).print();

     RealNumber rea1(3.233);
     RealNumber rea2(4.342);
     RealNumber rea1.add(rea2).print();
     RealNumber rea1.mul(rea2).print();

     return 0;
}
