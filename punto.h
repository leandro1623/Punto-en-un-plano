class punto{
	private:
		char mapa[50][50];//mapa vacio
		int x,y;
	//funciones	
	public:
		punto(int x,int y){//constructor
			this->x=x;
			this->y=y;
			llenar_mapa();//llena el mapa
			actualizar_mapa();//actualiza el mapa
			
		}
		void llenar_mapa();//llena el mapa
		void setX(int);//establece x
		void setY(int);//establece y
		void ver_mapa();//muestra el mapa
		void actualizar_mapa();//actualiza el punto en el mapa
		int getX();//retorna x
		int getY();//retorna y
};