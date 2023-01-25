#pragma once
class Test final //継承の禁止
{
private:
	//コンストラクタをprivateに
	Test();
	//デストラクタをprivateに
	~Test();
public:
	Test(const Test& obj) = delete;//コピーの削除
	Test& operator=(const Test& obj) = delete;//代入演算子のオーバーロード
	static Test* GetInstance(); 
};

