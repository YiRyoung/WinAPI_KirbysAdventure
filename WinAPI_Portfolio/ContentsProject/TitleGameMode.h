#pragma once
#include <EngineCore/GameMode.h>
#include <EnginePlatform/EngineSound.h>

#include "SoundManager.h"

class ATitleGameMode : public AGameMode
{
public:
	// constrcuter destructer
	ATitleGameMode();
	~ATitleGameMode();

	// delete Function
	ATitleGameMode(const ATitleGameMode& _Other) = delete;
	ATitleGameMode(ATitleGameMode&& _Other) noexcept = delete;
	ATitleGameMode& operator=(const ATitleGameMode& _Other) = delete;
	ATitleGameMode& operator=(ATitleGameMode&& _Other) noexcept = delete;

protected:
	void BeginPlay() override;
	void Tick(float _DeltaTime) override;
	void LevelChangeStart() override;
	void LevelChangeEnd() override;

private:
	class AFade* Fade = nullptr;

	SoundManager& SoundManager = SoundManager::GetInst();
	USoundPlayer& BGMPlayer = SoundManager.GetBGMSoundPlayer();
};

