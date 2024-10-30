#include <iostream>
#include <vector>
#include <cmath>

// Function to perform Gaussian elimination
std::vector<double> gaussianElimination(std::vector<std::vector<double>>& A, std::vector<double>& B) {
    int n = A.size();  // Assuming A is a square matrix of size 4x4

    // Forward elimination
    for (int i = 0; i < n; ++i) {
        // Find the pivot row
        int maxRow = i;
        for (int k = i + 1; k < n; ++k) {
            if (fabs(A[k][i]) > fabs(A[maxRow][i])) {
                maxRow = k;
            }
        }

        // Swap the rows in both A and B
        std::swap(A[i], A[maxRow]);
        std::swap(B[i], B[maxRow]);

        // Make all rows below this one 0 in the current column
        for (int k = i + 1; k < n; ++k) {
            double factor = A[k][i] / A[i][i];
            for (int j = i; j < n; ++j) {
                A[k][j] -= factor * A[i][j];
            }
            B[k] -= factor * B[i];
        }
    }

    // Back substitution
    std::vector<double> x(n);
    for (int i = n - 1; i >= 0; --i) {
        x[i] = B[i];
        for (int j = i + 1; j < n; ++j) {
            x[i] -= A[i][j] * x[j];
        }
        x[i] /= A[i][i];
    }

    return x;
}

int main() {
    // Define a 4x4 matrix A
    std::vector<std::vector<double>> A = {
        {3, -0.1, -0.2, 7.85},
        {0.1, 7, -0.3, -19.3},
        {0.3, -0.2, 10, 71.4},
        {0.5, -0.1, -0.2, 14.3}
    };

    // Define a 4x1 vector B
    std::vector<double> B = {7.85, -19.3, 71.4, 14.3};

    // Solve the system Ax = B using Gaussian elimination
    std::vector<double> x = gaussianElimination(A, B);

    // Display the solution vector x
    std::cout << "Solution vector x:\n";
    for (double xi : x) {
        std::cout << xi << " ";
    }
    std::cout << std::endl;

    return 0;
}
