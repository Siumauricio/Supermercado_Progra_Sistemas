#include <string.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	bool Cerrar = true;
	bool Insumos = true;
	bool Ventas = true;

	string codigoPr;
	int posicion = 0;
	int cantidad = 0;
	int desicion = 0;
	int opcion = 0;
	int PosMes = 0;

	string Verduras[] = { "Patata","Zanahoria","Cebolla","Tomates" };
	string Frutas[] = { "Uvas", "Sandia","Bananos","Melon" };
	string Lacteos[] = { "Leche","Mantequilla","Queso","Leche Entera" };
	string Carnes[] = { "Carne de Vaca","Carne de Cerdo","Carne Roja","Carne de Res" };
	string Mariscos[] = { "Almejas","Cangrejos","Pulpos","Pescados" };

	int UnidadesV[] = { 1000,1000,1000,1000 };
	int UnidadesF[] = { 1000,1000,1000,1000 };
	int UnidadesL[] = { 1000,1000,1000,1000 };
	int UnidadesC[] = { 1000,1000,1000,1000 };
	int UnidadesM[] = { 1000,1000,1000,1000 };

	int PrecioV[] = { 25,30,35,70 };
	int PrecioF[] = { 5,15,10,25 };
	int PrecioL[] = { 10,8,20,35 };
	int PrecioC[] = { 55,42,85,70 };
	int PrecioM[] = { 85,125,335,100 };

	string Mes[] = { "Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre" };
	int TotalMeses[] = { 0,0,0,0,0,0,0,0,0,0,0,0 };

	do {
		Insumos = true;
		Ventas = true;
		cout << "\n*******Supermercado WorldCup*******" << endl;
		cout << "1. Mostrar Insumos" << endl;
		cout << "2. Realizar Venta" << endl;
		cout << "3. Mostrar Ventas Del Mes" << endl;
		cout << "4. Cerrar Ventas" << endl;
		cout << "5. Salir Del Sistema" << endl;
		cout << "Ingrese Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			do {
				cout << "\n*******Insumos Disponibles*******" << endl;
				cout << "1. Verduras" << endl;
				cout << "2. Frutas" << endl;
				cout << "3. Lacteos" << endl;
				cout << "4. Carnes" << endl;
				cout << "5. Mariscos" << endl;
				cout << "6. Regresar Al Menu Principal" << endl;
				cout << "Ingrese Opcion: ";
				cin >> opcion;
				if (opcion == 1) {
					cout << "**************Verduras**************" << endl;
					cout << "\nProducto" << setw (10) << "Codigo " << setw (15) << "Unidades Disponibles " << setw (10) << "Precio" << endl;
					for (int i = 0; i < 4; i++) {
						cout << "\n" << Verduras[i] << setw (10) << " V" << i << setw (15) << UnidadesV[i] << setw (10) << PrecioV[i] << endl;
					}
				} else if (opcion == 2) {
					cout << "**************Frutas**************" << endl;
					cout << "\nProducto" << setw (10) << "Codigo " << setw (15) << "Unidades Disponibles " << setw (10) << "Precio" << endl;
					for (int i = 0; i < 4; i++) {
						cout << "\n" << Frutas[i] << setw (10) << " F" << i << setw (15) << UnidadesF[i] << setw (10) << PrecioF[i] << endl;
					}
				} else if (opcion == 3) {
					cout << "**************Lacteos**************" << endl;
					cout << "\nProducto" << setw (10) << "Codigo " << setw (15) << "Unidades Disponibles " << setw (10) << "Precio" << endl;
					for (int i = 0; i < 4; i++) {
						cout << "\n" << Lacteos[i] << setw (10) << " C" << i << setw (15) << UnidadesL[i] << setw (10) << PrecioL[i] << endl;
					}
				} else if (opcion == 4) {
					cout << "**************Carnes**************" << endl;
					cout << "\nProducto" << setw (10) << "Codigo " << setw (15) << "Unidades Disponibles " << setw (10) << "Precio" << endl;
					for (int i = 0; i < 4; i++) {
						cout << "\n" << Carnes[i] << setw (10) << " C" << i << setw (15) << UnidadesC[i] << setw (10) << PrecioC[i] << endl;
					}
				} else if (opcion == 5) {
					cout << "**************Mariscos**************" << endl;
					cout << "\nProducto" << setw (10) << "Codigo " << setw (15) << "Unidades Disponibles " << setw (10) << "Precio" << endl;
					for (int i = 0; i < 4; i++) {
						cout << "\n" << Mariscos[i] << setw (10) << " M" << i << setw (15) << UnidadesM[i] << setw (10) << PrecioM[i] << endl;
					}
				} else if (opcion == 6) {
					Insumos = false;
				}
			} while (Insumos);
			break;
		case 2:
			do {
				cout << "\n*******Realizar Venta*******" << endl;
				cout << "1. Proceder Con Venta" << endl;
				cout << "2. Regresar al Menu Principal" << endl;
				cout << "Ingrese Opcion: ";
				cin >> opcion;

				if (opcion == 1) {
					cout << "\nIngrese Codigo: ";
					cin >> codigoPr;
					posicion = atoi (&codigoPr[1]);

					if (codigoPr.find ("v") != string::npos || codigoPr.find ("V") != string::npos) {
						cout << "\nProducto Encontrado!" << endl;
						cout << "Nombre: " << Verduras[posicion] << " Cantidad Disponible: " << UnidadesV[posicion] << endl;
						cout << "\nIngrese Cantidad a Vender: ";
						cin >> cantidad;
						if (cantidad <= UnidadesV[posicion] && UnidadesV[posicion] > 0) {
							cout << "Desea Realizar La Compra (1.Si/2.No)" << endl;
							cout << "Ingrese Opcion: ";
							cin >> desicion;
							if (desicion == 1) {
								UnidadesV[posicion] = UnidadesV[posicion] - cantidad;
								TotalMeses[PosMes] += (cantidad * PrecioV[posicion]);

								cout << "\n Venta Realizada Satisfactoriamente!" << endl;
							}
						} else {
							cout << "\nLo Siento La cantidad Excede nuestro Inventario!" << endl;
						}

					} else if (codigoPr.find ("f") != string::npos || codigoPr.find ("F") != string::npos) {
						cout << "\nProducto Encontrado!" << endl;
						cout << "Nombre: " << Frutas[posicion] << " Cantidad Disponible: " << UnidadesF[posicion] << endl;
						cout << "\nIngrese Cantidad a Vender: ";
						cin >> cantidad;
						if (cantidad <= UnidadesF[posicion] && UnidadesF[posicion] > 0) {
							cout << "Desea Realizar La Compra (1.Si/2.No)" << endl;
							cout << "Ingrese Opcion: " << endl;
							cin >> desicion;
							if (desicion == 1) {
								UnidadesF[posicion] = UnidadesF[posicion] - cantidad;
								TotalMeses[PosMes] += (cantidad * PrecioF[posicion]);
								cout << "\n Venta Realizada Satisfactoriamente!" << endl;
							}
						} else {
							cout << "\nLo Siento La cantidad Excede nuestro Inventario!" << endl;
						}

					} else if (codigoPr.find ("l") != string::npos || codigoPr.find ("L") != string::npos) {
						cout << "\nProducto Encontrado!" << endl;
						cout << "Nombre: " << Lacteos[posicion] << " Cantidad Disponible: " << UnidadesL[posicion] << endl;
						cout << "\nIngrese Cantidad a Vender: ";
						cin >> cantidad;
						if (cantidad <= UnidadesL[posicion] && UnidadesL[posicion] > 0) {
							cout << "Desea Realizar La Compra (1.Si/2.No)" << endl;
							cout << "Ingrese Opcion: ";
							cin >> desicion;
							if (desicion == 1) {
								UnidadesL[posicion] = UnidadesL[posicion] - cantidad;
								TotalMeses[PosMes] += (cantidad * PrecioL[posicion]);
								cout << "\n Venta Realizada Satisfactoriamente!" << endl;
							}
						} else {
							cout << "\nLo Siento La cantidad Excede nuestro Inventario!" << endl;
						}

					} else if (codigoPr.find ("c") != string::npos || codigoPr.find ("C") != string::npos) {
						cout << "\nProducto Encontrado!" << endl;
						cout << "Nombre: " << Carnes[posicion] << " Cantidad Disponible: " << UnidadesC[posicion] << endl;
						cout << "\nIngrese Cantidad a Vender: ";
						cin >> cantidad;
						if (cantidad <= UnidadesC[posicion] && UnidadesC[posicion] > 0) {
							cout << "Desea Realizar La Compra (1.Si/2.No)" << endl;
							cout << "Ingrese Opcion: ";
							cin >> desicion;
							if (desicion == 1) {
								UnidadesC[posicion] = UnidadesC[posicion] - cantidad;
								TotalMeses[PosMes] += (cantidad * PrecioC[posicion]);
								cout << "\n Venta Realizada Satisfactoriamente!" << endl;
							}
						} else {
							cout << "\nLo Siento La cantidad Excede nuestro Inventario!" << endl;
						}
					} else if (codigoPr.find ("m") != string::npos || codigoPr.find ("M") != string::npos) {
						cout << "\nProducto Encontrado!" << endl;
						cout << "Nombre: " << Mariscos[posicion] << " Cantidad Disponible: " << UnidadesM[posicion] << endl;
						cout << "\nIngrese Cantidad a Vender: ";
						cin >> cantidad;
						if (cantidad <= UnidadesM[posicion] && UnidadesM[posicion] > 0) {
							cout << "Desea Realizar La Compra (1.Si/2.No)" << endl;
							cout << "Ingrese Opcion: ";
							cin >> desicion;
							if (desicion == 1) {
								UnidadesM[posicion] = UnidadesM[posicion] - cantidad;
								TotalMeses[PosMes] += (cantidad * PrecioM[posicion]);
								cout << "\n Venta Realizada Satisfactoriamente!" << endl;
							}
						} else {
							cout << "\nLo Siento La cantidad Excede nuestro Inventario!" << endl;
						}
					}
				} else {
					Ventas = false;
				}

			} while (Ventas);
			break;
		case 3:
			cout << "\n*******Mostrar Ventas Del Mes*******" << endl;
			for (int i = 0; i < 12; i++) {
				cout << "Mes " << Mes[i] << "Total Generado: " << TotalMeses[i] << endl;;
			}
			break;
		case 4:
			cout << "\n*******Mostrar Ventas Del Mes*******" << endl;
			cout << "\n Desea realizar el cierre de ventas (1.Si/2.No)" << endl;
			cout << "Ingrese Opcion: ";
			cin >> opcion;
			if (opcion == 1) {
				for (int i = 0; i < 4; i++) {
					UnidadesV[i] = 1000;
					UnidadesF[i] = 1000;
					UnidadesL[i] = 1000;
					UnidadesC[i] = 1000;
					UnidadesM[i] = 1000;
				}
				PosMes++;
			}
			break;
		case 5:
			Cerrar = false;
			break;
		default:
			cout << "Use Una Opcion Correcta!" << endl;
			break;
		}
	} while (Cerrar);
	return 0;
}