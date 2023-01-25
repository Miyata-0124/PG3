#pragma once

class TestSingleton final// �p���̋֎~
{
private:
	// �R���X�g���N�^��private��
	TestSingleton();
	// �f�X�g���N�^��private��
	~TestSingleton();
public:
	//�R�s�[�R���X�g���N�^�𖳌�
	TestSingleton(const TestSingleton& obj) = delete;
	// ������Z�q�𖳌�
	TestSingleton& operator=(const TestSingleton& obj) = delete;

	static TestSingleton* GetInstance();
};

