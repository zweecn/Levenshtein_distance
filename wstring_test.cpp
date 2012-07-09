/*
 * FileName:
 *
 * Author: Zhengwei04
 * Last modified: 2012-7-9 11:08:44 [B000000008620Y]
 */

#include <iostream>
#include "wstring_test.h"
#include <string>
#define tab "\t"

using namespace std;

void WStringTest::test()
{
	locale def;
	cout << def.name() << endl;
	locale current = cout.getloc();
	cout << current.name() << endl;
	cout << "-------------------------" << endl;
	wcout.imbue(std::locale("chs"));
	
	cout << "Begin test............................" << endl;
	wstring str4=L"你好么？";
    wstring str44(str4.rbegin(),str4.rend());
    wcout<<"CHN\tws4\t:"<<str4<<tab<<str4[1]<<tab<<str44<<endl;
	
	wcout << str4 << endl;
	wstring s = L"你好.";
	cout << s[0] << s[1] << endl;
	cout << s[0] << endl;
	cout << s[1] << endl;
	
}

