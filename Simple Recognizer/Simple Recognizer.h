
// Simple Recognizer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CSimpleRecognizerApp: 
// �йش����ʵ�֣������ Simple Recognizer.cpp
//

class CSimpleRecognizerApp : public CWinApp
{
public:
	CSimpleRecognizerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CSimpleRecognizerApp theApp;