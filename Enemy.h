#pragma once
class Enemy {
public:
	// �����o�֐�
	// �ڋ�
	void Move();
	// �ˌ�
	void Shot();
	// ���E
	void ReMove();
	// �X�V
	void Update(int i);
private:
	// �����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* state[])();
};