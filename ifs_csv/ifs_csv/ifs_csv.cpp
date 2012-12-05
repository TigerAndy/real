// ifs_csv.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
//c++
int _tmain(int argc, _TCHAR* argv[])
{



}

















/* c

int _tmain(int argc, _TCHAR* argv[])
{
	FILE *fp;
	char *fname="512_6w.csv";
	char s[100];
	int ret,n1,n2;
	
	fp=fopen(fname,"r");
	if(fp==NULL){
		printf("%s cannot open this file",fname);
		return -1;
	}
	while((ret=fscanf(fp,"%[^,],%d,",s,&n1))!=EOF){
		printf("%s %d",s,n1);
	}

	fclose(fp);

	return 0;
}
*/
