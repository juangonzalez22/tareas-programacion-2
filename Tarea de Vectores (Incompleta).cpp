#include <iostream>
#include <vector>

using namespace std;

/*--------------------------------------------------------------------------*/
int ejercicio1() {
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
}
/*--------------------------------------------------------------------------*/
int ejercicio2() {
	vector<int> v;
	for (int i = 0; i <=4; i++) {
		v.push_back(i+1);
	}

	for (int i = 0; i < 5; ++i) {
		cout << v[i] << " ";
	}
}
/*--------------------------------------------------------------------------*/
int ejercicio3() {
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int total=0;

	for (int i = 0; i<10; i++) {
		total = total + v[i];
	}
	cout<<total;

}
/*--------------------------------------------------------------------------*/
int ejercicio4() {
	vector<int> v = {1, 2, 3, 4,5};
	for (int i = 0; i<v.size(); i++) {
		v[i] = i * 2;
	}
	for (int i = 0; i <5; ++i) {
		cout << v[i] << " ";
	}
}

/*--------------------------------------------------------------------------*/
int ejercicio5() {

	vector<int> v = {1, 2, 3, 4,5};
	for (int i = 0; i<v.size(); i++) {
		v.at(i) = i * 2;
	}
	for (int i = 0; i < 5; ++i) {
		cout << v[i] << " ";
	}
}
/*--------------------------------------------------------------------------*/
int ejercicio6() {

}


int main() {
	ejercicio5();
	return 0;
}
