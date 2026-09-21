#include <iostream>
using namespace std;

void ordenacionSen(int n, int arr[]);
void mostrarArr(int n, int arr[]);

int main(){
	int n;
	cout << "Ingrese el numero de elementos: ";
	cin >> n;
	int arr[n];
	for (int i=0; i < n; i++){
		cout << "Ingrese el numero en la posición " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "\nArreglo Original: ";
	mostrarArr(n, arr);
	ordenacionSen(n, arr);
	cout << "\nArreglo Ordenado: ";
	mostrarArr(n, arr);
}
void ordenacionSen(int n, int arr[]){
	int i = 0;
	int cent = 1;
	while ( cent == 1){
		cent = 0;
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j]> arr[j+1]){
				int aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
				
				cent = 1;
			}
		}
		i++;
	}
}
void mostrarArr(int n, int arr[]){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

