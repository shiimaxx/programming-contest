#include <iostream>
#include <cstdio>
using namespace std;


void output(int N, int A[]) {
    for ( int k = 0; k < N; k++){
            printf("%d ", A[k]);
        }
    printf("\n");
}


int main() {
    int N, i, j, v;
    cin >> N;
    int A[N];

    for ( i = 0; i < N; i++ ) cin >> A[i];

    output(N, A);

    for ( i = 1; i < N ; i++) {
        v = A[i];
        j = i - 1;
        while ( j >= 0 && A[j] > v){
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
        output(N, A);
    }
}
