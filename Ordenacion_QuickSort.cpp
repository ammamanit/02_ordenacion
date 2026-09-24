#include <iostream>
using namespace std;
void ordenacionDer(int n, int arr[]);
void mostrarArr(int n, int arr[]);
void reduce(int final, int inicio, int arr[]);
int main(){
	int n;
	cout << "Ingrese el numero de elementos: ";
	cin >> n;
	int arr[n];
	for (int i=0; i < n; i++){
		cout << "Ingrese el numero en la posición " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout<<"\nArreglo Original: ";
	mostrarArr(n, arr);
	ordenacionDer(n, arr);
	cout<<"\nArreglo Ordenado: ";
	mostrarArr(n, arr);
}
void ordenacionDer(int n, int arr[]) {
    reduce(n - 1, 0, arr);
}
void reduce(int final, int inicio, int arr[]) {
    int izq = inicio;
    int der = final;
    int pos = izq;
    int cen = 1;
    while (cen == 1) {
        cen = 0;
        while (arr[pos] <= arr[der] && pos != der) {
            der = der - 1;
        }
        if (pos != der) {
            int aux = arr[pos];
            arr[pos] = arr[der];
            arr[der] = aux;
            pos = der;
            while (arr[pos] >= arr[izq] && pos != izq) {
                izq = izq + 1;
            }

            if (pos != izq) {
                aux = arr[pos];
                arr[pos] = arr[izq];
                arr[izq] = aux;
                pos = izq;
                cen = 1;
            }
        }
        if (pos - 1 > inicio) {
            reduce(pos - 1, inicio, arr);
        }
        if (pos + 1 < final) {
            reduce(final, pos + 1, arr);
        }
    }
}
void mostrarArr(int n, int arr[]){
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}

