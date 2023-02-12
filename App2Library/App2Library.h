// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the APP2LIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// APP2LIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#include "App2Exports.h"
#include<LinkedList.h>
// This class is exported from the dll

class APP2LIBRARY_API CApp2Library
{
public:
	CApp2Library();
	virtual ~CApp2Library();

	void DoWork();

private:
	PointerBasedLinkedList* m_pointerBasedLinkedList;

};
