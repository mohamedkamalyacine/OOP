#ifndef POINT_H
#define POINT_H


class Point
{
private:
    int x;
    int y;

public:
    Point();
    Point(int, int);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    ~Point();
};

#endif // POINT_H
