#include <iostream>
using namespace std;

#include "..\Header\Include\Point.h"
#include "..\Header\Include\PolyLine.h"

int main() {
	PolyLine polyLine;
	// Testing the src file
	polyLine.appendPoint(Point(1, 1));
	polyLine.appendPoint(Point(2, 3));
	polyLine.appendPoint(3, 0);
	polyLine.appendPoint(4, 2);

	cout << polyLine.getLength();
	return 0;
}
