//////////////////////////////////////////////////////////////////////////////////////////////////
//
// �����̸�: bullet_pack.h
//
// ����: ���������. źâ����
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef  __BULLET_PACK_H__
#define  __BULLET_PACK_H__

#include "sub_weapon.h"

class Sub_Bullet_pack: public Sub_Weapon
{
public:
	Sub_Bullet_pack(Player* user_, coord_def pos_, int time_);
	virtual ~Sub_Bullet_pack();

	virtual float Shot(Game_Manager* gm_, Unit* User_, int team_, const coord_def& start_, const coord_def& pos_, float focus_);
	virtual bool Equip(){return false;};
	virtual bool UnEquip(){return false;};
};


#endif // __BULLET_PACK_H__
