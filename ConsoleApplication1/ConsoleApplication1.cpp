#include<cmath>
#include <iostream>
using namespace std;

int cfinder(int*, int);
int elements_counter(int*, int, int);
void queue(int*, int);



int main()
{
	int N;
	int c;
	int* my_arr;
	cout << "Write a number...\n" << endl;
	cin >> c;
	cout << "\nWrite a size of the array...\n" << endl;
	cin >> N;
	my_arr = new int[N];
	cout << "\nYour array...\n" << endl;
	for (size_t i = 0; i < N; i++)
	{
		my_arr[i] = rand() % 100 - 50;
		cout << my_arr[i] << " ";
	}

	

	cout << "\n\nresult = " << cfinder(my_arr, N) << endl;
	cout << "\nThe amount of numbers bigger than " << c << " = " << elements_counter(my_arr, c, N) << endl;
	cout << "\nThe queue was put in order..." << endl;
	queue(my_arr, N);


}
int cfinder(int *arr, int m) {
	int min = arr[0];
	int result = 1;

	for (size_t i = 0; i < m; i++)
	{
		
		if ( min > arr[i]) {
			 min = arr[i];
			 for( int n = i + 1 ; n < m; n++)
			 {
				 result = result * arr[n];
			 } 
		}
	}
	return  result;
}
int elements_counter(int* arr, int k, int f) {
	
	int counter = 0;
	
	for (size_t j = 0; j < f; j++)
	{
		if (arr[j] > k) {
			counter++;
		}
	
	}

	return  counter;
}
void queue(int* arr_q, int b) {

	int new_num = 0;
	int* new_arr;
	
	new_arr = new int[b];

	for (size_t a = 0; a < b; a++)
	{
		new_arr[a] = b;
		new_num = new_num * 10 + arr_q[a];
		arr_q[a] = arr_q[a] / 10;
		cout << " " << new_num;
	}
		
}