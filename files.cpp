#include<iostream>
#include<fstream>

 using namespace std;
//void open(const char *filename,ios::openmode mode);
//ofstream :to create files and copy/write information to these files.

//ifstream:used for input filestream and is used to read info from files.

//fstream: represents file stream generally,and has the capabilities of both ofstream and ifstream which means it can create files write or read info from files

int main() {
	char data[100];
	//open a file in write mode
	ofstream outfile;
	outfile.open("sample.txt");
	cin.getline(data,100);
	//writing data into file
	outfile<<data<<endl;
	
	outfile.close();
	ifstream infile;
	infile.open("infile.txt");
	cout<<"read from the file"<<endl;
	infile>>data;
	cout<<data<<endl;

	infile.close();
	return 0;

}
