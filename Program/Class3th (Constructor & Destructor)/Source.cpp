﻿#include <iostream>

//	using namespace std;

//	class Unit
//	{
//	private:
//		static int count;
//	
//	public:
//		Unit()
//		{
//			cout << "Created Unit" << endl;
//		}
//	
//		~Unit()
//		{
//			count++;
//			cout << "Destroyed Unit" << endl;
//		}
//	};

//	class Card
//	{
//	private:
//		char frade;
//		const char* name;
//	
//	public:
//	
//		Card(Card & clone)
//		{
//	
//		}
//	
//		void Initialize(char grade, const char* name)
//		{
//			// this : 자기 자신을 가리키는 포인터 변수
//	
//			this->name = name;
//			this->grade = grade;
//		}
//	
//	};

class Packet
{
private:
	int* bit = nullptr;
public:
	Packet(int value)
	{
		if (bit == nullptr)
		{
			bit = new int;
		}

		*bit = value;

	}
	Packet(const Packet& clone)
	{
		bit = new int;

		*bit = clone.bit;
	}
	~Packet()
	{
		delete bit;
	}
};



//	void Initialize(char grade, const char* name)
//	{
//	
//	}


int main()
{
#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에 자동으로
	// 호출되는 특수한 멤버 함수입니다.

	// Unit unit;

	// 생성자의 경우 객체가 생성될 때 단 한번만 호출되며,
	// 

#pragma endregion

#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의
	// 멤버 함수입니다.

	//	Unit * pointer = new unit;
	//	
	//	delete pointer;
	//	
	//	pointer = new Unit;
	//	
	//	delete pointer;


	// 소멸자는 객체가 메모리에서 해제될 때 단 한 번만
	// 호출되며, 소멸자에는 매개 변수를 생성하여 사용할
	// 수 없습니다.
#pragma endregion

#pragma region 복사 생성자
	// 같은 객체를 복사하여 생성시킬 때 호출되는
	// 생성자입니다.

	//	Card card;
	//	
	//	card.Initialize('A', "Diamond");
	//	
	//	Card clone(card);

#pragma endregion

#pragma region 얕은 복사
	// 객체를 복사할 때 주소 값을 복사하여 같은
	// 메모리 공간을 가리키게 하는 복사입니다.

	//	int* pointer = new int;
	//	int* reference = pointer;
	//	
	//	*pointer = 10;
	//	
	//	cout << "pointer의 값 : " << pointer << endl;
	//	cout << "reference의 값 : " << reference << endl;
	//	
	//	cout << "pointer가 가리키는 값 : " << *pointer << endl;
	//	cout << "reference가 가리키는 값 : " << *reference << endl;
	//	
	//	delete pointer;

	//				delete reference; >> 이미 해제된 메모리 공간을 접근해서 터짐

	// 얕은 복사의 경우 같은 객체가 서로 같은 메모리 공간을
	// 참조하고 있기 때문에 하나의 객체로 값을 변경하게 되면
	// 서로 참조된 객체도 함께 영향을 받습니다.
#pragma endregion

#pragma region 깊은 복사
	// 객체를 복사할 때, 참조 값이 아닌 객체 자체로 새로
	// 복사하여 서로 다른 메모리를 생성하는 복사입니다.

	Packet packet(10);

	Packet protocol(packet);

#pragma endregion


}
