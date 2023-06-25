﻿
// MobileNetV3Dlg.h: 头文件
//
#include <atlimage.h>
#include "IIpcCallback.h"
#pragma once


// CMobileNetV3Dlg 对话框
class CMobileNetV3Dlg : public CDialogEx,IIpcCallback
{
	// 构造
public:
	CMobileNetV3Dlg(CWnd* pParent = nullptr);	// 标准构造函数

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOBILENETV3_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


	// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnEnChangeEditFileDir();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnEnChangeEdit1();
	virtual void OnDataCallback(char* pData, DWORD dwLength) override;
private:
	CFont m_oFont;
};


