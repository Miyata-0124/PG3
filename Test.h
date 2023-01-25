#pragma once

class TestSingleton final// 継承の禁止
{
private:
	// コンストラクタをprivateに
	TestSingleton();
	// デストラクタをprivateに
	~TestSingleton();
public:
	//コピーコンストラクタを無効
	TestSingleton(const TestSingleton& obj) = delete;
	// 代入演算子を無効
	TestSingleton& operator=(const TestSingleton& obj) = delete;

	static TestSingleton* GetInstance();
};

