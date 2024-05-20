#include "vector2d.h"
#include <iostream>
#include <math.h>

double Vector2D::prec_;

Vector2D::Vector2D() : x_(0.), y_(0.){}

Vector2D::Vector2D(const Vector2D& v) = default;

Vector2D::Vector2D(double x, double y) : x_(x), y_(y){}

Vector2D Vector2D::multiply(const double& v)const{
    return {x_ * v, y_ * v};
}

Vector2D Vector2D::add(const Vector2D& v2)const{
    return {x_ + v2.x_, y_ + v2.y_};
}

Vector2D Vector2D::minus(const Vector2D& v2)const{
    return {x_ - v2.x_, y_ - v2.y_};
}

void Vector2D::multiplyV(const double& v){
    x_ *= v;
    y_ *= v;
}

void Vector2D::addV(const Vector2D& v2){
    x_ += v2.x_;
    y_ += v2.y_;
}

void Vector2D::minusV(const Vector2D& v2){
    x_ -= v2.x_;
    y_ -= v2.y_;
}

double Vector2D::dot(const Vector2D& v2)const{
    return x_ * v2.x_ + y_ * v2.y_;
}

Vector2D Vector2D::perpendicular()const{
    return {-x_, y_};
}

double Vector2D::length()const{
    return sqrt(lengthSq());
}

double Vector2D::lengthSq()const{
    return pow(x_, 2) + pow(y_, 2);
}

Vector2D Vector2D::operator+(const Vector2D& v2)const{
    return Vector2D::add(v2);
}

Vector2D Vector2D::operator*(const double& v)const{
    return Vector2D::multiply(v);
}

Vector2D Vector2D::operator-(const Vector2D& v2)const{
    return Vector2D::minus(v2);
}

Vector2D Vector2D::operator-()const{
    return {-x_, -y_ };
}

Vector2D& Vector2D::operator-=(const Vector2D& v2){
    *this = *this - v2;
    return *this;
}

Vector2D& Vector2D::operator+=(const Vector2D& v2){
    *this = *this + v2;
    return *this;
}

Vector2D& Vector2D::operator*=(const double& v){
    *this = *this * v;
    return *this;
}

bool Vector2D::operator==(const Vector2D& v2)const{
    return (abs(this->minus(v2).x_) <= prec_ && abs(this->minus(v2).y_) <= prec_);
}

bool Vector2D::operator!=(const Vector2D& v2)const{
    return !(abs(this->minus(v2).x_) <= prec_ && abs(this->minus(v2).y_) <= prec_);
}

void Vector2D::compEpsilon(double v){
    prec_ = v;
}

void Vector2D::print()const{
    std::cout << "[" << x() << "," << y() << "]" << std::endl;
}

// void Vector::x(double x){
//     x_ = x;
// }
Vector2D& Vector2D::x(double x){
    x_ = x;
    return *this;
}
double Vector2D::x()const{
    return x_;
}
// void Vector::y(double y){
//     y_ = y;
// }
Vector2D& Vector2D::y(double y){
    y_ = y;
    return *this;
}
double Vector2D::y()const{
    return y_;
}

