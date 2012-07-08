/*
 * FileName: Levenshtein.h
 *
 * Author: Zhengwei
 * Last modified: 2012-7-8 23:21:12 [B000000008620Y]
 */

#ifndef _LEVENSHTEN_H
#define _LEVENSHTEN_H 
#include <string>
using namespace std;

class Levenshtein
{
	public:
		Levenshtein();
		virtual ~Levenshtein();
		int getDistance(string s1, string s2);
		void test();
	private:
		int min(int a, int b, int c);
		int **d;
		const static int MAX_LEN;
};

#endif 

