#pragma once
#include "CIpcClient.h"
class CUdpClient :
	public CIpcClient
{
public:
	CUdpClient() {};
	~CUdpClient() {};

public:
	virtual void StartConnect() override
	{
		MessageBox(NULL, L"i am CUdpClient::StartConnect", L"��ʾ��Ϣ", MB_OK);
	}
	virtual void StopConnect() override
	{
		MessageBox(NULL, L"i am CUdpClient::StopConnect", L"��ʾ��Ϣ", MB_OK);
	}

};

