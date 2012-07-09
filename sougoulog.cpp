/*
 * FileName:
 *
 * Author: Zhengwei04
 * Last modified: 2012-7-9 12:18:48 [B000000008620Y]
 */

#include <iostream>
#include "sougoulog.h"
#include <fstream>

const int SougouLog::MAX_MEM_SIZE = 10240;

SougouLog::SougouLog()
{
	buf = new char[MAX_MEM_SIZE];	
}

SougouLog::~SougouLog()
{
	delete buf;
}

void SougouLog::read(string filename)
{
	ifstream fin(filename);
	string time;
	while (fin >> time)
	{
		string uid;
		fin >> uid;
		string query;
		fin >> query;
		if (userQueryMap.find(uid) == userQueryMap.end())
		{
			//vector<wstring> qs(query);
		}
		cout << query << endl;

		string temp;
		fin >> temp >> temp >> temp;
	}
}

void SougouLog::test()
{
	read("input.txt");
}
