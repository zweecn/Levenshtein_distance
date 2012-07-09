/*
 * FileName:
 *
 * Author: Zhengwei04
 * Last modified: 2012-7-9 11:35:12 [B000000008620Y]
 */

#ifndef _SOUGOU_LOG_H
#define _SOUGOU_LOG_H
#include <map>
#include <vector>
#include <string>
using namespace std;

struct log
{
	string time;
	string uid;
	string query;
	int rank;
	int useq;
	string url;
};

class SougouLog
{
	public:
		SougouLog();
		virtual ~SougouLog();
		void test();
		void read(string filename);
	protected:
	private:
		map<string, vector<wstring> > userQueryMap;		

		char* buf;
		const static int MAX_MEM_SIZE;
};

#endif 


