//PolyLine.h

#ifndef PolyLine_H
#define PolyLine_H

#include "Point.h"
#include <vector>

class PolyLine{
private:
    std::vector<Point> points;

public:
    PolyLine();
    PolyLine(std::vector<Point> points);
    void appendPoint(Point point);
    void appendPoint(int x, int y);
    double getLength();
    int totalPoints();
    void printPoints();
};

#endif