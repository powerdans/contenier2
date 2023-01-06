#pragma once
#include<exception>


class Bad_lenght :public _exception
{
public:
	virtual const char* what()const noexcept
	{
		return "EROR: Bad_Lenght!";
	}
};



