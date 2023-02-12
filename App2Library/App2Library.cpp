// App2Library.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "App2Library.h"
#include<BI_Library.h>


// This is an example of an exported variable
APP2LIBRARY_API int nApp2Library=0;

// This is an example of an exported function.
APP2LIBRARY_API int fnApp2Library(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.

CApp2Library::CApp2Library() : m_pointerBasedLinkedList(nullptr)
{
}
CApp2Library::~CApp2Library()
{
	m_pointerBasedLinkedList->clear();
	delete m_pointerBasedLinkedList;
}

void CApp2Library::DoWork()
{
	GetBusinessIntelligence()->LogSomething("MyApp2");

	m_pointerBasedLinkedList = new PointerBasedLinkedList;

	m_pointerBasedLinkedList->add(22);

}