//////////////////////////////////////////////////////////////////////////////////////////////////
//
// 파일이름: main_weapon_list.cpp
//
// 내용: 메인웨폰 정의
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include "main_weapon_list.h"
#include "rifle.h"
#include "double_pistol.h"
#include "fire.h"
#include "fire2.h"
#include "ice.h"
#include "bazooka.h"
#include "bazooka_ap.h"
#include "water.h"
#include "sniper.h"
#include "bow.h"
#include "dart.h"
#include "grenade_gun.h"
#include "texture_list.h"


main_weapon_infor rifle__no_weapon = 
{
	MWK_NO_WEAPON, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_unknown,/*인터페이스 그림*/
	WT_ECT,/*무기종류*/
	"무기없음",/*이름*/
	"",
	0,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	0.0f,/*장전 프레임*/
	0.0f,/*장비전환 프레임*/
	0.0f,/*발사 속도 적용치*/ 
	0.0f,/*총알 속도 적용치*/
	0.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.0f,/*반동*/
	0.0f,/*최대 반동*/
	0.0f,/*에임 안정치*/
	0.0f, /*사거리*/
	0.0f, /*소음*/
	0.0f, /*밀치기*/
	0.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	0,/*발사 간격 프레임*/
	0,/*발사 간격 초기 프레임*/
	0,/*총알 속도*/
	0.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	0,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};




main_weapon_infor rifle__assault_rifle = 
{
	MWK_ASSAUL_RIFLE, /*무기 종류*/
	&tex_item_rifle,/*땅에 떨어진 그림*/
	&tex_inter_rifle,/*인터페이스 그림*/
	WT_RIFLE,/*무기종류*/
	"돌격소총",/*이름*/
	"기본적인 소총",/*정보(한글 10자까지)*/
	30,/*탄알 갯수*/
	0.8f,/*이동속도 적용 퍼센티지*/
	70.0f,/*장전 프레임*/
	10.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.025f,/*반동*/
	0.1f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	150.0f, /*사거리*/
	110.0f, /*소음*/
	0.4f, /*밀치기*/
	2.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	7,/*발사 간격 프레임*/
	7,/*발사 간격 초기 프레임*/
	15,/*총알 속도*/
	6.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__heavy = 
{
	MWK_HEAVY, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_mini_gun,/*인터페이스 그림*/
	WT_RIFLE,/*무기종류*/
	"미니건",/*이름*/
	"연사력이 매우빠른 총\n단, 예열이 필요하다",/*정보(한글 10자까지)*/
	80,/*탄알 갯수*/
	0.6f,/*이동속도 적용 퍼센티지*/
	70.0f,/*장전 프레임*/
	10.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.005f,/*반동*/
	0.15f,/*최대 반동*/
	0.0005f,/*에임 안정치*/
	150.0f, /*사거리*/
	110.0f, /*소음*/
	0.5f, /*밀치기*/
	3.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	3,/*발사 간격 프레임*/
	30,/*발사 간격 초기 프레임*/
	10,/*총알 속도*/
	3.5f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	6.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__pistol = 
{
	MWK_RIFLE_PISTOL, /*무기 종류*/
	&tex_item_pistol,/*땅에 떨어진 그림*/
	&tex_inter_pistol,/*인터페이스 그림*/
	WT_PISTOL,/*무기종류*/
	"피스톨",/*이름*/
	"기본적인 권총",
	16,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	20.0f,/*장전 프레임*/
	3.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.03f,/*반동*/
	0.05f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	110.0f, /*사거리*/
	70.0f, /*소음*/
	0.8f, /*밀치기*/
	2.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	20,/*발사 간격 프레임*/
	20,/*발사 간격 초기 프레임*/
	15,/*총알 속도*/
	9.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};

main_weapon_infor rifle__pistol_big = 
{
	MWK_RIFLE_PISTOL_BIG, /*무기 종류*/
	&tex_item_pistol,/*땅에 떨어진 그림*/
	&tex_inter_pistol,/*인터페이스 그림*/
	WT_PISTOL,/*무기종류*/
	"데저트 이글",/*이름*/
	"장탄수가 적은편이지만\n더 위력적인 권총",
	7,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	30.0f,/*장전 프레임*/
	3.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.05f,/*반동*/
	0.08f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	110.0f, /*사거리*/
	80.0f, /*소음*/
	1.2f, /*밀치기*/
	2.5f, /*최대 밀치는 정도*/
	/*------------------------*/
	30,/*발사 간격 프레임*/
	30,/*발사 간격 초기 프레임*/
	15,/*총알 속도*/
	18.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__assassin_pistol = 
{
	MWK_RIFLE_ASSASSIN_PISTOL, /*무기 종류*/
	&tex_item_pistol,/*땅에 떨어진 그림*/
	&tex_inter_pistol,/*인터페이스 그림*/
	WT_PISTOL,/*무기종류*/
	"암살권총",/*이름*/
	"암살이 가능한 권총이지만\n위력이 약하다",
	18,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	20.0f,/*장전 프레임*/
	3.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.015f,/*반동*/
	0.05f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	110.0f, /*사거리*/
	60.0f, /*소음*/
	0.8f, /*밀치기*/
	2.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	25,/*발사 간격 프레임*/
	25,/*발사 간격 초기 프레임*/
	20,/*총알 속도*/
	8.0f,/*데미지*/
	3.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__double_pistol = 
{
	MWK_RIFLE_DOUBLE_PISTOL, /*무기 종류*/
	&tex_item_pistol,/*땅에 떨어진 그림*/
	&tex_inter_2_pistol,/*인터페이스 그림*/
	WT_PISTOL,/*무기종류*/
	"쌍권총",/*이름*/
	"동시 2발을 쏘는 권총",
	18,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	40.0f,/*장전 프레임*/
	3.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.05f,/*반동*/
	0.1f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	110.0f, /*사거리*/
	80.0f, /*소음*/
	0.8f, /*밀치기*/
	2.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	26,/*발사 간격 프레임*/
	26,/*발사 간격 초기 프레임*/
	15,/*총알 속도*/
	12.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	3 /*권총잡는 거리*/
};
main_weapon_infor rifle__shot_gun = 
{
	MWK_SHOT_GUN, /*무기 종류*/
	&tex_item_shotgun,/*땅에 떨어진 그림*/
	&tex_inter_shotgun,/*인터페이스 그림*/
	WT_SHOTGUN,/*무기종류*/
	"샷건",/*이름*/
	"기본적인 샷건",
	6,/*탄알 갯수*/
	0.9f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	10.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.1f,/*기본 에임*/
	0.08f,/*반동*/
	0.1f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	100.0f, /*사거리*/
	110.0f, /*소음*/
	0.8f, /*밀치기*/
	4.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	40,/*발사 간격 프레임*/
	40,/*발사 간격 초기 프레임*/
	15,/*총알 속도*/
	5.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	7,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__shot_gun_short = 
{
	MWK_SHOT_GUN_SHORT, /*무기 종류*/
	&tex_item_shotgun,/*땅에 떨어진 그림*/
	&tex_inter_shotgun,/*인터페이스 그림*/
	WT_SHOTGUN,/*무기종류*/
	"밀리샷건",/*이름*/
	"근접에 더 적합한 샷건\n사거리가 짧다",
	5,/*탄알 갯수*/
	0.9f,/*이동속도 적용 퍼센티지*/
	90.0f,/*장전 프레임*/
	10.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.05f,/*기본 에임*/
	0.03f,/*반동*/
	0.08f,/*최대 반동*/
	0.0005f,/*에임 안정치*/
	60.0f, /*사거리*/
	80.0f, /*소음*/
	0.9f, /*밀치기*/
	4.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	30,/*발사 간격 프레임*/
	30,/*발사 간격 초기 프레임*/
	12,/*총알 속도*/
	8.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	7,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__shot_gun_knockback = 
{
	MWK_SHOT_GUN_KNOCKBACK, /*무기 종류*/
	&tex_item_shotgun,/*땅에 떨어진 그림*/
	&tex_inter_shotgun,/*인터페이스 그림*/
	WT_SHOTGUN,/*무기종류*/
	"넉백샷건",/*이름*/
	"넉백이 강화된 샷건\n맞은 적을 느려지게함",
	7,/*탄알 갯수*/
	0.9f,/*이동속도 적용 퍼센티지*/
	80.0f,/*장전 프레임*/
	10.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.1f,/*기본 에임*/
	0.1f,/*반동*/
	0.2f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	90.0f, /*사거리*/
	120.0f, /*소음*/
	2.0f, /*밀치기*/
	9.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	60,/*발사 간격 프레임*/
	60,/*발사 간격 초기 프레임*/
	15,/*총알 속도*/
	4.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	9,/*한번에 나가는 총알량*/
	0.6f,/*슬로우율*/
	100
};
main_weapon_infor rifle__flame_thrower = 
{
	MWK_FLAME_THROWER, /*무기 종류*/
	&tex_item_flame_thrower,/*땅에 떨어진 그림*/
	&tex_inter_flame_thrower,/*인터페이스 그림*/
	WT_FLAME_THROWER,/*무기종류*/
	"화염방사기",/*이름*/
	"기본적인 방사기",
	90,/*탄알 갯수*/
	0.7f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	20.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.1f,/*기본 에임*/
	0.0f,/*반동*/
	0.0f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	35.0f, /*사거리(화방에선 시간)*/
	50.0f, /*소음*/
	0.0f, /*밀치기*/
	0.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	2,/*발사 간격 프레임*/
	2,/*발사 간격 초기 프레임*/
	3,/*총알 속도*/
	2.5f,/*데미지*/
	1.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.08f,/*크기변화율*/
	0
};

main_weapon_infor rifle__ice_thrower = 
{
	MWK_ICE_THROWER, /*무기 종류*/
	&tex_item_flame_thrower,/*땅에 떨어진 그림*/
	&tex_inter_flame_thrower,/*인터페이스 그림*/
	WT_FLAME_THROWER,/*무기종류*/
	"냉기방사기",/*이름*/
	"데미지는 약하지만\n맞은 적을 느려지게함",
	100,/*탄알 갯수*/
	0.7f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	20.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.1f,/*기본 에임*/
	0.0f,/*반동*/
	0.0f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	45.0f, /*사거리(화방에선 시간)*/
	50.0f, /*소음*/
	0.0f, /*밀치기*/
	0.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	2,/*발사 간격 프레임*/
	60,/*슬로우 턴*/
	3,/*총알 속도*/
	2.0f,/*데미지*/
	0.5f,/*슬로우 비율*/
	1,/*한번에 나가는 총알량*/
	0.08f,/*크기변화율*/
	0
};

main_weapon_infor rifle__flame_thrower2 = 
{
	MWK_FLAME_THROWER2, /*무기 종류*/
	&tex_item_flame_thrower,/*땅에 떨어진 그림*/
	&tex_inter_flame_thrower,/*인터페이스 그림*/
	WT_FLAME_THROWER,/*무기종류*/
	"화염반사기",/*이름*/
	"화염탄을 발사한다\n화염은 벽을 튕긴다",
	8,/*탄알 갯수*/
	0.8f,/*이동속도 적용 퍼센티지*/
	80.0f,/*장전 프레임*/
	25.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.05f,/*반동*/
	0.1f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	200.0f, /*사거리(화방에선 시간)*/
	40.0f, /*소음*/
	0.0f, /*밀치기*/
	0.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	40,/*발사 간격 프레임*/
	40,/*발사 간격 초기 프레임*/
	3,/*총알 속도*/
	20.0f,/*데미지*/
	0.0f,/*보너스데미지(화염자국뎀지)*/
	2,/*한번에 나가는 총알량(여기서 튕기는양)*/
	30.0f,/*화염지속시간*/
	0
};


main_weapon_infor rifle__bazooka = 
{
	MWK_BAZOOKA, /*무기 종류*/
	&tex_item_bazooka,/*땅에 떨어진 그림*/
	&tex_inter_bazooka,/*인터페이스 그림*/
	WT_BAZOOKA,/*무기종류*/
	"바주카",/*이름*/
	"기본적인 바주카",
	5,/*탄알 갯수*/
	0.7f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	25.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.08f,/*반동*/
	0.2f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	180.0f, /*사거리(화방에선 시간)*/
	100.0f, /*소음*/
	3.0f, /*밀치기*/
	6.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	50,/*발사 간격 프레임*/
	50,/*발사 간격 초기 프레임*/
	3,/*총알 속도*/
	40.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	10.00f,/*폭발반경*/
	0
};

main_weapon_infor rifle__ap_bazooka = 
{
	MWK_AP_BAZOOKA, /*무기 종류*/
	&tex_item_bazooka,/*땅에 떨어진 그림*/
	&tex_inter_bazooka,/*인터페이스 그림*/
	WT_BAZOOKA,/*무기종류*/
	"박격포",/*이름*/
	"터지진않지만 관통한다",
	4,/*탄알 갯수*/
	0.8f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	25.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.08f,/*반동*/
	0.2f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	180.0f, /*사거리(화방에선 시간)*/
	100.0f, /*소음*/
	1.0f, /*밀치기*/
	2.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	70,/*발사 간격 프레임*/
	70,/*발사 간격 초기 프레임*/
	4,/*총알 속도*/
	30.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	5.00f,/*폭발반경*/
	0
};

main_weapon_infor rifle__guided_bazooka = 
{
	MWK_GUIDED_BAZOOKA, /*무기 종류*/
	&tex_item_bazooka,/*땅에 떨어진 그림*/
	&tex_inter_bazooka,/*인터페이스 그림*/
	WT_BAZOOKA,/*무기종류*/
	"유도바주카",/*이름*/
	"유도능력있는 바주카",
	7,/*탄알 갯수*/
	0.7f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	25.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.06f,/*반동*/
	0.15f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	180.0f, /*사거리(화방에선 시간)*/
	100.0f, /*소음*/
	3.0f, /*밀치기*/
	6.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	30,/*발사 간격 프레임*/
	30,/*발사 간격 초기 프레임*/
	2,/*총알 속도*/
	20.0f,/*데미지*/
	0.04f,/*각속도*/
	1,/*한번에 나가는 총알량*/
	5.00f,/*폭발반경*/
	50 /*유도 범위*/
};
main_weapon_infor rifle__grenade_gun = 
{
	MWK_GRENADE_GUN, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_bazooka,/*인터페이스 그림*/
	WT_BAZOOKA,/*무기종류*/
	"그레네이드 건",/*이름*/
	"벽에 튕기는 수류탄 총",
	5,/*탄알 갯수*/
	0.8f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	25.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.2f,/*기본 에임*/
	0.0f,/*반동*/
	0.2f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	120.0f, /*사거리(화방에선 시간)*/
	30.0f, /*소음*/
	3.0f, /*밀치기*/
	6.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	40,/*발사 간격 프레임*/
	40,/*발사 간격 초기 프레임*/
	50,/*총알 속도*/
	40.0f,/*데미지*/
	0.00f,/**/
	1,/*한번에 나가는 총알량*/
	15.00f,/*폭발반경*/
	0 /**/
};

main_weapon_infor rifle__sniper = 
{
	MWK_SNIPER, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_sniper,/*인터페이스 그림*/
	WT_RIFLE,/*무기종류*/
	"저격라이플",/*이름*/
	"위력이 높은 저격총\n우클릭으로 저격모드",
	6,/*탄알 갯수*/
	0.7f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	30.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.05f,/*기본 에임*/
	0.15f,/*반동*/
	0.3f,/*최대 반동*/
	0.002f,/*에임 안정치*/
	250.0f, /*사거리*/
	120.0f, /*소음*/
	1.0f, /*밀치기*/
	2.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	70,/*발사 간격 프레임*/
	70,/*발사 간격 초기 프레임*/
	20,/*총알 속도*/
	25.0f,/*데미지*/
	1.6f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};

main_weapon_infor rifle__bow = 
{
	MWK_BOW, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_bow,/*인터페이스 그림*/
	WT_ECT,/*무기종류*/
	"활",/*이름*/
	"모아서 발사하는 활\n약하지만 소음이 없다",
	16,/*탄알 갯수*/
	0.9f,/*이동속도 적용 퍼센티지*/
	80.0f,/*장전 프레임*/
	10.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.0f,/*반동*/
	0.0f,/*최대 반동*/
	0.02f,/*에임 안정치*/
	90.0f, /*사거리*/
	0.0f, /*소음*/
	0.5f, /*밀치기*/
	2.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	10,/*발사 간격 프레임*/
	10,/*발사 간격 초기 프레임*/
	5,/*총알 속도*/
	7.0f,/*데미지*/
	5.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*슬로우율*/
	0
};
main_weapon_infor rifle__cross_bow = 
{
	MWK_CROSS_BOW, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_cross_bow,/*인터페이스 그림*/
	WT_SILENCE,/*무기종류*/
	"석궁",/*이름*/
	"소음이 없는 암살 무기\n활을 보완해 일반전투도 좋다",
	8,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	3.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.03f,/*반동*/
	0.06f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	110.0f, /*사거리*/
	0.0f, /*소음*/
	4.0f, /*밀치기*/
	6.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	45,/*발사 간격 프레임*/
	45,/*발사 간격 초기 프레임*/
	30,/*총알 속도*/
	15.0f,/*데미지*/
	2.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__dart = 
{
	MWK_DART, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_silencer,/*인터페이스 그림*/
	WT_ECT,/*무기종류*/
	"독침",/*이름*/
	"독데미지를 주는 독침\n좀비,로봇에겐 약하다",
	9,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	50.0f,/*장전 프레임*/
	3.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.00f,/*반동*/
	0.00f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	100.0f, /*사거리*/
	00.0f, /*소음*/
	0.0f, /*밀치기*/
	0.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	35,/*발사 간격 프레임*/
	35,/*발사 간격 초기 프레임*/
	8,/*총알 속도*/
	10.0f,/*데미지*/
	2.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__mon_assault_rifle = 
{
	MWK_MON_ASSAUL_RIFLE, /*무기 종류*/
	&tex_item_rifle,/*땅에 떨어진 그림*/
	&tex_inter_rifle,/*인터페이스 그림*/
	WT_RIFLE,/*무기종류*/
	"몬스터용 돌격소총",/*이름*/
	"",
	50,/*탄알 갯수*/
	0.8f,/*이동속도 적용 퍼센티지*/
	70.0f,/*장전 프레임*/
	10.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.01f,/*반동*/
	0.05f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	300.0f, /*사거리*/
	90.0f, /*소음*/
	0.4f, /*밀치기*/
	2.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	7,/*발사 간격 프레임*/
	31,/*발사 간격 초기 프레임*/
	10,/*총알 속도*/
	4.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	6.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__mon_pistol_big = 
{
	MWK_MON_PISTOL, /*무기 종류*/
	&tex_item_pistol,/*땅에 떨어진 그림*/
	&tex_inter_pistol,/*인터페이스 그림*/
	WT_SILENCE,/*무기종류*/
	"네임드 암살권총",/*이름*/
	"",
	7,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	30.0f,/*장전 프레임*/
	3.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.05f,/*반동*/
	0.08f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	110.0f, /*사거리*/
	40.0f, /*소음*/
	1.2f, /*밀치기*/
	2.5f, /*최대 밀치는 정도*/
	/*------------------------*/
	30,/*발사 간격 프레임*/
	30,/*발사 간격 초기 프레임*/
	12,/*총알 속도*/
	12.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__mon_silence_gun = 
{
	MWK_MON_SILENCE_GUN, /*무기 종류*/
	&tex_item_pistol,/*땅에 떨어진 그림*/
	&tex_inter_pistol,/*인터페이스 그림*/
	WT_SILENCE,/*무기종류*/
	"몬스터용 소음총",/*이름*/
	"경보로봇용총",
	20,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	20.0f,/*장전 프레임*/
	3.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.03f,/*반동*/
	0.05f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	300.0f, /*사거리*/
	0.0f, /*소음*/
	0.8f, /*밀치기*/
	2.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	15,/*발사 간격 프레임*/
	15,/*발사 간격 초기 프레임*/
	20,/*총알 속도*/
	6.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};

main_weapon_infor rifle__mon_bazooka = 
{
	MWK_MON_BAZOOKA, /*무기 종류*/
	&tex_item_bazooka,/*땅에 떨어진 그림*/
	&tex_inter_bazooka,/*인터페이스 그림*/
	WT_BAZOOKA,/*무기종류*/
	"몬스터용 바주카",/*이름*/
	"",
	5,/*탄알 갯수*/
	0.7f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	25.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.08f,/*반동*/
	0.2f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	200.0f, /*사거리(화방에선 시간)*/
	100.0f, /*소음*/
	3.0f, /*밀치기*/
	6.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	50,/*발사 간격 프레임*/
	50,/*발사 간격 초기 프레임*/
	2,/*총알 속도*/
	30.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	10.00f,/*폭발반경*/
	0
};



main_weapon_infor rifle__mon_water_gun = 
{
	MWK_MON_WATER_GUN, /*무기 종류*/
	&tex_item_flame_thrower,/*땅에 떨어진 그림*/
	&tex_inter_flame_thrower,/*인터페이스 그림*/
	WT_FLAME_THROWER,/*무기종류*/
	"몬스터용 물분사기",/*이름*/
	"",
	100,/*탄알 갯수*/
	0.7f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	20.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.05f,/*기본 에임*/
	0.0f,/*반동*/
	0.0f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	70.0f, /*사거리(화방에선 시간)*/
	30.0f, /*소음*/
	2.0f, /*밀치기*/
	5.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	1,/*발사 간격 프레임*/
	1,/*발사 간격 초기 프레임*/
	4,/*총알 속도*/
	0.3f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.05f,/*크기변화율*/
	0
};



main_weapon_infor rifle__mon_bounce_fire = 
{
	MWK_MON_BOUNCE_FIRE, /*무기 종류*/
	&tex_item_flame_thrower,/*땅에 떨어진 그림*/
	&tex_inter_flame_thrower,/*인터페이스 그림*/
	WT_FLAME_THROWER,/*무기종류*/
	"몬스터용 반사화방",/*이름*/
	"",
	10,/*탄알 갯수*/
	0.8f,/*이동속도 적용 퍼센티지*/
	70.0f,/*장전 프레임*/
	25.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.05f,/*반동*/
	0.1f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	200.0f, /*사거리(화방에선 시간)*/
	40.0f, /*소음*/
	0.0f, /*밀치기*/
	0.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	40,/*발사 간격 프레임*/
	40,/*발사 간격 초기 프레임*/
	2,/*총알 속도*/
	25.0f,/*데미지*/
	5.0f,/*보너스데미지(화염자국뎀지)*/
	3,/*한번에 나가는 총알량(여기서 튕기는양)*/
	30.0f,/*화염지속시간*/
	0
};
main_weapon_infor rifle__mon_sniper = 
{
	MWK_MON_SNIPER, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_unknown,/*인터페이스 그림*/
	WT_RIFLE,/*무기종류*/
	"몬스터용 저격라이플",/*이름*/
	"쎔",
	6,/*탄알 갯수*/
	0.7f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	30.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.00f,/*기본 에임*/
	0.0f,/*반동*/
	0.0f,/*최대 반동*/
	0.002f,/*에임 안정치*/
	250.0f, /*사거리*/
	120.0f, /*소음*/
	1.0f, /*밀치기*/
	2.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	70,/*발사 간격 프레임*/
	70,/*발사 간격 초기 프레임*/
	20,/*총알 속도*/
	30.0f,/*데미지*/
	2.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	0.0f,/*크기변화율*/
	0
};

main_weapon_infor rifle__mon_minigun = 
{
	MWK_MON_ROBOT_MINIGUN, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_unknown,/*인터페이스 그림*/
	WT_RIFLE,/*무기종류*/
	"로봇 미니건",/*이름*/
	"연사력이 매우빠른 총\n단, 예열이 필요하다",/*정보(한글 10자까지)*/
	30,/*탄알 갯수*/
	0.6f,/*이동속도 적용 퍼센티지*/
	80.0f,/*장전 프레임*/
	10.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.005f,/*반동*/
	0.15f,/*최대 반동*/
	0.0005f,/*에임 안정치*/
	300.0f, /*사거리*/
	110.0f, /*소음*/
	0.5f, /*밀치기*/
	3.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	3,/*발사 간격 프레임*/
	30,/*발사 간격 초기 프레임*/
	10,/*총알 속도*/
	3.5f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	6.0f,/*크기변화율*/
	0
};
main_weapon_infor rifle__mon_robot_minigun = 
{
	MWK_MON_ROBOT_MINIGUN, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_unknown,/*인터페이스 그림*/
	WT_RIFLE,/*무기종류*/
	"로봇 미니건",/*이름*/
	"연사력이 매우빠른 총\n단, 예열이 필요하다",/*정보(한글 10자까지)*/
	30,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	80.0f,/*장전 프레임*/
	10.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.0f,/*기본 에임*/
	0.005f,/*반동*/
	0.15f,/*최대 반동*/
	0.0005f,/*에임 안정치*/
	300.0f, /*사거리*/
	110.0f, /*소음*/
	0.5f, /*밀치기*/
	3.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	4,/*발사 간격 프레임*/
	24,/*발사 간격 초기 프레임*/
	10,/*총알 속도*/
	3.0f,/*데미지*/
	0.0f,/*보너스데미지*/
	1,/*한번에 나가는 총알량*/
	6.0f,/*크기변화율*/
	6/*총잡는거리*/
};
main_weapon_infor rifle__mon_robot_bazooka = 
{
	MWK_MON_ROBOT_BAZOOKA, /*무기 종류*/
	&tex_item_bazooka,/*땅에 떨어진 그림*/
	&tex_inter_bazooka,/*인터페이스 그림*/
	WT_BAZOOKA,/*무기종류*/
	"로봇 유도바주카",/*이름*/
	"유도능력있는 바주카",
	1,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	25.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	3.14f,/*기본 에임*/
	0.0f,/*반동*/
	3.14f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	300.0f, /*사거리(화방에선 시간)*/
	100.0f, /*소음*/
	3.0f, /*밀치기*/
	6.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	10,/*발사 간격 프레임*/
	10,/*발사 간격 초기 프레임*/
	1,/*총알 속도*/
	15.0f,/*데미지*/
	0.03f,/*각속도*/
	7,/*한번에 나가는 총알량*/
	5.00f,/*폭발반경*/
	30 /*유도 범위*/
};
main_weapon_infor rifle__mon_robot_grenade = 
{
	MWK_MON_ROBOT_GRENADE, /*무기 종류*/
	&tex_item_unknown,/*땅에 떨어진 그림*/
	&tex_inter_unknown,/*인터페이스 그림*/
	WT_BAZOOKA,/*무기종류*/
	"로봇 그레네이드 건",/*이름*/
	"수류탄 형식의 총",
	5,/*탄알 갯수*/
	1.0f,/*이동속도 적용 퍼센티지*/
	100.0f,/*장전 프레임*/
	25.0f,/*장비전환 프레임*/
	1.0f,/*발사 속도 적용치*/ 
	1.0f,/*총알 속도 적용치*/
	1.0f,/*데미지 적용치*/
	0.3f,/*기본 에임*/
	0.0f,/*반동*/
	0.3f,/*최대 반동*/
	0.001f,/*에임 안정치*/
	200.0f, /*사거리(화방에선 시간)*/
	30.0f, /*소음*/
	2.0f, /*밀치기*/
	5.0f, /*최대 밀치는 정도*/
	/*------------------------*/
	30,/*발사 간격 프레임*/
	30,/*발사 간격 초기 프레임*/
	40,/*총알 속도*/
	15.0f,/*데미지*/
	0.00f,/**/
	1,/*한번에 나가는 총알량*/
	10.00f,/*폭발반경*/
	1 /**/
};
Main_Weapon* New_Main_Weapon(Main_Weapon_Kind kind_, coord_def pos_, int time_, float bullet_)
{
	Main_Weapon* temp = NULL;
	switch(kind_)
	{
	case MWK_NONE:
	case MWK_ASSAUL_RIFLE:
	default:
		temp = new Rifle(rifle__assault_rifle, pos_, time_);
	break;
	case MWK_HEAVY:
		temp = new Rifle(rifle__heavy, pos_, time_);
	break;
	case MWK_RIFLE_PISTOL:
		temp = new Rifle(rifle__pistol, pos_, time_);
	break;
	case MWK_RIFLE_PISTOL_BIG:
		temp = new Rifle(rifle__pistol_big, pos_, time_);
	break;
	case MWK_RIFLE_ASSASSIN_PISTOL:
		temp = new Rifle(rifle__assassin_pistol, pos_, time_);
	break;
	case MWK_RIFLE_DOUBLE_PISTOL:
		temp = new Double_pistol(rifle__double_pistol, pos_, time_);
	break;
	case MWK_SHOT_GUN:
		temp = new Rifle(rifle__shot_gun, pos_, time_);
	break;
	case MWK_SHOT_GUN_SHORT:
		temp = new Rifle(rifle__shot_gun_short, pos_, time_);
	break;
	case MWK_SHOT_GUN_KNOCKBACK:
		temp = new Rifle(rifle__shot_gun_knockback, pos_, time_);
	break;	
	case MWK_FLAME_THROWER:
		temp = new Fire(rifle__flame_thrower, pos_, time_);
	break;
	case MWK_ICE_THROWER:
		temp = new Ice(rifle__ice_thrower, pos_, time_);
	break;
	case MWK_FLAME_THROWER2:
		temp = new Fire2(rifle__flame_thrower2, pos_, time_);
	break;
	case MWK_BAZOOKA:
		temp = new Bazooka(rifle__bazooka, pos_, time_);
	break;
	case MWK_AP_BAZOOKA:
		temp = new Bazooka_ap(rifle__ap_bazooka, pos_, time_);
	break;
	case MWK_GUIDED_BAZOOKA:
		temp = new Bazooka(rifle__guided_bazooka, pos_, time_);
	break;
	case MWK_GRENADE_GUN:
		temp = new Grenade_gun(rifle__grenade_gun, pos_, time_);
	break;
	case MWK_SNIPER:
		temp = new Sniper(rifle__sniper, pos_, time_);
	break;		
	case MWK_BOW:
		temp = new Bow(rifle__bow, pos_, time_);
	break;
	case MWK_CROSS_BOW:
		temp = new Rifle(rifle__cross_bow, pos_, time_);
	break;
	case MWK_DART:	
		temp = new Dart(rifle__dart, pos_, time_);
	break;
	case MWK_MON_BAZOOKA:
		temp = new Bazooka(rifle__mon_bazooka, pos_, time_);
	break;
	case MWK_MON_ASSAUL_RIFLE:
		temp = new Rifle(rifle__mon_assault_rifle, pos_, time_);
	break;
	case MWK_MON_PISTOL:
		temp = new Rifle(rifle__mon_pistol_big, pos_, time_);
	break;	
	case MWK_MON_SILENCE_GUN:
		temp = new Rifle(rifle__mon_silence_gun, pos_, time_);
	break;	
	case MWK_MON_WATER_GUN:
		temp = new Water(rifle__mon_water_gun, pos_, time_);
	break;
	case MWK_MON_BOUNCE_FIRE:
		temp = new Water(rifle__mon_bounce_fire, pos_, time_);
	break;	
	case MWK_MON_SNIPER:
		temp = new Sniper(rifle__mon_sniper, pos_, time_);
	break;
	case MWK_MON_ROBOT_MINIGUN:
		temp = new Double_pistol(rifle__mon_robot_minigun, pos_, time_);
	break;
	case MWK_MON_ROBOT_BAZOOKA:
		temp = new Rifle(rifle__mon_robot_bazooka, pos_, time_);
	break;
	case MWK_MON_ROBOT_GRENADE:
		temp = new Grenade_gun(rifle__mon_robot_grenade, pos_, time_);
	break;
	case MWK_NO_WEAPON:
		temp = new Water(rifle__no_weapon, pos_, time_);
	break;
	}
	temp->SetBullet((int)(temp->GetMaxBullet()*bullet_));
	return temp;
}