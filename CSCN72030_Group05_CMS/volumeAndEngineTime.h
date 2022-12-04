#pragma once
#include<iostream>
#include<ctime>
#include<fstream>
#include<string>
#include<ctime>
#include<cstdio>
using namespace std;

class Volume
{
public:
	string incrementVolume(string currentVolume);
	string decrementVolume(string currentVolume);
};

class engineTime
{
public:
	void setEngineTime(string engineTime);
	string getEngineTime();
	void setaverageEngineTime(string duration);
	string getAverageEngineTime();
	bool alertEngineTime(string averageEngineTime);
};
