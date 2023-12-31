#include <iostream>
#include <ctime>
using namespace std;

#include <Eigen/Core>
#include <Eigen/Dense>


#define MATRIX_SIZE 50

int main( int argc, char** argv ){
    Eigen::Matrix<float, 2, 3> matrix_23;
    Eigen::Vector3d v_3d;
    Eigen::Matrix3d matrix_33 = Eigen::Matrix3d::Zero();
    Eigen::Matrix< double, Eigen::Dynamic, Eigen::Dynamic> matrix_dynamic;
    Eigen::MatrixXd matrix_x;

    matrix_23 << 1,2,3,4,5,6;
    cout << matrix_23 << endl;

    for (int i=0; i< 1; i++)
        for (int j=0; j<2; j++)
            cout << matrix_23(i, j) << endl;

    v_3d << 3,2,1;
    cout << v_3d << endl;

    Eigen::Matrix<double, 2, 1> result = matrix_23.cast<double>() * v_3d;
    cout << result << endl;

    matrix_33 = Eigen::Matrix3d::Random();
    cout << matrix_33 << endl << endl;


    cout << matrix_33.transpose() << endl;
    cout << matrix_33.sum() << endl;
    cout << matrix_33.trace() << endl;
    cout << matrix_33 * 10 << endl;
    cout << matrix_33.inverse() << endl;
    cout << matrix_33.determinant() << endl;

    return 0;
















}
























