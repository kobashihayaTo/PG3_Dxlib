
#pragma once
class SceneManager final
{
private:

public:
	//�C���X�^���X�̎擾
	static SceneManager* GetInstance();

	//�V�[���؂�ւ�
	void ChangeScene(int sceneNo);
};