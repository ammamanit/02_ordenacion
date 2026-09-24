#include <iostream>
using namespace std;

void ordenancionSelec(int n, int arr[]);
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
	ordenancionSelec(n, arr);
	cout << "\nArreglo Ordenado: ";
	mostrarArr(n, arr);
}

void ordenancionSelec(int n, int arr[]){
	for (int i = 0; i < n - 1; i++){
		int menor = arr[i];
		int k = i;
		for (int j = i + 1; j < n; j++){
			if (arr[j] < menor){
				menor = arr[j];
				k = j;
			}
			arr[k] = arr[i];
			arr[i] = menor;
		}
	}
}
void mostrarArr(int n, int arr[]){
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}
