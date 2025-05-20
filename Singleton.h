#pragma once
//�̱���(Singleton) - ������ ����
// ���α׷� ������ ��ü�� 1��, ��ü�� ���� ��𼭵� ���� ����

template<typename T>	//���ø�, �ڷ��� ���� �� �ִ� ����
class Singleton
{
protected:
	Singleton() {};
	~Singleton() {};

	// ������ �����ε�
	// & ������
	
	// ������ null ���, ������ null X
	// ������ �����Ҵ� �� ���� O, �����ڴ� �Ұ���
	// ������ �Ҿ���, ������ ������

	Singleton& operator=(const Singleton&) = delete;	// ���� ���� ����
	Singleton(const Singleton& a) = delete;				// ��������� ����

public:
	static T* GetIns()
	{
		if (instance == nullptr)
			instance = new T();

		return instance;
	}
private:
	static T* instance;	// ��������, ��ü
};
