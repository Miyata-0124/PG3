#pragma once
class Test final //�p���̋֎~
{
private:
	//�R���X�g���N�^��private��
	Test();
	//�f�X�g���N�^��private��
	~Test();
public:
	Test(const Test& obj) = delete;//�R�s�[�̍폜
	Test& operator=(const Test& obj) = delete;//������Z�q�̃I�[�o�[���[�h
	static Test* GetInstance(); 
};

