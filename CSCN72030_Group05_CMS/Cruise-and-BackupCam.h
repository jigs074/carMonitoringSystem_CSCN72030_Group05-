#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class backupCamera {
public:
	string power(int status);
};

class cruiseControl {
public:
	string status(int status);
	string speed(void);
};