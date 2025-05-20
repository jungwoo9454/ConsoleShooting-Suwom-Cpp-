#pragma once
//싱글톤(Singleton) - 디자인 패턴
// 프로그램 내에서 객체가 1개, 객체를 언제 어디서든 접근 가능

template<typename T>	//템플릿, 자료형 담을 수 있는 변수
class Singleton
{
protected:
	Singleton() {};
	~Singleton() {};

	// 연산자 오버로드
	// & 참조자
	
	// 포인터 null 허용, 참조자 null X
	// 포인터 동적할당 값 전달 O, 참조자는 불가능
	// 포인터 불안정, 참조자 안정적

	Singleton& operator=(const Singleton&) = delete;	// 대입 연산 금지
	Singleton(const Singleton& a) = delete;				// 복사생성자 금지

public:
	static T* GetIns()
	{
		if (instance == nullptr)
			instance = new T();

		return instance;
	}
private:
	static T* instance;	// 전역변수, 객체
};
