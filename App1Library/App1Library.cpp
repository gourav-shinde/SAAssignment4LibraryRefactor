// App1Library.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "App1Library.h"
#include <BI_Library.h>

// This is an example of an exported variable
APP1LIBRARY_API int nApp1Library=0;

// This is an example of an exported function.
APP1LIBRARY_API int fnApp1Library(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.


CApp1Library::CApp1Library() : m_arrayBasedLinkedList(nullptr)
{
}
CApp1Library::~CApp1Library()
{
	m_arrayBasedLinkedList->clear();
	delete m_arrayBasedLinkedList;
}

void CApp1Library::DoWork()
{
	GetBusinessIntelligence()->LogSomething("MyApp1");

	m_arrayBasedLinkedList = new ArrayBasedLinkedList;


	m_arrayBasedLinkedList->add(11);


}
