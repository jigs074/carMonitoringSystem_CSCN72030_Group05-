

#pragma once

#include<iostream>
#include<ctime>
#include<fstream>
#include<string>
#include<ctime>
#include<cstdio>
#include "volumeAndEngineTime.h"
using namespace std;



string Volume::incrementVolume(string currentVolume)
{
	string line;
	ifstream file;
	file.open("../volumeLevels.txt", ios::in);
	while (!file.eof())
	{
		getline(file, line);
		if (line == currentVolume)
		{
			getline(file, line);
			//cout << line;
			return line;
		}
	}
	file.close();

}

string Volume::decrementVolume(string currentVolume)
{
	string line, vol;
	fstream file;
	fstream temp;
	file.open("../volumeLevels.txt", ios::in);
	temp.open("../temp.txt", ios::out);

	while (getline(file, line))
	{
		if (line != currentVolume)
		{
			temp << line << endl;
		}
		if (line == currentVolume)
		{
			break;
		}
	}
	temp.close();
	temp.open("../temp.txt", ios::in);
	while (!temp.eof())
	{
		getline(temp, line);
		if (line.compare("") > 0) {
			vol = line;
		}
	}

	return vol;

	file.close();
	temp.close();

}

void engineTime::setEngineTime(string engineTime)
{
	//clock function to start timer - need buttonClick event for this to work
		//float c_start = clock();
		//......
		//......
		//float c_end = clock();
		//engineTime = c_end - c_start; //This is the engine time usage
	fstream file;
	file.open("../engineTime.txt", ios::out);
	if (file.is_open())
	{
		file << engineTime << endl;
	}
	file.close();
}

string engineTime::getEngineTime()
{
	fstream file;
	string line;
	file.open("../engineTime.txt", ios::in);
	while (!file.eof())
	{
		getline(file, line);
	}
	return line;
	file.close();

}

string engineTime::getAverageEngineTime()
{
	fstream file;
	string line, result;
	file.open("../Duration.txt", ios::in);
	int total = 0;
	double average, sum = 0;
	while (getline(file, line))
	{
		sum += stod(line);
		total++;
	}

	average = sum / total;
	result = to_string(average);
	file.close();
	return result;
}

void engineTime::setaverageEngineTime(string duration)
{
	string line;
	fstream file;
	file.open("../Duration.txt", ios::app);
	file << duration << endl;
	file.close();
}

bool engineTime::alertEngineTime(string averageEngineTime)
{
	double avgtime = stod(averageEngineTime);
	if (avgtime > 10)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}