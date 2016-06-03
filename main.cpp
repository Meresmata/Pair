#include "Pair.h"
#include ".\..\Triple\Triple.h"

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	Pair<> pair1{ 1, 1 };
	Pair<> pair2{ 1, 2 };

	Triple<> triple1{ 1, 1, 1 };
	Triple<> triple2{1, 1, 2};


	cout << "pair1 == pair2" << setw(10) << (pair1 == pair2) << endl;
	cout << "pair2 < pair2" << setw(10) << (pair1 < pair2) << endl;
	cout << "pair2 > pair2" << setw(10) << (pair1 > pair2) << endl;


	cout << "pair1 == triple1" << setw(10) << (pair1 == triple1) << endl;
	cout << "pair1 == triple2" << setw(10) << (pair1 == triple2) << endl;

	cout << "triple1 == pair1" << setw(10) << (triple1 == pair1) << endl;
	cout << "triple2 == pair1" << setw(10) << (triple2 == pair1) << endl;

	cout << "triple1 == triple2" << setw(10) << (triple1 == triple2) << endl;
	cout << "triple1 < triple2" << setw(10) << (triple1 < triple2) << endl;
	cout << "triple1 > triple2" << setw(10) << (triple1 > triple2) << endl;

	Pair<> pair3 = pair1 + pair2;
	Pair<> pair4 = pair1 - pair2;
	Pair<> pair5 = pair1 * pair2;
	Pair<> pair6 = pair1 / pair2;

	Pair<> pair7 = pair1 + triple1;
	Pair<> pair8 = pair1 - triple1;
	Pair<> pair9 = pair1 * triple1;
	Pair<> pair10 = pair1 / triple1;

	pair7 = triple1 + pair2;
	pair8 = triple1 - pair2;
	pair9 = triple1 * pair2;
	pair10 = triple1 / pair2;

}
