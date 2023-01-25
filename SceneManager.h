#pragma once

class SceneManager final// 継承の禁止
{
private:
	// コンストラクタをprivateに
	SceneManager();
	// デストラクタをprivateに
	~SceneManager();

private:

public:
	// シーン切り替え用
	void ChangeScene(int sceneNo);

	//コピーコンストラクタを無効
	SceneManager(const SceneManager& obj) = delete;
	// 代入演算子を無効
	SceneManager& operator=(const SceneManager& obj) = delete;
public:
	//　アクセス出来るようにする
	static SceneManager* GetInstance();
};

