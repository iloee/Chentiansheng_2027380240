#pragma once
#include "CIpcClient.h"

class CTcpClient :
	public CIpcClient
{
public:
	CTcpClient() {};
	~CTcpClient() {};

public:
	virtual void StartConnect() override
	{
		MessageBox(NULL, L"i am CTcpClient::StartConnect", L"提示信息", MB_OK);
	}
	virtual void StopConnect() override
	{
		MessageBox(NULL, L"i am CTcpClient::StopConnect", L"提示信息", MB_OK);
	}

};
