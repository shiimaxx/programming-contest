#include <iostream>
#include <string>
using namespace std;

void bubbleSort(int N, string A1[]) {
    string v;

    for ( int i = 0; i < N - 1; i++ ) {
        for ( int j = N - 1; j > i; j-- ) {
            if ( A1[j][1] < A1[j - 1][1] ) {
                v = A1[j];
                A1[j] = A1[j - 1];
                A1[j - 1] = v;
            }
        }
    }
    for ( int i = 0; i < N; i++ ) {
        if (i) cout << " ";
        cout << A1[i];
    }
	cout << endl;
}

void selectionSort(int N, string A2[]) {
    string v;

	for ( int i = 0; i < N; i++ ) {
        int minj = i;
        for ( int j = i + 1; j < N; j++ ) {
            if ( A2[minj][1] > A2[j][1] ) {
                minj = j;
            }
        }
        v = A2[minj];
        A2[minj] = A2[i];
        A2[i] = v;
	}
    for ( int i = 0; i < N; i++ ) {
        if (i) cout << " ";
        cout << A2[i];
    }
	cout << endl;
}

int main() {
    int N;
    cin >> N;

    string A1[N];
    string A2[N];

    for ( int i = 0; i < N; i++ ) cin >> A1[i];
    for ( int i = 0; i < N; i++ ) A2[i] = A1[i];

    bubbleSort(N, A1);
    cout << "Stable" << endl;
    selectionSort(N, A2);
    bool flag = true;
    for ( int i = 0; i < N; i++ ) {
        if ( A1[i] != A2[i] ) {
            flag = false;
        }
    }
    if ( flag ) {
    	cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}
