// BI_Library.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "BI_Library.h"

#include"core.h"
#include <string>
#include <iostream>


static CBILibrary* theBusinessIntelligence = nullptr;

void CBILibrary::BusinessIntelligence()
{
	fnCore();//code function
}

void CBILibrary::LogSomething(std::string something)
{
	std::cout << "BusinessIntelligence LogSomething " << something << std::endl;
}

CBILibrary* GetBusinessIntelligence()
{
	return theBusinessIntelligence;
}

