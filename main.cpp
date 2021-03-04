#include <iostream>

using namespace std;

class Matrix{
private:
    int n,m;
public:
    Matrix(int n_size, int m_size){
        n = n_size;
        m = m_size;
    }
    friend Matrix operator+(const Matrix& matrix){

    }
    friend Matrix operator-(const Matrix& matrix){

    }
    friend Matrix operator*(const Matrix& matrix){

    }

    friend Matrix operator == (const Matrix& matrixLeft, Matrix& matrixRight){

    }
};
int main() {

    return 0;
}
