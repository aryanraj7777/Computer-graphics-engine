#include "Matrix4.h"

Matrix4::Matrix4() {
    for (int i = 0; i < 16; i++) {
        data[i] = 0;
    }
    data[0] = data[5] = data[10] = data[15] = 1;
}

Matrix4 Matrix4::operator*(const Matrix4& other) const {
    Matrix4 result;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result.data[i * 4 + j] = 0;
            for (int k = 0; k < 4; k++) {
                result.data[i * 4 + j] += data[i * 4 + k] * other.data[k * 4 + j];
            }
        }
    }
    return result;
}
