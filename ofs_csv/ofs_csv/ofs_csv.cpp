// ofs_csv.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;


int main(int argc, char* argv[])
{
	
	//cout<<argc<<endl;
	//cout<<argv[0]<<endl;
	//cout<<argv[1]<<endl;
	//cout<<argv[2]<<endl;
	//cout<<argv[3]<<endl;

    ofstream ofs;
	//const int obj_size=10;
	//const int obj_num=20;

	int obj_size=atoi(argv[1]);
	int obj_num=atoi(argv[2]);


	ofs.open( "new_test.csv" );

	
	//char buf[obj_size+1];
      //char buf[101];
       
	char* buf;

       
	memset(buf, 'a', obj_size);
    buf[obj_size] = 0;


	for(int i=0;i<obj_num;i++){
		ofs << buf  << endl;
	}
	ofs.close();

	return 0;
}





/*
int _tmain(int argc, _TCHAR* argv[])
{
    ofstream ofs;
	const int obj_size=10;
	const int obj_num=20;

	ofs.open( "new_test.csv" );

	
	char buf[obj_size+1];
        
	memset(buf, 'a', obj_size);
    buf[obj_size] = 0;

	for(int i=0;i<obj_num;i++){
		ofs << buf  << endl;
	}
	ofs.close();

	return 0;
}

*/