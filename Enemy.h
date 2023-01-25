#pragma once
class Enemy {
public:
	// メンバ関数
	// 接近
	void Move();
	// 射撃
	void Shot();
	// 離脱
	void ReMove();
	// 更新
	void Update(int i);
private:
	// メンバ関数ポインタのテーブル
	static void (Enemy::* state[])();
};