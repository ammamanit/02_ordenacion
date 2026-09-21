#include <iostream>
using namespace std;

void ordenancionInser(int n, int arr[]);
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
	ordenancionInser(n, arr);
	cout << "\nArreglo Ordenado: ";
	mostrarArr(n, arr);
}

void ordenancionInser(int n, int arr[]){
	for (int i = 1; i < n; i++){
		int aux = arr[i];
		int k = i - 1;
		while (k >= 0 && aux < arr[k]){
			arr[k+1] = arr[k];
			k = k - 1;
		}
		arr[k+1] = aux;
	}
}
void mostrarArr(int n, int arr[]){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}
