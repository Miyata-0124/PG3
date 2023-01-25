#pragma once

class SceneManager final// �p���̋֎~
{
private:
	// �R���X�g���N�^��private��
	SceneManager();
	// �f�X�g���N�^��private��
	~SceneManager();

private:

public:
	// �V�[���؂�ւ��p
	void ChangeScene(int sceneNo);

	//�R�s�[�R���X�g���N�^�𖳌�
	SceneManager(const SceneManager& obj) = delete;
	// ������Z�q�𖳌�
	SceneManager& operator=(const SceneManager& obj) = delete;
public:
	//�@�A�N�Z�X�o����悤�ɂ���
	static SceneManager* GetInstance();
};

