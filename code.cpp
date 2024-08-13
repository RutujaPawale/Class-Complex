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
istream & operator >> (istream &, Complex & i){
cin >> i.real >> i.img;
return cin;
}
ostream & operator << (ostream &, const Complex & d){
cout << d.real << " + " << d.img << "i" << endl;
return cout;
}
Complex Complex::operator + (Complex c1){   // Overloading + operator
Complex temp;
temp.real = real + c1.real;
temp.img = img + c1.img;
return temp;
}
Complex Complex::operator * (Complex c2){   // Overloading * Operator
Complex tmp;
tmp.real = real * c2.real - img * c2.img;
tmp.img = real * c2.img + img * c2.real;
return tmp;
}
int main(){
Complex C1, C2, C3, C4;
int flag = 1;
char b;
while (flag == 1){
