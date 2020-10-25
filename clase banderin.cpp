#include<iostream>
#include <math.h>
using namespaces std;



class Banderin{
public:
int a,b,c;

public:
	Banderin(int _a,int _b, int _c ){
	a=_a;
	b=_b;
	c=_c;
	}
	Banderin(){
		a=0;
		b=0;
		c=0;
	}
	void setA(int _a){
		a=_a;
	}

	void setB(int _b){
		b=_b;
	}
	void setC(int _c){
		c=_c;
	}

	int getA(){
		return a;
	}

	int getB(){
		return b;
	}
	int getC(){
		return c;
	}
	bool desigualdad_Triangular(){
		if ((a+b<c)||(b+c>a)||(c+a>b)){
			return true;

		}
		else{
			return false;
		}
	}
int Calcula_Tela(){
int s;
s=(a+b+c)/;


return sqrt(s*(s-a)*(s-b)*(s-c))
}



string tipo_de_triangulo(){
	if(a==b&&a==c)
 {
return "\n El triangulo es equilatero";
 }
else if(a==b||a==c||b==c)
{
return "\n El triangulo es isosceles";
}
else if(a!=b&&a!=b&&b!=c)
{
return "\n El triangulo es escaleno";
}

	}



	~Banderin();
	
};

int main(int argc, char const *argv[])
{
  Banderin band1(4,5,3);
	
	return 0;
}