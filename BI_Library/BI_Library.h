// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the BILIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// BILIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

// This class is exported from the dll
#include "BI_Exports.h"
#include <string>
/// <summary>
/// Utility class for our Business Intelligence module
/// </summary>
class BILIBRARY_API CBILibrary
{
public:


	void LogSomething(std::string something);

private:

	void BusinessIntelligence();
};

extern BILIBRARY_API CBILibrary* GetBusinessIntelligence();
