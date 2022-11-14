// ModelessDlg.cpp : implementation file
//

#include "pch.h"
#include "MFC-ModalAndModeless.h"
#include "ModelessDlg.h"
#include "afxdialogex.h"


// CModelessDlg dialog

IMPLEMENT_DYNAMIC(CModelessDlg, CDialogEx)

CModelessDlg::CModelessDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MODELESS_DIALOG, pParent)
{

}

CModelessDlg::~CModelessDlg()
{
}

void CModelessDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CModelessDlg, CDialogEx)
END_MESSAGE_MAP()


// CModelessDlg message handlers
