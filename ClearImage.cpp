#include "ClearImage.h"
#include "Engine/Image.h"

ClearImage::ClearImage(GameObject* parent)
{
}

ClearImage::~ClearImage()
{
}

void ClearImage::Initialize()
{
	hPict_ = Image::Load("Clear.png");
	assert(hPict_ >= 0);
}

void ClearImage::Update()
{
}

void ClearImage::Draw()
{
	Image::SetTransform(hPict_, transform_);
	Image::Draw(hPict_);
}

void ClearImage::Release()
{
}
