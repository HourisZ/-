﻿#include <iostream>
#include <fstream>
using namespace std;
class CStudent
{
public:
	char szName[20];
	int age;
};
int main()
{
	CStudent s;
	ifstream inFile("E:\\GTBL.dat", ios::in | ios::binary); //二进制读方式打开
	if (!inFile) {
		cout << "error" << endl;
		return 0;
	}
	while (inFile.read((char*)& s, sizeof(s))) { //一直读到文件结束
		int readedBytes = inFile.gcount(); //看刚才读了多少字节
		cout << s.szName << " " << s.age << endl;
	}
	inFile.close();
	return 0;
}