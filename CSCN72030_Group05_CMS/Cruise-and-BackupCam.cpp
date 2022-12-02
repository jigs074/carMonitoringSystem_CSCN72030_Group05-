#include "Cruise-and-BackupCam.h"
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

#pragma warning(disable : 4996)

//Backup Camera Module
string backupCamera::power(int status) {

	//Creating the file for backup camera
	fstream file;
	file.open("backupCam.txt", ios_base::out);
	if (!file.is_open()) {
		return "Error. Could not open File.";
	}
	string def = "Backup Camera Off.";
	file << def;
	file.close();

	//If button is pressed, turn camera on.
	if (status == 1) {
		file.open("backupCam.txt", ios_base::out);
		string on = "Backup Camera On.";
		file << on;
		file.close();
		return on;
	}
	//If button is pressed again, turn camera off.
	else if (status == 2) {
		file.open("backupCam.txt", ios_base::out);
		string off = "Backup Camera Off.";
		file << off;
		file.close();
		return off;
	}
	return " ";
}


//Cruise Control Module
string cruiseControl::status(int status) {

	//Creating the file for cruise control
	fstream file;
	file.open("cruise.txt", ios_base::out);
	if (!file.is_open()) {
		return "Could not open file.";
	}
	string def = "Cruise Control Off.";
	file << def;
	file.close();

	//If button is pressed, turn cruise control on and call method for speed.
	if (status == 1) {
		file.open("cruise.txt", ios_base::out);
		string cruiseOn = "Cruise Control On. Speed set at: ";
		cruiseControl speed;
		string on = cruiseOn + speed.speed();
		file << on;
		file.close();
		return on;
	}
	//If button is pressed again, turn cruise control off.
	else if (status == 2) {
		file.open("cruise.txt", ios_base::out);
		string off = "Cruise Control Off.";
		file << off;
		file.close();
		return off;
	}
	return " ";
}

//Speed Module
string cruiseControl::speed(void) {

	int randSpeed;
	char buff[10];

	//Random seed
	srand(time(NULL));

	//Speed between 50 and 100
	randSpeed = 50 + (rand() % 50);

	//Change int to string
	char* intStr = _itoa(randSpeed, buff, 10);
	string str = string(intStr);

	return str;
}