//////////////////////////////////////////////////////////////////////////////////////////////////
//
// 파일이름: config.h
//
// 내용: 설정파일 열기
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include "config.h"
#include <fstream>
using namespace std;


Config::Config()
	:width(600), height(400)
{

}

void Config::init()
{	
	ifstream infile;
	infile.open("config.txt");
	if(infile.fail())
	{
		return;
	}
	char name[1024];
	char value[1024];
	while(1)
	{
		int index = 0;
		while(1)
		{
			name[index] = infile.get();
			if(name[index] == -1)
			{
				infile.close();
				return;
			}
			if(name[index] == ' '  || name[index] == '=' ||  name[index] == '\n')
			{
				if(index == 0)
					continue;
				else
				{
					name[index] = '\0';
					break;
				}
			}
			index++;
		}
		index = 0;
		while(1)
		{
			value[index] = infile.get();
			if(value[index] == -1)
			{
				infile.close();
				return;
			}			
			if(value[index] == ' '  || value[index] == '=' ||  value[index] == '\n')
			{
				if(index == 0)
				{
					continue;
				}
				else
				{
					value[index] = '\0';
					break;
				}
			}
			index++;
		}
		int value2 = atoi(value);
		if(!strcmp(strlwr(name),"width"))
		{
			if(value2>0)
				width = value2;
		}
		else if(!strcmp(strlwr(name),"height"))
		{
			if(value2>0)
				height = value2;
		}
	}

	infile.close();



}