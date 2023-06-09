#pragma once
#include <string>
#include <winsock2.h>
#include "IIpcCallback.h"

class CIpcClient
{
public:
	CIpcClient() {};//构造函数
	~CIpcClient() {};//析构函数

	void Init(IIpcCallback* pReceiver);
public:
	virtual void StartConnect()
	{
		MessageBox(NULL, L"CIpcClient::StartConnect", L"提示信息", MB_OK);
	}
	virtual void StopConnect()
	{
		MessageBox(NULL, L"CIpcClient::StopConnect", L"提示信息", MB_OK);
	}
public:
	void OnTcpPackage()
	{
		MessageBox(NULL, L"CIpcClient::OnTcpPackage", L"提示信息", MB_OK);
	}

private:
	SOCKET m_clientSocket = INVALID_SOCKET;		//客户端socket

public:
	std::wstring m_strId = L"i am CIpcClient";
	IIpcCallback* m_pCallback;
};
