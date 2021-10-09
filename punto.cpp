#include<iostream>
#include"punto.h"
#include<iomanip>
using std::setw;//manipula la salida


void punto::llenar_mapa(){//llena el mapa
	for(int i=0;i<50;i++){
		for(int j=0;j<50;j++){
			this->mapa[i][j]='0';
		}
	}
}

void punto::setX(int x){//establece x
	this->x=x;
}

void punto::setY(int y){//establece y
	this->y=y;
}

void punto::ver_mapa(){//muestra el mapa
	for(int i=0;i<10;i++){
		std::cout<<setw(50);
		for(int j=0;j<10;j++){
			std::cout<<this->mapa[i][j];
		}
		std::cout<<"\n";
	}
}

void punto::actualizar_mapa(){//actuliza el punto en el mapa
	mapa[x][y]='.';
}

int punto::getX(){//retorna x
	return this->x;
}

int punto::getY(){//retorna y
	return this->y;
}