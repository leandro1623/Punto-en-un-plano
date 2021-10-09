#include <iostream>
#include<iomanip>
#include"punto.h"
using std::setw;

void menu(punto);


int main() {
	std::cout<<setw(50)<<"PUNTO EN EL MAPA";
	punto nuevo_mapa(0,0);
	menu(nuevo_mapa);
	
	return 0;
}

void menu(punto mapa){
	char opc;
	int x,y;
	
	do{
		system("cls");
		std::cout<<setw(60)<<"___PUNTO EN EL MAPA"<<"("<<mapa.getX()<<","<<mapa.getY()<<")"<<"___\n\n";		
		mapa.ver_mapa();//muestra el mapa
		std::cout<<setw(70)<<"__________________________\n\n";
		std::cout<<setw(64)<<".:MENU:.\n\n";
		std::cout<<setw(70)<<"1. Establecer coordenadas\n";
		std::cout<<setw(70)<<"2. Salir                 \n";
		std::cout<<setw(70)<<"   Opcion >: ";std::cin>>opc;
		
		
		switch(opc){
			case '1': std::cout<<setw(70)<<"____________________________\n\n";
					  std::cout<<setw(70)<<"Digite X: ";std::cin>>x;
					  std::cout<<setw(70)<<"Digite Y: ";std::cin>>y;
					  mapa.setX(x-1);//establece coordenada x
					  mapa.setY(y-1);//establece coordenada y
					  mapa.llenar_mapa();//limpia el mapa
					  mapa.actualizar_mapa();//ubica el punto en la nueva ubicacion
					  break;
			case '2': break;
			default: std::cout<<"Opcion incorrecta\n\n";break;
		}
	}while(opc!='2');
	
	
}
