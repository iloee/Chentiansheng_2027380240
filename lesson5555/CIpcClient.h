#pragma once
#include <string>
#include <winsock2.h>
#include "IIpcCallback.h"

class CIpcClient
{
public:
	CIpcClient() {};//���캯��
	~CIpcClient() {};//��������

	void Init(IIpcCallback* pReceiver);
public:
	virtual void StartConnect()
	{
		MessageBox(NULL, L"CIpcClient::StartConnect", L"��ʾ��Ϣ", MB_OK);
	}
	virtual void StopConnect()
	{
		MessageBox(NULL, L"CIpcClient::StopConnect", L"��ʾ��Ϣ", MB_OK);
	}
public:
	void OnTcpPackage()
	{
		MessageBox(NULL, L"CIpcClient::OnTcpPackage", L"��ʾ��Ϣ", MB_OK);
	}

private:
	SOCKET m_clientSocket = INVALID_SOCKET;		//�ͻ���socket

public:
	std::wstring m_strId = L"i am CIpcClient";
	IIpcCallback* m_pCallback;
};
