#pragma once
#include"Primitive.h"


namespace suken{

class CCircle : public suken::CPrimitive {
public:
/**
*	@brief 説明
*/
	CCircle();
//独自
	float radius;
	float mass;
	float bound;
	bool IsKinematic;
	static const int figureType = SHAPE_CIRCLE; 
/**
*	@brief 説明
* @return 戻り値
*/
	suken::Vector2D GetCenterPos();
/**
*	@brief 説明
* @return 戻り値
*/
	float GetArea();
/**
*	@brief 説明
*/
	void Loop();
/**
*	@brief 説明
*	@param value 引数
*/
	void AddCollisionFalse(CCircle *c);
/**
*	@brief 説明
*	@param value 引数
*/
	void RemoveCollisionFalse(CCircle *c);
/**
*	@brief 説明
*	@param value 引数
* @return 戻り値
*/
	bool GetIsNoCollision(CCircle *c);
private:
	std::vector<CCircle*> noCollision;
};

}