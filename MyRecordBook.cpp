#include <iostream>
#include <iomanip> // for setw
#include <fstream> // for file handling
#include <string>
#include <limits>  // for numeric_limits
#include <sstream> // for string to int conversion
#include <windows.h>
#include <conio.h>
#undef max // to avoid conflict with std::numeric_limits
using namespace std;

class Student
{

public:
	int id{};
	string fullName;
	string institution = "DON HONORIO VENTURA STATE UNIVERSITY";
	string course;
	int yearLevel;
	char section;

	double KomFIl;
	double artApp;
	double ccs;
	double ds;
	double intro;
	double cplusplus;
	double mmw;
	double uSelf;
	double pathFit;
	double cwts;
	double average;
	string r1;
	string r2;
	string r3;
	string r4;
	string r5;
	string r6;
	string r7;
	string r8;
	string r9;
	string r10;

	void setData();
	void viewData();
	void searchData();
	void editData();
	void deleteData();
};
void emoji(); // This function is unneccesary, only use for design purposes
void intro(); // This function is unneccesary, only use for design purposes
void menu();

int main()
{
	intro();
	system("cls");
	menu();
	return 0;
}

// TO SET RECORDS
void Student::setData()
{
	Student s;
	system("cls");
	ofstream file;
	file.open("file.txt", ios::out | ios::app);
	if (!file)
	{
		cerr << "\t\t\t\t\t"
			 << "THE FILE COULD NOT BE OPENED.\n";
	}
	cout << "\t\t\t\t\t"
		 << "ID: ";
	cin >> s.id;
	cout << "\t\t\t\t\t"
		 << "NAME: ";
	cin.ignore();
	getline(cin, s.fullName);
	cout << "\t\t\t\t\t"
		 << "COURSE: ";
	getline(cin, s.course);
	cout << "\t\t\t\t\t"
		 << "YEAR LEVEL: ";
	cin >> s.yearLevel;
	cout << "\t\t\t\t\t"
		 << "SECTION: ";
	cin >> s.section;
	cout << "\t\t\t\t\t"
		 << "COURSE GRADES: \n";
	cout << "\t\t\t\t\t"
		 << "KONTEKSTWALISADONG KOMUNIKASYON SA FILIPINO (KOMFIL): ";
	cin >> s.KomFIl;
	cout << "\t\t\t\t\t"
		 << "ART APPRECIATION: ";
	cin >> s.artApp;
	cout << "\t\t\t\t\t"
		 << "COMPUTER SYSTEM SERVICING: ";
	cin >> s.ccs;
	cout << "\t\t\t\t\t"
		 << "DISCRETE STRUCTURE 1: ";
	cin >> s.ds;
	cout << "\t\t\t\t\t"
		 << "INTRODUCTION TO COMPUTING: ";
	cin >> s.intro;
	cout << "\t\t\t\t\t"
		 << "INTRODUCTION TO PROGRAMMING (C++): ";
	cin >> s.cplusplus;
	cout << "\t\t\t\t\t"
		 << "MATHEMATICS IN THE MODERN WORLD: ";
	cin >> s.mmw;
	cout << "\t\t\t\t\t"
		 << "UNDERSTANDING THE SELF: ";
	cin >> s.uSelf;
	cout << "\t\t\t\t\t"
		 << "MOVEMENT COMPETENCY TRAINING: ";
	cin >> s.pathFit;
	cout << "\t\t\t\t\t"
		 << "CWTS\\CMT 1: ";
	cin >> s.cwts;
	s.average = (s.KomFIl + s.artApp + s.ccs + s.ds + s.intro + s.cplusplus + s.mmw + s.uSelf + s.pathFit + s.cwts) / 10.0;
	// I use this so i wouldn't round off the decimal places
	stringstream ss;
	ss << s.average;
	string str = ss.str();
	int decimal_places = str.length() - (str.find(".") + 1);
	int num =
		(decimal_places == 0) ? 0 : (decimal_places == 1) ? 1
								: (decimal_places == 2)	  ? 2
								: (decimal_places == 3)	  ? 3
														  : -1;
	cout << "\t\t\t\t\t"
		 << "AVERAGE: " << s.average << endl;
	if (KomFIl < 3.0)
		s.r1 = "Passed";
	else
		s.r1 = "NOT PASSED";

	if (artApp < 3.0)
		s.r2 = "Passed";
	else
		s.r2 = "NOT PASSED";

	if (ccs < 3.0)
		s.r3 = "Passed";
	else
		s.r3 = "NOT PASSED";

	if (ds < 3.0)
		s.r4 = "Passed";
	else
		s.r4 = "NOT PASSED";

	if (intro < 3.0)
		s.r5 = "Passed";
	else
		s.r5 = "NOT PASSED";

	if (cplusplus < 3.0)
		s.r6 = "Passed";
	else
		s.r6 = "NOT PASSED";

	if (mmw < 3.0)
		s.r7 = "Passed";
	else
		s.r7 = "NOT PASSED";

	if (uSelf < 3.0)
		s.r8 = "Passed";
	else
		s.r8 = "NOT PASSED";

	if (pathFit < 3.0)
		s.r9 = "Passed";
	else
		s.r9 = "NOT PASSED";

	if (cwts < 3.0)
		s.r10 = "Passed";
	else
		s.r10 = "NOT PASSED";
	file << s.id << "\n"
		 << s.fullName << "\n"
		 << s.institution << "\n"
		 << s.course << "\n"
		 << s.yearLevel << "\n"
		 << s.section << "\n";
	file << s.KomFIl << "\n"
		 << s.r1 << "\n " << s.artApp << "\n"
		 << s.r2 << "\n"
		 << s.ccs << "\n"
		 << s.r3 << "\n"
		 << s.ds << "\n"
		 << s.r4 << "\n"
		 << s.intro << "\n"
		 << s.r5 << "\n";
	file << s.cplusplus << "\n"
		 << s.r6 << "\n"
		 << s.mmw << "\n"
		 << s.r7 << "\n"
		 << s.uSelf << "\n"
		 << s.r8 << "\n"
		 << s.pathFit << "\n"
		 << s.r9 << "\n"
		 << s.cwts << "\n"
		 << s.r10 << "\n"
		 << s.average << "\n";
	file.close();
	cout << "\t\t\t\t\t"
		 << "SUCCESFULLY ADDED\n";
}

// this is the function that will display the data
void Student::viewData()
{
	Student s;
	system("cls");
	ifstream file;
	file.open("file.txt", ios::in);
	if (!file)
	{
		emoji(); // this is the function that will display the emoji
	}

	// Accessing the data from the file
	while (file >> s.id)
	{
		file.ignore();
		getline(file, s.fullName);
		getline(file, s.institution);
		getline(file, s.course);
		file >> s.yearLevel;
		file >> s.section;
		file >> s.KomFIl;
		file >> s.r1;
		file >> s.artApp;
		file >> s.r2;
		file >> s.ccs;
		file >> s.r3;
		file >> s.ds;
		file >> s.r4;
		file >> s.intro;
		file >> s.r5;
		file >> s.cplusplus;
		file >> s.r6;
		file >> s.mmw;
		file >> s.r7;
		file >> s.uSelf;
		file >> s.r8;
		file >> s.pathFit;
		file >> s.r9;
		file >> s.cwts;
		file >> s.r10;
		file >> s.average;

		cout << "\t\t\t\t\t"
			 << "ID NO. " << s.id << endl;
		cout << "\t\t\t\t\t"
			 << "NAME: " << s.fullName << endl;
		cout << "\t\t\t\t\t"
			 << "INSTITUTION: " << s.institution << endl;
		cout << "\t\t\t\t\t"
			 << "COURSE: " << s.course << endl;
		cout << "\t\t\t\t\t"
			 << "YEAR LEVEL: " << s.yearLevel << endl;
		cout << "\t\t\t\t\t"
			 << "SECTION: " << s.section << endl;
		cout << "\t\t\t\t\t"
			 << "COURSE GRADES: \n";
		cout << "\t\t\t\t\t" << setw(58) << left << "KONTEKSTWALISADONG KOMUNIKASYON SA FILIPINO (KOMFIL): " << setw(7) << left << s.KomFIl << setw(10) << right << s.r1 << endl;
		cout << "\t\t\t\t\t" << setw(58) << left << "ART APPRECIATION: " << setw(7) << left << s.artApp << setw(10) << right << s.r2 << endl;
		cout << "\t\t\t\t\t" << setw(58) << left << "COMPUTER SYSTEM SERVICING: " << setw(7) << left << s.ccs << setw(10) << right << s.r3 << endl;
		cout << "\t\t\t\t\t" << setw(58) << left << "DISCRETE STRUCTURE 1: " << setw(7) << left << s.ds << setw(10) << right << s.r4 << endl;
		cout << "\t\t\t\t\t" << setw(58) << left << "INTRODUCTION TO COMPUTING: " << setw(7) << left << s.intro << setw(10) << right << s.r5 << endl;
		cout << "\t\t\t\t\t" << setw(58) << left << "INTRODUCTION TO PROGRAMMING (C++): " << setw(7) << left << s.cplusplus << setw(10) << right << s.r6 << endl;
		cout << "\t\t\t\t\t" << setw(58) << left << "MATHEMATICS IN THE MODERN WORLD: " << setw(7) << left << s.mmw << setw(10) << right << s.r7 << endl;
		cout << "\t\t\t\t\t" << setw(58) << left << "UNDERSTANDING THE SELF: " << setw(7) << left << s.uSelf << setw(10) << right << s.r8 << endl;
		cout << "\t\t\t\t\t" << setw(58) << left << "MOVEMENT COMPETENCY TRAINING: " << setw(7) << left << s.pathFit << setw(10) << right << s.r9 << endl;
		cout << "\t\t\t\t\t" << setw(58) << left << "CWTS\\CMT 1: " << setw(7) << left << s.cwts << setw(10) << right << s.r10 << endl;
		cout << "\t\t\t\t\t" << setw(58) << left << "AVERAGE: " << setw(7) << left << s.average << endl;
		cout << endl;
	}
	file.close();
}

// Search data by entering the id
void Student::searchData()
{
	Student s;
	system("cls");
	ifstream file;
	file.open("file.txt", ios::in);
	if (!file)
	{
		cerr << "\t\t\t\t\t"
			 << "NO FILE\n";
		return;
	}
	int id;
	cout << "ENTER AN ID TO SEARCH: ";
	cin >> id;
	bool found = false;

	// Accessing data from file
	while (file >> s.id)
	{
		file.ignore();
		getline(file, s.fullName);
		getline(file, s.institution);
		getline(file, s.course);
		file >> s.yearLevel;
		file >> s.section;
		file >> s.KomFIl;
		file >> s.r1;
		file >> s.artApp;
		file >> s.r2;
		file >> s.ccs;
		file >> s.r3;
		file >> s.ds;
		file >> s.r4;
		file >> s.intro;
		file >> s.r5;
		file >> s.cplusplus;
		file >> s.r6;
		file >> s.mmw;
		file >> s.r7;
		file >> s.uSelf;
		file >> s.r8;
		file >> s.pathFit;
		file >> s.r9;
		file >> s.cwts;
		file >> s.r10;
		file >> s.average;
		if (id != s.id)
		{
		}
		else
		{
			found = true;
			cout << "\t\t\t\t\t"
				 << "FOUND!!!\n";
			cout << "\t\t\t\t\t"
				 << "ID NO: " << s.id << "\n";
			cout << "\t\t\t\t\t"
				 << "NAME: " << s.fullName << "\n";
			cout << "\t\t\t\t\t"
				 << "INSTITUTION: " << s.institution << endl;
			cout << "\t\t\t\t\t"
				 << "COURSE: " << s.course << endl;
			cout << "\t\t\t\t\t"
				 << "YEAR LEVEL: " << s.yearLevel << endl;
			cout << "\t\t\t\t\t"
				 << "SECTION: " << s.section << endl;
			cout << "\t\t\t\t\t"
				 << "COURSE GRADES: \n";
			cout << "\t\t\t\t\t" << setw(58) << left << "KONTEKSTWALISADONG KOMUNIKASYON SA FILIPINO (KOMFIL): " << setw(7) << left << s.KomFIl << setw(10) << right << s.r1 << endl;
			cout << "\t\t\t\t\t" << setw(58) << left << "ART APPRECIATION: " << setw(7) << left << s.artApp << setw(10) << right << s.r2 << endl;
			cout << "\t\t\t\t\t" << setw(58) << left << "COMPUTER SYSTEM SERVICING: " << setw(7) << left << s.ccs << setw(10) << right << s.r3 << endl;
			cout << "\t\t\t\t\t" << setw(58) << left << "DISCRETE STRUCTURE 1: " << setw(7) << left << s.ds << setw(10) << right << s.r4 << endl;
			cout << "\t\t\t\t\t" << setw(58) << left << "INTRODUCTION TO COMPUTING: " << setw(7) << left << s.intro << setw(10) << right << s.r5 << endl;
			cout << "\t\t\t\t\t" << setw(58) << left << "INTRODUCTION TO PROGRAMMING (C++): " << setw(7) << left << s.cplusplus << setw(10) << right << s.r6 << endl;
			cout << "\t\t\t\t\t" << setw(58) << left << "MATHEMATICS IN THE MODERN WORLD: " << setw(7) << left << s.mmw << setw(10) << right << s.r7 << endl;
			cout << "\t\t\t\t\t" << setw(58) << left << "UNDERSTANDING THE SELF: " << setw(7) << left << s.uSelf << setw(10) << right << s.r8 << endl;
			cout << "\t\t\t\t\t" << setw(58) << left << "MOVEMENT COMPETENCY TRAINING: " << setw(7) << left << s.pathFit << setw(10) << right << s.r9 << endl;
			cout << "\t\t\t\t\t" << setw(58) << left << "CWTS\\CMT 1: " << setw(7) << left << s.cwts << setw(10) << right << s.r10 << endl;
			cout << "\t\t\t\t\t" << setw(58) << left << "AVERAGE: " << setw(7) << left << s.average << endl;
			cout << endl;
		}
	}
	file.close();

	if (!found)
	{
		cout << "NO STUDENT FOUND WITH ID " << id << "." << endl;
		emoji();
	}
}

// EDIT DATA by entering the ID of the student
void Student::editData()
{
	Student s;
	system("cls");
	ifstream file;
	file.open("file.txt", ios::in);
	if (!file)
	{
		cerr << "\t\t\t\t\t"
			 << "NO FILE";
		return;
	}
	int id;
	cout << "\t\t\t\t\t"
		 << "ENTER THE ID OF THE STUDENT YOU WANT TO EDIT: ";
	cin >> id;
	ofstream temp;
	temp.open("temp.txt", ios::out);
	bool found = false;

	// Accessing the file
	while (file >> s.id)
	{
		file.ignore();
		getline(file, fullName);
		getline(file, s.institution);
		getline(file, s.course);
		file >> s.yearLevel;
		file >> s.section;
		file >> s.KomFIl;
		file >> s.r1;
		file >> s.artApp;
		file >> s.r2;
		file >> s.ccs;
		file >> s.r3;
		file >> s.ds;
		file >> s.r4;
		file >> s.intro;
		file >> s.r5;
		file >> s.cplusplus;
		file >> s.r6;
		file >> s.mmw;
		file >> s.r7;
		file >> s.uSelf;
		file >> s.r8;
		file >> s.pathFit;
		file >> s.r9;
		file >> s.cwts;
		file >> s.r10;
		file >> s.average;
		if (id != s.id)
		{
			temp << s.id << "\n"
				 << s.fullName << "\n"
				 << s.institution << "\n"
				 << s.course << "\n"
				 << s.yearLevel << "\n"
				 << s.section << "\n";
			temp << s.KomFIl << "\n"
				 << s.r1 << "\n " << s.artApp << "\n"
				 << s.r2 << "\n"
				 << s.ccs << "\n"
				 << s.r3 << "\n"
				 << s.ds << "\n"
				 << s.r4 << "\n"
				 << s.intro << "\n"
				 << s.r5 << "\n";
			temp << s.cplusplus << "\n"
				 << s.r6 << "\n"
				 << s.mmw << "\n"
				 << s.r7 << "\n"
				 << s.uSelf << "\n"
				 << s.r8 << "\n"
				 << s.pathFit << "\n"
				 << s.r9 << "\n"
				 << s.cwts << "\n"
				 << s.r10 << "\n"
				 << s.average << "\n";
		}
		else
		{
			found = true;
			cout << "\t\t\t\t\t"
				 << "ENTER NEW NAME: ";
			cin.ignore();
			getline(cin, s.fullName);
			cout << "\t\t\t\t\t"
				 << "COURSE: ";
			getline(cin, s.course);
			cout << "\t\t\t\t\t"
				 << "YEAR LEVEL: ";
			cin >> s.yearLevel;
			cout << "\t\t\t\t\t"
				 << "SECTION: ";
			cin >> s.section;
			cout << "\t\t\t\t\t"
				 << "COURSE GRADES: \n";
			cout << "\t\t\t\t\t"
				 << "KONTEKSTWALISADONG KOMUNIKASYON SA FILIPINO (KOMFIL): ";
			cin >> s.KomFIl;
			cout << "\t\t\t\t\t"
				 << "ART APPRECIATION: ";
			cin >> s.artApp;
			cout << "\t\t\t\t\t"
				 << "COMPUTER SYSTEM SERVICING: ";
			cin >> s.ccs;
			cout << "\t\t\t\t\t"
				 << "DISCRETE STRUCTURE 1: ";
			cin >> s.ds;
			cout << "\t\t\t\t\t"
				 << "INTRODUCTION TO COMPUTING: ";
			cin >> s.intro;
			cout << "\t\t\t\t\t"
				 << "INTRODUCTION TO PROGRAMMING (C++): ";
			cin >> s.cplusplus;
			cout << "\t\t\t\t\t"
				 << "MATHEMATICS IN THE MODERN WORLD: ";
			cin >> s.mmw;
			cout << "\t\t\t\t\t"
				 << "UNDERSTANDING THE SELF: ";
			cin >> s.uSelf;
			cout << "\t\t\t\t\t"
				 << "MOVEMENT COMPETENCY TRAINING: ";
			cin >> s.pathFit;
			cout << "\t\t\t\t\t"
				 << "CWTS\\CMT 1: ";
			cin >> s.cwts;
			temp << s.id << "\n"
				 << s.fullName << "\n"
				 << s.institution << "\n"
				 << s.course << "\n"
				 << s.yearLevel << "\n"
				 << s.section << "\n";
			temp << s.KomFIl << "\n"
				 << s.r1 << "\n " << s.artApp << "\n"
				 << s.r2 << "\n"
				 << s.ccs << "\n"
				 << s.r3 << "\n"
				 << s.ds << "\n"
				 << s.r4 << "\n"
				 << s.intro << "\n"
				 << s.r5 << "\n";
			temp << s.cplusplus << "\n"
				 << s.r6 << "\n"
				 << s.mmw << "\n"
				 << s.r7 << "\n"
				 << s.uSelf << "\n"
				 << s.r8 << "\n"
				 << s.pathFit << "\n"
				 << s.r9 << "\n"
				 << s.cwts << "\n"
				 << s.r10 << "\n"
				 << s.average << "\n";
		}
	}
	file.close();
	temp.close();
	remove("file.txt");
	rename("temp.txt", "file.txt");

	if (found)
		cout << "STUDENT WITH ID " << id << " WAS EDITED." << endl;
	else
		cout << "NO STUDENT FOUND WITH ID " << id << "." << endl;
}
// Delete data by entering the ID
void Student::deleteData()
{
	Student s;
	system("cls");
	ifstream file;
	file.open("file.txt", ios::in);
	if (!file)
	{
		cerr << "\t\t\t\t\t"
			 << "NO FILE\n";
		return;
	}
	int id;
	cout << "\t\t\t\t\t"
		 << "ENTER THE ID OF THE STUDENT YOU WANT TO DELETE: ";
	cin >> id;
	ofstream temp; // Creating a temporary file to store all records except the one to be deleted
	temp.open("temp.txt", ios::out);
	bool found = false;
	bool noAction = false;

	// Accessing data from file
	while (file >> s.id)
	{
		file.ignore();
		getline(file, fullName);
		getline(file, s.institution);
		getline(file, s.course);
		file >> s.yearLevel;
		file >> s.section;
		file >> s.KomFIl;
		file >> s.r1;
		file >> s.artApp;
		file >> s.r2;
		file >> s.ccs;
		file >> s.r3;
		file >> s.ds;
		file >> s.r4;
		file >> s.intro;
		file >> s.r5;
		file >> s.cplusplus;
		file >> s.r6;
		file >> s.mmw;
		file >> s.r7;
		file >> s.uSelf;
		file >> s.r8;
		file >> s.pathFit;
		file >> s.r9;
		file >> s.cwts;
		file >> s.r10;
		file >> s.average;

		// Storing all records except the one to be deleted
		if (id != s.id)
		{
			temp << s.id << "\n"
				 << s.fullName << "\n"
				 << s.institution << "\n"
				 << s.course << "\n"
				 << s.yearLevel << "\n"
				 << s.section << "\n";
			temp << s.KomFIl << "\n"
				 << s.r1 << "\n " << s.artApp << "\n"
				 << s.r2 << "\n"
				 << s.ccs << "\n"
				 << s.r3 << "\n"
				 << s.ds << "\n"
				 << s.r4 << "\n"
				 << s.intro << "\n"
				 << s.r5 << "\n";
			temp << s.cplusplus << "\n"
				 << s.r6 << "\n"
				 << s.mmw << "\n"
				 << s.r7 << "\n"
				 << s.uSelf << "\n"
				 << s.r8 << "\n"
				 << s.pathFit << "\n"
				 << s.r9 << "\n"
				 << s.cwts << "\n"
				 << s.r10 << "\n"
				 << s.average << "\n";
		}
		else
		{
			char YorN;
			// Confirming the deletion
			cout << "\t\t\t\t\t"
				 << "WHEN YOU DELETE THIS:\n";
			cout << "\t\t\t\t\t"
				 << "* THE DATA ARE DELETED PERMENENTLY AND CANNOT BE RECOVERED\n";
			cout << "\t\t\t\t\t"
				 << "* WILL NOT APPEAR IN SEARCH RESULT\n\n";
			cout << "\t\t\t\t\t"
				 << "ARE YOU SURE YOU WANT TO DELETE THIS DATA?[Y/N]: ";
			YorN = _getch();
			if (toupper(YorN) == 'Y')
				found = true;

			// If not want to delete, the data will be stored in the temporary file
			else
			{
				temp << s.id << "\n"
					 << s.fullName << "\n"
					 << s.institution << "\n"
					 << s.course << "\n"
					 << s.yearLevel << "\n"
					 << s.section << "\n";
				temp << s.KomFIl << "\n"
					 << s.r1 << "\n " << s.artApp << "\n"
					 << s.r2 << "\n"
					 << s.ccs << "\n"
					 << s.r3 << "\n"
					 << s.ds << "\n"
					 << s.r4 << "\n"
					 << s.intro << "\n"
					 << s.r5 << "\n";
				temp << s.cplusplus << "\n"
					 << s.r6 << "\n"
					 << s.mmw << "\n"
					 << s.r7 << "\n"
					 << s.uSelf << "\n"
					 << s.r8 << "\n"
					 << s.pathFit << "\n"
					 << s.r9 << "\n"
					 << s.cwts << "\n"
					 << s.r10 << "\n"
					 << s.average << "\n";
				noAction = true;
			}
		}
	}
	file.close();
	temp.close();
	remove("file.txt");				// Deleting the original file
	rename("temp.txt", "file.txt"); // Renaming the temporary file to the original file name

	if (noAction)
		cout << "\t\t\t\t\t"
			 << "DELETE CANCELLED \n";
	else
	{
		if (found)
			cout << "STUDENT WITH ID " << id << " HAS BEEN DELETED." << endl;
		else
			cout << "NO STUDENT FOUND WITH ID " << id << "." << endl;
	}
}

void menu()
{
	char cc;
	system("cls");
	Student s;
	int choice;
	char as[50];
	do
	{
		do
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			system("cls");
			cout << "\t\t\t\t\t";
			for (int i = 0; i < 50; i++)
			{
				cout << "*";
				Sleep(10);
			}
			cout << endl;
			cout << "\t\t\t\t\t";
			for (int i = 0; i < 1; i++)
			{
				for (int x = 0; x < 50; x++)
				{
					if (x == 0 || x == 48)
					{
						Sleep(50);
						cout << "*";
					}
					cout << " ";
				}
				cout << endl;
			}
			cout << "\t\t\t\t\t";
			for (int i = 0; i < 50; i++)
			{
				Sleep(10);
				cout << "*";
			}
			Sleep(0);
			system("cls");
			cout << "\t\t\t\t\t";
			for (int a = 0; a < 50; a++)
			{
				cout << "*";
			}
			cout << endl;
			cout << "\t\t\t\t\t";
			cout << "*       STUDENTS RECORD MANAGEMENT SYSTEM       *" << endl;
			cout << "\t\t\t\t\t";
			for (int a = 0; a < 50; a++)
			{
				cout << "*";
			}
			cout << endl;
			cout << "\t\t\t\t\t";
			cout << "**************************************************" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                 [1]SET RECORD                **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**************************************************" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                 [2]VIEW RECORD               **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**************************************************" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                 [3]SEARCH RECORD             **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**************************************************" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                 [4]EDIT RECORD               **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**************************************************" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                 [5]DELETE RECORD             **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**************************************************" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                 [6]EXIT                      **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**                                              **" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "**************************************************" << endl;
			cout << "\t\t\t\t\t";
			Sleep(50);
			cout << "YOUR CHOICE: ";
			cin >> choice;
			switch (choice)
			{
				int sId;
			case 1:
				s.setData();
				break;
			case 2:
				s.viewData();
				break;
			case 3:
				s.searchData();
				break;
			case 4:
				s.editData();
				break;
			case 5:
				s.deleteData();
				break;
			case 6:
				system("cls");
				return;
				break;
			}
		} while (cin.fail() || choice > 6 && choice < 1);
		cout << "\t\t\t\t\t"
			 << "PRESS ANY KEY TO CONTINUE... ";
		cin >> cc;
	} while (cc);
}

void intro()
{
	char key;
	int i = 0;

	do
	{
		if (i == 0)
		{
			system("Color 05");
		}
		if (i == 1)
		{
			system("Color 03");
		}
		system("cls");
		cout << "\t\t\t\t\t";
		cout << "   __       __  ________  __         ______    ______   __       __  ________        __ " << endl;
		Sleep(300);
		cout << "\t\t\t\t\t";
		cout << "  /  |  _  /  |/        |/  |       /      \\  /      \\ /  \\     /  |/        |      /  |" << endl;
		Sleep(300);
		cout << "\t\t\t\t\t";
		cout << "  $$ | / \\ $$ |$$$$$$$$/ $$ |      /$$$$$$  |/$$$$$$  |$$  \\   /$$ |$$$$$$$$/       $$ |" << endl;
		Sleep(300);
		cout << "\t\t\t\t\t";
		cout << "  $$ |/$  \\$$ |$$ |__    $$ |      $$ |  $$/ $$ |  $$ |$$$  \\ /$$$ |$$ |__          $$ |" << endl;
		Sleep(300);
		cout << "\t\t\t\t\t";
		cout << "  $$ /$$$  $$ |$$    |   $$ |      $$ |      $$ |  $$ |$$$$  /$$$$ |$$    |         $$ |" << endl;
		Sleep(300);
		cout << "\t\t\t\t\t";
		cout << "  $$ $$/$$ $$ |$$$$$/    $$ |      $$ |   __ $$ |  $$ |$$ $$ $$/$$ |$$$$$/          $$/ " << endl;
		Sleep(300);
		cout << "\t\t\t\t\t";
		cout << "  $$$$/  $$$$ |$$ |_____ $$ |_____ $$ \\__/  |$$ \\__$$ |$$ |$$$/ $$ |$$ |_____        __ " << endl;
		Sleep(300);
		cout << "\t\t\t\t\t";
		cout << "  $$$/    $$$ |$$       |$$       |$$    $$/ $$    $$/ $$ | $/  $$ |$$       |      /  |" << endl;
		Sleep(300);
		cout << "\t\t\t\t\t";
		cout << "  $$/      $$/ $$$$$$$$/ $$$$$$$$/  $$$$$$/   $$$$$$/  $$/      $$/ $$$$$$$$/       $$/ " << endl;
		Sleep(300);
		cout << "\t\t\t\t\t";

		i++;
	} while (i < 2);
	cout << endl
		 << endl;
	cout << "\t\t\t\t\t";
	char press[100] = "PRESS ANY KEY TO CONTINUE...";
	// cout << "\n\nPress any key to Continue";
	for (int i = 0; i < 28; i++)
	{
		cout << press[i];
		Sleep(100);
	}
	cin >> key;
}

void emoji()
{
	ifstream emoji;
	emoji.open("emoji.txt", ios::in);
	string line;
	while (getline(emoji, line))
	{
		cout << "\t\t\t\t\t";
		cout << line << std::endl;
	}
}