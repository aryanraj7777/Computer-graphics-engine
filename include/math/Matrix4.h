#ifndef MATRIX4_H
#define MATRIX4_H

class Matrix4 {
public:
    float data[16];
    Matrix4();
    Matrix4 operator*(const Matrix4& other) const;
};

#endif // MATRIX4_H
