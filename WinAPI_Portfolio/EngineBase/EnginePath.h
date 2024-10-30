#pragma once
#include <filesystem>

class UEnginePath
{
public:
	// constrcuter destructer
	UEnginePath();
	UEnginePath(std::string_view _Path);
	UEnginePath(std::filesystem::path _Path);
	~UEnginePath();

	bool IsExists();	// ���� ���� Ȯ��
	void MoveParent();	// ���� ������ �̵�

	std::string GetPathToString();

	std::string GetFileName();	// ���ϸ� + Ȯ���� ����
	std::string GetExtension();	// Ȯ���ڸ�

	bool MoveParentToDirectory(std::string_view _Path);	// ���� ���丮�� �̵�
	bool IsDirectory();	// ���丮���� Ȯ��
	bool IsFile();
protected:
	std::filesystem::path Path;
private:

};
