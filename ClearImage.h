#pragma once
#include "Engine/GameObject.h"
class ClearImage :
    public GameObject
{
private:
	int hPict_;
public:
	//コンストラクタ
	//引数：parent  親オブジェクト（SceneManager）
	ClearImage(GameObject* parent);

	~ClearImage();

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//開放
	void Release() override;
};

