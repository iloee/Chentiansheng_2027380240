#pragma once
#include <string>

using namespace  std;

//����: �����ص��ӿ���
interface IIpcCallback
{
public:
	virtual void OnDataCallback(char* pData, DWORD dwLength) = 0;

};

