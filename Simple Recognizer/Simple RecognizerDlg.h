
// Simple RecognizerDlg.h : ͷ�ļ�
//

#pragma once
#include "inkedit2.h"


// CSimpleRecognizerDlg �Ի���
class CSimpleRecognizerDlg : public CDialogEx
{
// ����
public:
	CSimpleRecognizerDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_SIMPLERECOGNIZER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CInkedit2 mInkEdit;
	afx_msg void OnBnClickedButton1();
};
