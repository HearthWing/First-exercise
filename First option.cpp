#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	int tienda [10]={15,20,4,5,10,4,10,0.5,3.5,0.5};
	cout<<"\t\t\t PEQUEÑA TIENDA DE 10 PRODUCTOS\n \t\t\tINGRESAR CON LETRA S MAYUSCULAS Y N\n\n\n ";
int t_cliente,producto,i,ar,suma,n;
int t_ventas=0;
float precio_prod;
char cliente,t_producto;
int num_clientes=0;

cout<<"Deseas ingresar un cliente?:   "<<endl;
cin>>cliente;
while (cliente=='S',cliente=='s')
{
	t_cliente=0;
	cout<<"Deseas ingresar un producto"<<endl;
	cin>>t_producto;	
	while (t_producto=='S',t_producto=='s')
	{
		cout<<"1.- Maple de Huevo:15Bs"<<endl;
		cout<<"2.- Pan Molde:20Bs"<<endl;
		cout<<"3.- Galletas:4Bs"<<endl;
		cout<<"4.- Leche:5Bs"<<endl;
		cout<<"5.- Aceite:10Bs"<<endl;
		cout<<"6.- Agua: 4Bs"<<endl;
		cout<<"7.- Soda:10Bs"<<endl;
		cout<<"8.- Sal:1Bs"<<endl;
		cout<<"9.- Azucar de kilo:3.5Bs"<<endl;
		cout<<"10.-Dulces:0.5Bs"<<endl;
		cout<<"Elige el producto"<<endl;
		cin>>producto;			
		{
			ar=tienda[producto-1];			 
		}	
	t_cliente=t_cliente+ar;
	cout<<"Deseas ingresar otro producto?:  "<<endl;
	cin>>t_producto;			  
	}
	cout<<"Total Compra: "<<t_cliente<<"Bs."<<endl;
	t_ventas=t_cliente+t_ventas;	
	
	cout<<"desea ingresar otro cliente?: "<<endl;
	cin>>cliente;	
	num_clientes = num_clientes +1;
	
}

		cout<<"Venta del dia:   "<<t_ventas<<"Bs."<<endl;
		cout<<"Total Clientes atendidos:   "<<num_clientes<<endl;
		getch();
}
