/*
 * FileName: Levenshten.h
 *
 * Author: Zhengwei
 * Last modified: 2012-7-8 22:27:39 [B000000008620Y]
 */

#ifndef _LEVENSHTEN_H
#define _LEVENSHTEN_H 
#include <string>
using namespace std;

class Levenshten
{
	public:
		Levenshten();
		virtual ~Levenshten();
		int getDistance(string s1, string s2);
		void test();
	private:
		int min(int a, int b, int c);
		char *buf;
};

#endif 

