#include <iostream>
using namespace std;

class Matrix {
    int mat[10][10], rows, cols;
public:
    void input() {
        cout << "Enter number of rows and columns: "; cin >> rows >> cols;
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> mat[i][j];
    }
    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
    Matrix operator+(Matrix m) {
        Matrix temp; temp.rows = rows; temp.cols = cols;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
        return temp;
    }
};

int main() {
    Matrix m1, m2, m3;
    cout << "Matrix 1:\n"; m1.input();
    cout << "Matrix 2:\n"; m2.input();
    m3 = m1 + m2;
    cout << "\nSum of Matrices:\n"; m3.display();
    return 0;
}
