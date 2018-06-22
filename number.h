#ifndef NUMBER_H
#define NUMBER_H

class Number
   {
    public:  
       virtual void print()=0;
       virtual Number add(const Number& other)=0;
       virtual Number mul(const Number& other)=0;
    protected:
       int num;
   };  

class RealNumber:public Number
   {
    public:
       RealNumber(float=0);
       virtual void print();
       virtual RealNumber add(const RealNumber& otherrea);
       virtual RealNumber mul(const RealNumber& otherrea); 
    protected:
       float reanum; 
   };

class IntegerNumber:public RealNumber 
   {
    public:
       IntegerNumber(int=0);
       virtual void print();
       virtual IntegerNumber add(const RealNumber & otherint);
       virtual IntegerNumber mul(const RealNumber & otherint);
    protected:
       int intnum;
   };

class ComplexNumber:public Number
   {
   public:
       ComplexNumber(int =0,int =0);
       virtual void print();
       virtual ComplexNumber add(const ComplexNumber & othercom);
       virtual ComplexNumber mul(const ComplexNumber & othercom);
   protected:
       int real;
       int comp;
   }; 

#endif
