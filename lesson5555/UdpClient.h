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
		MessageBox(NULL, L"i am CUdpClient::StartConnect", L"提示信息", MB_OK);
	}
	virtual void StopConnect() override
	{
		MessageBox(NULL, L"i am CUdpClient::StopConnect", L"提示信息", MB_OK);
	}

};

