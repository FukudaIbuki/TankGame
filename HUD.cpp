#include "HUD.h"
#include "Engine/Image.h"
#include "PlayScene.h"


HUD::HUD(GameObject* parent)
	:GameObject(parent, "HUD"), hHUD_(-1), hNumbers_(-1)
{

}

void HUD::Initialize()
{
	hHUD_ = Image::Load("HUD02.png");
	assert(hHUD_ >= 0);
	hNumbers_ = Image::Load("numbers2.png");
	assert(hHUD_ >= 0);
	//hKinoko_ = Image::Load("kinoko.png");
	//assert(hKinoko_ >= 0);

	//for (int i = 0; i < 3; i++)
	//{
	//	Transform t;
	//	t.position_ = { -0.51f + 0.05f*(float)i, 0.85f, 0.0f };
	//	tNumbers_.push_back(t);
	//}
}


string HUD::ConstructEnemyNumberString()
{
	int enemies = ((PlayScene*)GetParent())->GetEnemyNum();
	string enemyNumStr = std::to_string(enemies);
	return enemyNumStr;
}


void HUD::Update()
{
	tHud_.scale_ = { 0.5, 0.5, 1.0 };
	tHud_.position_ = { -0.6, 0.85, 0 };
	//tKinoko_.position_ = { -0.31, 0.85, 0 };
	//tKinoko_.scale_ = { 0.7, 0.7, 1 };
	//int eneNum = ((PlayScene *)(GetParent()))->GetEnemyNum();
	//ここでストリングに分割して、数字を作っていく
}




void HUD::Draw()
{
	Image::SetTransform(hHUD_, tHud_);
	Image::Draw(hHUD_);

	Transform trans;
	trans.scale_ = { 0.5, 0.5, 1.0 };
	trans.position_ = { -0.6, 0.855, 0 };

	Image::SetRect(hNumbers_, 51.2 * 9, 0, 51.2, 99);
	Image::SetTransform(hNumbers_, trans);
	Image::Draw(hNumbers_);

	trans.position_ = { -0.57, 0.855, 0 };
	Image::SetRect(hNumbers_, 51.2 * 6, 0, 51.2, 99);
	Image::SetTransform(hNumbers_, trans);
	Image::Draw(hNumbers_);

	//string estr = ConstructEnemyNumberString();
	//if (estr.size() < 3)
	//	estr = std::string(3 - estr.size(), '0') + estr;
	//for(int i = 0; i < 3; i++) {
	//	int n = estr[i] - '0';
	//	Image::SetRect(hNumbers_, 51.2 *(float)n, 0, 51.2, 60);
	//	Image::SetTransform(hNumbers_, tNumbers_[i]);
	//	Image::Draw(hNumbers_);
	//}
	//Image::SetTransform(hKinoko_, tKinoko_);
	//Image::Draw(hKinoko_);
}


void HUD::Release()
{
}
