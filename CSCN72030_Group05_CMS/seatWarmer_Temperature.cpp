#include<iostream>
#include<ctime>
#include<fstream>
#include<string>
#include "seatWarmer_Temperature.h"


using namespace std;





string seatWarmer::setLevel(string level) {

	string line;
	fstream file;
	string str;

	if (level == "low" || level == "LOW" || level == "Low") {

		file.open("../lowRange.txt", ios::in);
		if (file.is_open()) {
			srand(time(NULL));
			int random = rand() % 10;
			for (int i = 1; i <= random; i++) {
				getline(file, line);
			}

		}
		str = line;
		//return str;
		//return line;
	}
	if (level == "medium" || level == "MEDIUM" || level == "Medium") {

		file.open("../mediumRange.txt", ios::in);
		if (file.is_open()) {
			srand(time(NULL));
			int random = rand() % 10;
			for (int i = 1; i <= random; i++) {
				getline(file, line);
			}
		}
		//return line;
	}
	if (level == "High" || level == "HIGH" || level == "High") {

		file.open("../highRange.txt", ios::in);
		if (file.is_open()) {
			srand(time(NULL));
			int random = rand() % 10;
			for (int i = 1; i <= random; i++) {
				getline(file, line);
			}
		}
		//return line;

	}
	file.close();
	return str;

}




string carTemperature::autoTemperature() {
	fstream file;
	string line;
	int outsideTemperature = 0;
	int TEMP = 5;
	int carTemperature = 0;
	file.open("../outsideTemperature.txt", ios::in);
	srand(time(NULL));


	int random = rand() % 5;
	if (file.is_open()) {
		for (int i = 1; i <= random; i++) {
			getline(file, line);


		}
	}
	if (line.compare("") > 0) {
		outsideTemperature = stoi(line);
		carTemperature = stoi(line) - TEMP;
	}
	


	


	string finalcarTemp = to_string(carTemperature);
	


	file.close();
	return finalcarTemp;

}

