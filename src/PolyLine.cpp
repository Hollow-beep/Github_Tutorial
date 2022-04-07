//PolyLine.cpp
#include <iostream>
#include "Point.h"
#include "PolyLine.h"
#include <math.h>

std::vector<Point> points;

PolyLine::PolyLine() {}

PolyLine::PolyLine(std::vector<Point> points) {
	this->points = points;
}

void PolyLine::appendPoint(Point point) {
	points.push_back(point);
}
	
void PolyLine::appendPoint(int x, int y){
	points.push_back(Point(x, y));
}
	
double PolyLine::getLength(){
	double length = 0;
	for(int i = 0; i < points.size() - 1; i++){
	    length += sqrt((points[i].getX() - points[i + 1].getX())*(points[i].getX() - points[i + 1].getX())
	                        + (points[i].getY() - points[i + 1].getY())*(points[i].getY() - points[i + 1].getY()));
	}
	return length;
}

int PolyLine::totalPoints(){
	return points.size();
}

void PolyLine::printPoints(){
	for (int i = 0; i < points.size(); i++){
		std::cout << i + 1 << ": ";
		std::cout << "[" << points.at(i).getX() << " ";
		std::cout << points.at(i).getY() << "] " << std::endl;
	}
	std::cout << "\n";
}