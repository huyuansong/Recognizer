
// Simple RecognizerDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Simple Recognizer.h"
#include "Simple RecognizerDlg.h"
#include "afxdialogex.h"

//Ink Edit控件
#include <inked.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSimpleRecognizerDlg 对话框



CSimpleRecognizerDlg::CSimpleRecognizerDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSimpleRecognizerDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSimpleRecognizerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_INKEDIT3, mInkEdit);
}

BEGIN_MESSAGE_MAP(CSimpleRecognizerDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CSimpleRecognizerDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CSimpleRecognizerDlg 消息处理程序

BOOL CSimpleRecognizerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	// Controls are now initialized; set control settings.
	// Controls are now initialized; set control settings.
	CWnd* pInkWnd = NULL;
	pInkWnd = GetDlgItem(IDC_INKEDIT3);
	if (pInkWnd != NULL){
		// Set the timeout to a large number. 
		// LPARAM specifies the timeout in millisecs.
		// WPARMA must be left at 0.
		LRESULT result =
			pInkWnd->SendMessage(EM_SETRECOTIMEOUT, 1000000042, 0);
	}
	else{
		// Indicate that an error occurred.
		//ERROR_MSG(L'ERROR: Could not specify recognizer timeout');
	}
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CSimpleRecognizerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CSimpleRecognizerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CSimpleRecognizerDlg::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	CWnd* pInkWnd = NULL;
	pInkWnd = this->GetDlgItem(IDC_INKEDIT3);
	if (pInkWnd != NULL){
		// Trigger recognition within the InkEdit control.
		LRESULT result = pInkWnd->SendMessage(EM_RECOGNIZE, 0, 0);
	}
}
