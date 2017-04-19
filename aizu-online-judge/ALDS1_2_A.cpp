#include <iostream>
#include <cstdio>
using namespace std;


void output(int N, int A[]) {
    for ( int k = 0; k < N; k++){
        if ( k < N - 1 ) {
            printf("%d ", A[k]);
        } else {
            printf("%d", A[k]);
        }
    }
    printf("\n");
}


void bubble_sort(int N, int A[]){
    int i = 0;
    int count = 0;
    int v;

    while ( i < N ) {
        for ( int j = N - 1; j > i; j-- ) {
            if ( A[j] < A[j - 1] ) {
                v = A[j - 1];
                A[j - 1] = A[j];
                A[j] = v;
                count++;
            }
        }
        i++;
    }

	output(N, A);
    cout << count << endl;

    return;
}


int main() {
    int N;
    cin >> N;

    int A[N];

    for ( int i = 0; i < N; i++ ) cin >> A[i];

    bubble_sort(N, A);
}

