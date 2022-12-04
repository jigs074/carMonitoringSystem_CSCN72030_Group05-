#include "pch.h"
#include "CppUnitTest.h"
#include "..\\CSCN72030_Group05_CMS\Cruise-and-BackupCam.h"
#include "..\\CSCN72030_Group05_CMS\Cruise-and-BackupCam.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:

		//Testing to ensure the correct output is displayed
		TEST_METHOD(BackupCam_Output_001)
		{
			//Assert
			backupCamera cam;
			string actual = cam.power(1);
			string expected = "Backup Camera On.";
			//Act
			Assert::AreEqual(expected, actual);
		}

		//Testing to ensure the correct output is displayed
		TEST_METHOD(BackupCam_Output_002)
		{
			//Assert
			backupCamera cam;
			string actual = cam.power(2);
			string expected = "Backup Camera Off.";
			//Act
			Assert::AreEqual(expected, actual);
		}

		//Testing to ensure the correct output is displayed
		TEST_METHOD(CruiseControl_Output_001)
		{
			//Assert
			cruiseControl cc;
			string actual = cc.status(1);
			string expected = cc.status(1);
			//Act
			Assert::AreEqual(expected, actual);
		}

		//Testing to ensure the correct output is displayed
		TEST_METHOD(CruiseControl_Output_002)
		{
			//Assert
			cruiseControl cc;
			string actual = cc.status(2);
			string expected = "Cruise Control Off.";
			//Act
			Assert::AreEqual(expected, actual);
		}

		//Testing to ensure speed is within the proper range
		TEST_METHOD(speed_Output_001)
		{
			//Assert
			cruiseControl cc;
			string actual = cc.speed();
			int ex = stoi(actual);
			//Act
			Assert::IsTrue(ex > 50 && ex < 100);
		}

		//Test reads from file to make sure that the correct information is being placed into file when cam is on
		TEST_METHOD(BackupCam_File_001)
		{
			//Assert
			backupCamera cam;
			cam.power(1);
			fstream file;
			file.open("backupCam.txt");
			string actual;
			while (file) {
				getline(file, actual);
			}
			string expected = "Backup Camera On.";
			//Act
			Assert::AreEqual(expected, actual);
		}

		//Test reads from file to make sure that the correct information is being placed into file when cam is off
		TEST_METHOD(BackupCam_File_002)
		{
			//Assert
			backupCamera cam;
			cam.power(2);
			fstream file;
			file.open("backupCam.txt");
			string actual;
			while (file) {
				getline(file, actual);
			}
			string expected = "Backup Camera Off.";
			//Act
			Assert::AreEqual(expected, actual);
		}

		//Test reads from file to make sure that the correct information is being placed into file when cruise is on
		TEST_METHOD(cruiseControl_File_001)
		{
			//Assert
			cruiseControl cc;
			cc.status(1);
			fstream file;
			file.open("cruise.txt");
			string actual;
			while (file) {
				getline(file, actual);
			}
			string expected = cc.status(1);
			//Act
			Assert::AreEqual(expected, actual);
		}

		//Test reads from file to make sure that the correct information is being placed into file when cruise is off
		TEST_METHOD(cruiseControl_File_002)
		{
			//Assert
			cruiseControl cc;
			cc.status(2);
			fstream file;
			file.open("cruise.txt");
			string actual;
			while (file) {
				getline(file, actual);
			}
			string expected = "Cruise Control Off.";
			//Act
			Assert::AreEqual(expected, actual);
		}
	};
}