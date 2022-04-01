// Point.h
#ifndef Point_H
#define Point_H

class Point{
private:
    int x;
	int y;  
public:
	Point();
    Point(int x, int y);
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
};

#endif