#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    float A[100][100], B[100][100], result[100][100];

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> B[i][j];

  
    if(r1 == r2 && c1 == c2) {
        cout << "\nMatrix Addition:\n";
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                result[i][j] = A[i][j] + B[i][j];
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nAddition not possible!\n";
    }

  
    if(r1 == r2 && c1 == c2) {
        cout << "\nMatrix Subtraction:\n";
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                result[i][j] = A[i][j] - B[i][j];
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nSubtraction not possible!\n";
    }

  
    if(c1 == r2) {
        cout << "\nMatrix Multiplication:\n";
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                result[i][j] = 0;
                for(int k = 0; k < c1; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nMultiplication not possible!\n";
    }

   
    if(r1 == r2 && c1 == c2) {
        cout << "\nMatrix Division (Element-wise):\n";
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                if(B[i][j] != 0) {
                    result[i][j] = A[i][j] / B[i][j];
                    cout << result[i][j] << " ";
                } else {
                    cout << "undefined "; 
                }
            }
            cout << endl;
        }
    } else {
        cout << "\nDivision not possible!\n";
    }

    return 0;
}
