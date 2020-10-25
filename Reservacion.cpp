#include<iostream>
#include <sstream>
#include <string.h>
#include <conio.h>


using namespace std;


class Reservacion {
	string nombre_del_cliente;
	 int edad_del_cliente;
	string pais_Destino;
	double precio_del_viaje;
	public :
		Reservacion(){
			nombre_del_cliente=" ";
			edad_del_cliente=0;
			pais_Destino=" ";
			precio_del_viaje=0.0;
		}
	Reservacion(string unNombre,int unaEdad,string unDestino,double unPrecio){
		nombre_del_cliente=unNombre;
		edad_del_cliente=unaEdad;
		pais_Destino=unDestino;
		precio_del_viaje=unPrecio;
	}
	void setNombre(string unNombre){
		nombre_del_cliente=unNombre;
	} 
	void setEdad(int  unaEdad){
		edad_del_cliente=unaEdad;
	}
	void setDestino(string unDestino){
		pais_Destino=unDestino;
	}
	void setPrecio(double unPrecio){
		precio_del_viaje=unPrecio;
	}
	string getNombre(){
		return nombre_del_cliente;
	}
	int getEdad(){
		return edad_del_cliente;
	}
	string getDestino(){
		return pais_Destino;
	}
	double getPrecio(){
		return precio_del_viaje;
	}
	string toString(){
		
		stringstream escribir;
		escribir<<"La reservacion esta a nombre de :"<<nombre_del_cliente<<endl;
		escribir<<"Edad del cliente : "<<edad_del_cliente<<endl;
		escribir<<"Reservacion para viajar a : "<<pais_Destino<<endl;
		escribir<<"Costo del Precio : "<<precio_del_viaje<<" $"<<endl;
		return escribir.str();
	}
};               	
int main(){
	char opc;
	cout<<"Desea hacer una reservacion: S(si) \t\tN(no)\n";
	cin>>opc;
	if(opc=='s'){
		string nombre;
		int edad;
		string destino;
		cout<<"A nombre de quien desea realizar la reservacion"<<endl;
		cin.ignore();//para borrar buffer
		getline(cin,nombre);
		
			cout<<"Cual su edad ?"<<endl;
		cin>>edad;
		cout<<"Cual su pais destino "<<endl;
		cin>>destino;
		 Reservacion reserv1(nombre,edad,destino,3000);
		 reserv1.setDestino("Colombia");
		 double precio_con_impuesto= (reserv1.getPrecio()*0.20)+reserv1.getPrecio();
		 reserv1.setPrecio(precio_con_impuesto);
		 cout<<"Se guardaron los siguentes datos\n\n"<<reserv1.toString();	
	} else if(opc=='n'){
		return 0;
	}
	
	
	
	getch();
	return 0;
}
