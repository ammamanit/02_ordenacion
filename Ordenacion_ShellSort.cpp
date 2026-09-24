#include <iostream>
using namespace std;
void ordenacionShellSort(int n, int arr[]);
void mostrarArr(int n, int arr[]);
int main(){
	int n;
	cout << "Ingrese el numero de elementos: ";
	cin >> n;
	int arr[n];
	for (int i=0; i < n; i++){
		cout << "Ingrese el numero en la posicion " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout<<"\nArreglo Original: ";
	mostrarArr(n, arr);
	ordenacionShellSort(n, arr);
	cout<<"\nArreglo Ordenado: ";
	mostrarArr(n, arr);
}
void ordenacionShellSort(int n, int arr[]){
	int k = n + 1;
	while (k > 0){
		k = k/2;
		for (int i = k; i < n; i++){
			int aux = arr[i];
			int j = i;
			while (j - k >= 0 && arr[j - k] > aux){
				arr[j] = arr[j - k];
				j = j - k;
			}
			arr[j] = aux;
		}
	}
}
void mostrarArr(int n, int arr[]){
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}

