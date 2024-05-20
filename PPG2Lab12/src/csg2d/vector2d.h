#pragma once


class Vector2D {
public:
    double x_;
    double y_;
    static double prec_;

public:
    Vector2D();
    Vector2D(const Vector2D&);
    Vector2D(double x, double y);

    Vector2D multiply(const double& v)const;

    Vector2D add(const Vector2D& v2)const;

    Vector2D minus(const Vector2D& v2)const;

    void multiplyV(const double& v);

    void addV(const Vector2D& v2);

    void minusV(const Vector2D& v2);

    double dot(const Vector2D& v2)const;

    double length()const;

    double lengthSq()const;

    Vector2D perpendicular()const;

    Vector2D operator+(const Vector2D& v2)const;

    Vector2D operator*(const double& v)const;

    Vector2D operator-(const Vector2D& v2)const;

    Vector2D& operator-=(const Vector2D& v2);

    Vector2D& operator+=(const Vector2D& v2);

    Vector2D& operator*=(const double& v);

    bool operator==(const Vector2D& v2)const;

    bool operator!=(const Vector2D& v)const;

    Vector2D operator-()const;

    static void compEpsilon(double v);



    void print()const;
    // void x(double r);
    Vector2D& x(double r);
    double x()const;
    // void y(double i);
    Vector2D& y(double i);
    double y()const;
};
