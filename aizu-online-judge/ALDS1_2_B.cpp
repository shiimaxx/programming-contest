#include <iostream>
using namespace std;


int selection_sort(int N, int A[]){
	int count = 0;
    int v = 0;
    bool flag = false;

	for ( int i = 0; i < N - 1; i++ ) {
        flag = false;
        int minj = i;
		for ( int j = i; j < N; j++ ) {
			if ( A[j] < A[minj] ) {
                minj = j;
                flag = true;
			}
		}
        if ( flag ){
            v = A[i];
            A[i] = A[minj];
            A[minj] = v;
            count++;
        }
	}
    return count;
}

int main() {
    int N;
    cin >> N;

    int A[N];

    for ( int i = 0; i < N; i++ ) cin >> A[i];

	int count = selection_sort(N, A);

    for ( int i = 0; i < N; i++ ) {
        if (i) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << count << endl;
    return 0;
}
