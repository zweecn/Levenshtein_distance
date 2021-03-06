//http://en.wikipedia.org/wiki/Levenshtein_distance
#include "levenshtein.h"
#include <cstdio>   
#include <string>   
#include <iostream>

const int Levenshtein::MAX_LEN=1024;

Levenshtein::Levenshtein()
{
	d=new int*[MAX_LEN+1];
	for(int k=0; k<=MAX_LEN; k++)
        d[k]=new int[MAX_LEN+1];
}

Levenshtein::~Levenshtein()
{
	for(int k=0; k<=MAX_LEN; k++)
        delete[] d[k];
    delete[] d;
}

int Levenshtein::min(int a,int b,int c) 
{   
    int t = a < b ? a : b;   
    return t < c ? t : c;   
}

int Levenshtein::getDistance(string s1, string s2) {   
    int len1 = s1.length();
	int len2 = s2.length();
	//int** d=new int*[len1+1];
	for(int i = 0;i <= len1;i++)   
        d[i][0] = i;   
    for(int j = 0;j <= len2;j++)   
        d[0][j] = j;   
    for(int j = 1;j <= len2;j++)
		for(int i = 1;i <= len1;i++) {   
            int cost = s1[i] == s2[j] ? 0 : 1;
			int deletion = d[i-1][j] + 1;   
            int insertion = d[i][j-1] + 1;   
            int substitution = d[i-1][j-1] + cost;   
            d[i][j] = min(deletion,insertion,substitution);   
        }
	int res = d[len1][len2];
    	return res;
}   
void Levenshtein::test() 
{
	cout << "in test, input the two string:\n";
	string s1, s2;
	while (cin >> s1 >> s2) 
	{
		cout << getDistance(s1, s2) << endl;
	}  
}
