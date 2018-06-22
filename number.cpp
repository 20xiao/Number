#include<iostream>
#include "number.h"

using namespace std;

      RealNumber::RealNumber(float n1):reanum(n1)
{}

      IntegerNumber::IntegerNumber(int n2):intnum(n2)
{}

      ComplexNumber::ComplexNumber(int n3,int n4):real(n3),comp(n4)
{}

     RealNumber RealNumber::add(const Number&other){
             return RealNumber(reanum+otherrea.reanum);
}

     RealNumber RealNumberer::mul(const Number&other){
             return RealNumber(reanum*otherrea.reanum);
}

     IntegerNumber IntegerNumber::add(const IntegerNumber&other){
             return IntegerNumber(intnum+otherint.intnum);
}

     IntegerNumber IntegerNumber::mul(const IntegerNumber&other){
             return IntegerNumber(intnum*otherint.intnum);
}

     ComplexNumber ComplexNumber::add(const ComplexNumber&other){
             return IntegerNumber(real+othercom.real,comp+othercom.comp);
}

     ComplexNumber ComplexNumber::mul(const ComplexNumber&other){
             return ComplexNumber(real*othercom.real-comp*othercom.comp,real*othercom.comp+comp*othercom.real);
}

     void RealNumber::print(){
             cout<<reanum<<endl;
}

     void IntegerNumber::print(){
             cout<<intnum<<endl;
}

     void ComplexNumber::print(){
             cout<<real<<"+"<<comp<<"i"<<endl;
}

