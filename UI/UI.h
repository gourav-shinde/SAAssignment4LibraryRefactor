// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the UI_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// UI_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
//#pragma once
#include "UI_Exports.h"
#include<App1Library.h>
#include<App2Library.h>



// This class is exported from the dll
class UI_API CUI {
public:
	CUI();
	// TODO: add your methods here.
	void Init();

	void StartGUILoop();
private:
	CApp1Library* m_application1;
	CApp2Library* m_application2;
};

