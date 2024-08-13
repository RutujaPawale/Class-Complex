# include<iostream>
using namespace std;
class Complex{                       //decaring Class Complex
double real;       
double img;
public: 
Complex();            // Default Constructor
friend istream & operator >> (istream &, Complex &);
friend ostream & operator << (ostream &, const Complex &);
Complex operator + (Complex); // Addition
Complex operator * (Complex); // Multiplication
};
Complex::Complex(){         // Default Constructor 
real = 0;
img = 0;
}
