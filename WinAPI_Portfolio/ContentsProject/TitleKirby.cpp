#include "PreCompile.h"
#include "TitleKirby.h"

#include <EngineCore/EngineAPICore.h>
#include <EngineCore/SpriteRenderer.h>

#include "ContentsEnum.h"

TitleKirby::TitleKirby()
{
	{
		USpriteRenderer* SpriteRenderer = CreateDefaultSubObject<USpriteRenderer>();
		SpriteRenderer->SetOrder(ERenderOrder::PLAYER);
		SpriteRenderer->SetSprite("Title_Kirby_64.png");

		FVector2D MapScale = SpriteRenderer->SetSpriteScale(4.0f);
		SpriteRenderer->SetComponentLocation(FVector2D({ 500.f, 480.f }));
	}
}

TitleKirby::~TitleKirby()
{
}

