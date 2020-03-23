#pragma once
#include <string>
#include <vector>
using namespace std;


class shape {
private:
	string name;
	int flache;

public:
	shape(string name, int flache);
	~shape();

	//getters
	string getName();
	int getFlache();

	//setters
	void setName(string newName);
	void setFlache(int newFlache);

	int mul(int flache, int x);
	int div(int flache, int y);
	void apply(vector<shape>& v, int(*foo)(int, int), int elm);
	void str(string& str)
};