#pragma once
#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;

class ENGINETEMP {
	int engtemp = 0;
public:

	int starttemp() {
		int random = 0;
		random = rand();
		random = random % 10 + 195;
		return random;
	}

	void tempchange(int engtemp) {
		int random = 0;
		random = rand();
		random = random % 2 + 1;
		switch (random) {
		case 1:
		{
			engtemp++;
			this->engtemp = engtemp;
			break;
		}
		case 2:
		{
			if (engtemp != 0) {
				engtemp--;
				this->engtemp = engtemp;
			}
			break;
		}
		default:

			break;
		}
	}

};