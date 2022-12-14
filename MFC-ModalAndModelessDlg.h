
// MFC-ModalAndModelessDlg.h : header file
//

#pragma once

#include "ModelessDlg.h"

// CMFCModalAndModelessDlg dialog
class CMFCModalAndModelessDlg : public CDialogEx
{
// Construction
public:
	CMFCModalAndModelessDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCMODALANDMODELESS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	virtual BOOL DestroyWindow();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedModalButton();
	afx_msg void OnBnClickedModelessButton();

private:
	CModelessDlg* m_ModelessDlg;
public:
};
