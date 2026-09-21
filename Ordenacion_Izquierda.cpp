#include <iostream>
using namespace std;

void ordenacionIzq(int n, int arr[]);
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
	ordenacionIzq(n, arr);
	cout << "\nArreglo Ordenado: ";
	mostrarArr(n, arr);
}
void ordenacionIzq(int n, int arr[]){
	for (int i = 0; i < n-1; i++){
		for (int j = n-1; j > i; j--){
			if (arr[j] < arr[j-1]){
				int aux = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = aux;
			}
		}
	}
}
void mostrarArr(int n, int arr[]){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

