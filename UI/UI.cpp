// UI.cpp : Defines the exported functions for the DLL.
//
#pragma once
#include "pch.h"
#include "framework.h"
#include "UI.h"




CUI::CUI() : m_application1(nullptr), m_application2(nullptr)
//CUI::CUI() : m_application2(nullptr)
{

}
void CUI::Init()
{
	m_application1 = new CApp1Library;
	m_application2 = new CApp2Library;
}

void CUI::StartGUILoop()
{
	m_application1->DoWork();

	m_application2->DoWork();


	delete m_application1;
	delete m_application2;
}
