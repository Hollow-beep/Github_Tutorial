#include <iostream>
using namespace std;

#include "Point.h"
#include "PolyLine.h"

int main() {
	PolyLine polyLine;
	// Testing the src file
	polyLine.appendPoint(Point(1, 1));
	polyLine.appendPoint(Point(2, 3));
	polyLine.appendPoint(3, 0);
	polyLine.appendPoint(4, 2);
	polyLine.appendPoint(5, 1);
	polyLine.appendPoint(1, 6);

	cout << "Total number of points: " <<  polyLine.totalPoints() << endl;
	polyLine.printPoints();
	cout << "PolyLine length: " << polyLine.getLength() <<endl;
	return 0;
}
