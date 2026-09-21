#include <iostream>
using namespace std;

void ordenacionBi(int n, int arr[]);
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
	ordenacionBi(n, arr);
	cout << "\nArreglo Ordenado: ";
	mostrarArr(n, arr);
}

void ordenacionBi(int n, int arr[]){
	int izq = 1;
	int der = n - 1;
	int k = n - 1;

	while (izq <= der) {
		for (int i = der; i >= izq; i--) {
			if (arr[i - 1] > arr[i]) {
				int aux = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = aux;
				k = i;
			}
		}
		izq = k + 1;
		for (int i = izq; i <= der; i++) {
			if (arr[i - 1] > arr[i]) {
				int aux = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = aux;
				k = i;
			}
		}
		der = k - 1;
	}
}

void mostrarArr(int n, int arr[]){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}

