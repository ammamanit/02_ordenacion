#include <iostream>
using namespace std;
int ordenacionDer(int n, int arr[]);
int main(){
	int n;
	cout << "Ingrese el numero de elementos: ";
	cin >> n;
	int arr[n];
	for (int i=0; i < n; i++){
		cout << "Ingrese el numero en la posición " << i + 1 << " :";
		cin >> arr[i];
	}
}
