
// Simple RecognizerDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Simple Recognizer.h"
#include "Simple RecognizerDlg.h"
#include "afxdialogex.h"

//Ink Edit�ؼ�
#include <inked.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSimpleRecognizerDlg �Ի���



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


// CSimpleRecognizerDlg ��Ϣ�������

BOOL CSimpleRecognizerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
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
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CSimpleRecognizerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CSimpleRecognizerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CSimpleRecognizerDlg::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CWnd* pInkWnd = NULL;
	pInkWnd = this->GetDlgItem(IDC_INKEDIT3);
	if (pInkWnd != NULL){
		// Trigger recognition within the InkEdit control.
		LRESULT result = pInkWnd->SendMessage(EM_RECOGNIZE, 0, 0);
	}
}
