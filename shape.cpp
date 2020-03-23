#include "shape.h"
#include <string>
#include <vector>
using namespace std;

shape::shape(string name, int flache) {
	this->name = name;
	this->flache = flache;
}

//getters
string shape::getName() { return this->name; };
int shape::getFlache() { return this->flache; };

//setters
void shape::setName(string newName) { this->name = newName; };
void shape::setFlache(int newFlache) { this->flache = newFlache; };

int shape::mul(int flache, int x) {
	return flache * x;
}

int shape::div(int flache, int y) {
	return flache / y;
}

void shape::apply(vector<shape>& v, int(*foo)(int, int), int elm) {
	for (int i = 0; i < v.size(); i++) {
		v[i].flache = foo(v[i].flache, elm);
	}
}

void shape::str(string& str) {
	str += this->name;
}

shape::~shape() {

}