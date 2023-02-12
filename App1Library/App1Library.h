// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the APP1LIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// APP1LIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

#include "App1Exports.h"
#include <LinkedList.h>


/// <summary>
/// This class does something entirely different thatn MyAppplication2
/// </summary>
class APP1LIBRARY_API CApp1Library
{
public:
	CApp1Library();
	virtual ~CApp1Library();

	void DoWork();

private:
	ArrayBasedLinkedList* m_arrayBasedLinkedList;

};
