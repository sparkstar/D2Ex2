#ifndef D2STRUCTS_H__
#define D2STRUCTS_H__

#include "D2DataTables.h"

struct UnitAny;
struct ClientInfo;
struct PlayerData;
struct ItemData;
struct MonsterData;
struct ObjectData;
struct Act;
struct AutoMapLayer;
struct ActMisc;
struct Path;
struct ItemPath;
struct ObjectPath;
struct StatList;
struct Inventory;
struct Light;
struct Info;
struct Skill;
struct Damage;
struct Game;
struct ClientData;
struct Waypoint;
struct QuestInfo;
struct Room1;
struct Room2;
struct RoomTile;
struct Level;
struct PresetUnit;
struct ObjectTxt;
struct Control;
struct EditBox;
struct Image;
struct AnimImage;
struct TextBox;
struct ScrollBar;
struct Button;
struct List;
struct Arena;
struct CellContext;

struct fnDriverCallbacks
{
	BOOL(__fastcall *InitWindow)(HINSTANCE); // 0
	BOOL(__fastcall *InitPerspective)(int * fPerspective, int * _1); // 1
	BOOL(__fastcall *Release)(); // 2
	BOOL(__fastcall *Init)(HANDLE hWnd, int nResolution); // 3
	BOOL(__fastcall *Shutdown)(); // 4
	BOOL(__fastcall *EndCutscene)(HANDLE hWnd, int nResolution, int); // 5
	BOOL(__fastcall *BeginScene)(BOOL bClear, BYTE nRed, BYTE nGreen, BYTE nBlue); // 6
	BOOL(__fastcall *EndScene1)(); // 7
	BOOL(__fastcall *EndScene2)(); // 8
	BOOL(__fastcall *ResizeWin)(HANDLE HWND, int bResolution); // 9
	BOOL(__fastcall *GetBackBuffer)(BYTE* pBuffer); // 10
	BOOL(__fastcall *ActivateWindow)(int Unk, int Contrast); // 11
	BOOL(__fastcall *SetOption)(int nOption, int nValue); // 12
	BOOL(__fastcall *BeginCutscene)(); // 13
	BOOL(__fastcall *PlayCutscene)(const char* szFile, int nResolution, void *pfframe); // 14
	BOOL(__fastcall *CheckCutscene)(); // 15
	BOOL(__fastcall *DecodeSmacker)(const char *szsmacker, BYTE *pbuffer, int nVersion); // 16
	BOOL(__fastcall *PlaySmacker)(void *pcontext); // 17
	BOOL(__fastcall *CloseSmacker)(void *pcontext); // 18
	int(__fastcall *GetRenderStats)(); // 19
	void(__fastcall *GetScreenSize)(int *pwidth, int *pheight); // 20
	BOOL(__fastcall *SetScaleFactor)(); // 21
	BOOL(__fastcall *SetGamma)(int nGamma); // 22
	BOOL(__fastcall *CheckGamma)(); // 23
	BOOL(__fastcall *SetPerspectiveScale)(); // 24
	BOOL(__fastcall *AdjustPerspective)(int nXpos, int nYpos, int nBais, int *pxadjust, int *pyadjust); // 25
	BOOL(__fastcall *ScalePerspectivepos)(int nXpos, int nYpos, int nAngle, int *pxpos, int *pypos, BOOL bOrder); // 26
	BOOL(__fastcall *SetDefperspectivefactor)(); // 27
	BOOL(__fastcall *SetPalette)(BYTE* pPalette); // 28
	BOOL(__fastcall *SetPalettetable)(BYTE** pPalette); // 29
	BOOL(__fastcall *SetGlobalLight)(BYTE nRed, BYTE nGreen, BYTE nBlue); // 30
	BOOL(__fastcall *DrawGroundTile)(void* pTile, DWORD** pLight, int nXpos, int nYpos, int nWorldXpos, int nWorldYpos, BYTE nAlpha, int nScreenPanels, void* pTileData); // 31
	BOOL(__fastcall *DrawPerspectiveImage)(CellContext* pData, int nXpos, int nYpos, DWORD dwGamma, int nDrawMode, int nScreenMode, BYTE* pPalette); // 32
	BOOL(__fastcall *DrawImage)(CellContext* pData, int nXpos, int nYpos, DWORD dwGamma, int nDrawMode, BYTE* pPalette); // 33
	BOOL(__fastcall *DrawShiftedImage)(CellContext* pData, int nXpos, int nYpos, DWORD dwGamma, int nDrawMode, int nGlobalPaletteShift); // 34
	BOOL(__fastcall *DrawVerticalCropImage)(CellContext* pData, int nXpos, int nYpos, int nSkipLines, int nDrawLines, int nDrawMode); // 35
	BOOL(__fastcall *DrawShadows)(CellContext* pData, int nXpos, int nYpos); // 36
	BOOL(__fastcall *DrawImageFast)(CellContext* pData, int nXpos, int nYpos, BYTE nPaletteIndex); // 37
	BOOL(__fastcall *DrawClippedImage)(CellContext* pData, int nXpos, int nYpos, void* pCropRect, int nDrawMode); // 38
	BOOL(__fastcall *DrawWallTile)(void* pTile, int nXpos, int nYpos, DWORD** pLight, int nScreenPanels, BYTE nAlpha); // 39
	BOOL(__fastcall *DrawRoofTile)(void* pTile, int nXpos, int nYpos, DWORD** pLight, int nScreenPanels, BYTE nAlpha); // 40
	BOOL(__fastcall *DrawVisTile)(void* pTile, int nXpos, int nYpos, int nDrawMode, int nScreenPanels); // 41
	BOOL(__fastcall *DrawRect)(RECT *Prect, BYTE nPaletteIndex); // 42
	BOOL(__fastcall *DrawRectEx)(RECT *Prect, BYTE nPaletteIndex); // 43
	BOOL(__fastcall *DrawSolidRect)(RECT *Prect, BYTE nPaletteIndex); // 44
	BOOL(__fastcall *DrawSolidSquare)(RECT *Prect, BYTE nPaletteIndex, int nSize); // 45
	BOOL(__fastcall *DrawSolidRectEx)(int nXStart, int nYStart, int nXEnd, int nYEnd, DWORD dwColor, int nDrawMode); // 46
	BOOL(__fastcall *DrawSolidRectAlpha)(int nXStart, int nYStart, int nXEnd, int nYEnd, DWORD dwColor, BYTE nAlpha); // 47
	BOOL(__fastcall *DrawLine)(int nXStart, int nYStart, int nXEnd, int nYEnd, BYTE nColor, BYTE nAlpha); // 48
	BOOL(__fastcall *ClearScreen)(BOOL bPartial); // 49
	BOOL(__fastcall *DrawString)(int nXpos, int nYpos, const char *Szformat, ...); // 50
	BOOL(__fastcall *DrawLight)(DWORD *plight, DWORD *pplayerlight, int nXpos, int nYpos); // 51
	BOOL(__fastcall *DebugFillBackBuffer)(int xPos, int yPos); // 52
	BOOL(__fastcall *ClearCaches)(); // 53
};

struct D2RECT
{
	DWORD left;
	DWORD top;
	DWORD right;
	DWORD bottom;
};

#pragma pack(push, 1)
struct GameView
{
	DWORD dwFlags;
	D2RECT ViewRadius;
	D2RECT ToCheck;
	DWORD _1;
	DWORD _2;
	DWORD _3;
	DWORD _4;
	DWORD _5;
	DWORD _6;
	BYTE _7[60000];
	DWORD _8;
	BYTE _9[8];
	DWORD _10;
	BYTE _11[4];
	DWORD _12;
	DWORD _13[2];
};
#pragma pack(pop)

struct ItemConfig
{
	int Code;
	int	Quality;
	int Color;
	int Type;
};

struct PacketData
{
	DWORD ClientID;
	BYTE aPacket[510];
};

struct COORDS
{
	unsigned short x;
	unsigned short y;
};

#pragma pack(push, 1)

struct KeyBinding //size 0xA
{
	DWORD nHotkey; // 0x00
	WORD wKey;	 // 0x04
	BOOL bPrimary;// 0x06
};

struct KeyConfigEntry //size 0xA
{
	DWORD dwEntryNo; //0x00
	WORD wLocaleNo; //0x04
	wchar_t* wText; //0x06
};

struct StormMsg
{
	HWND hWnd;
	UINT Msg;
	WPARAM wParam;
	LPARAM lParam;
	DWORD hiWParam16; // wParam shifted by 16
	BOOL _1;
	BOOL _2;
	BOOL _3;
};


struct sMsg	//size 0x0C
{
	DWORD MsgType;	//0x00   ,0 = WM_MSG , 1 = COMMAND(?), 2 = KEY_UP, 3 = KEY_DOWN
	union {
		WPARAM wParam;	//0x04
		DWORD	wKey;		//0x04
	};
	void(__stdcall *fnCallBack)(StormMsg *);	//0x08
};

#pragma pack(pop)


struct UiCallArray
{
	void(__cdecl *OnKeyDown)();
	void(__cdecl *OnKeyUp)();
	BOOL bOverride;
};


struct SpellStrc	//size 0x1C  // Valid for 22 -> on target & 21 -> on xy
{
	DWORD SkillId;	//0x00
	DWORD UnitId;		//0x04
	DWORD xPos;		//0x08 //Also TargetType
	DWORD yPos;		//0x0C //Also TargetId
	DWORD _1;			//0x10
	DWORD _2;			//0x14
	DWORD _3;			//0x18
};

struct BitBuffer
{
   unsigned char *pBuffer;			//0x00
   unsigned int bitsInBuffer;		//0x04
   unsigned int bufferPos;			//0x08
   unsigned int bitsAtPos;			//0x0C num bits already read or written at cur pos
   unsigned int unk;				//0x10 could be a bit bucket
};


struct COORDS
{	
	unsigned short x;
	unsigned short y;
};


struct RoomTile {
	DWORD _1;						//0x00
	Room2* pRoom2;					//0x04
	RoomTile* pNext;				//0x08
	DWORD *nNum;					//0x0C
};

struct SpellStrc	//size 0x1C  // Valid for 22 -> on target & 21 -> on xy
{
  DWORD SkillId;	//0x00
  DWORD UnitId;		//0x04
  DWORD xPos;		//0x08 //Also TargetType
  DWORD yPos;		//0x0C //Also TargetId
  DWORD _1;			//0x10
  DWORD _2;			//0x14
  DWORD _3;			//0x18
};

struct CollMap {
	DWORD dwPosGameX;				//0x00
	DWORD dwPosGameY;				//0x04
	DWORD dwSizeGameX;				//0x08
	DWORD dwSizeGameY;				//0x0C
	DWORD dwPosRoomX;				//0x10
	DWORD dwPosRoomY;				//0x14
	DWORD dwSizeRoomX;				//0x18
	DWORD dwSizeRoomY;				//0x1C
	WORD *pMapStart;				//0x20
	WORD *pMapEnd;					//0x22
};

#pragma pack(push, 1)

struct KeyBinding //size 0xA
{
  DWORD nHotkey; // 0x00
  WORD wKey;	 // 0x04
  BOOL bPrimary;// 0x06
};

struct KeyConfigEntry //size 0xA
{
 DWORD dwEntryNo; //0x00
  WORD wLocaleNo; //0x04
  wchar_t* wText; //0x06
};

struct StormMsg
{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  DWORD hiWParam16; // wParam shifted by 16
  BOOL _1;
  BOOL _2;
  BOOL _3;
};


struct StaticPath // size 0x20
{
  Room1 *pRoom1;		//0x00
  DWORD xOffset;		//0x04
  DWORD yOffset;		//0x08
  DWORD xPos;			//0x0C
  DWORD yPos;			//0x10
  DWORD _1[2];			//0x14
  DWORD dwFlags;		//0x1C
};

struct sMsg	//size 0x0C
{
  DWORD MsgType;	//0x00   ,0 = WM_MSG , 1 = COMMAND(?), 2 = KEY_UP, 3 = KEY_DOWN
  union {
  WPARAM wParam;	//0x04
  DWORD	wKey;		//0x04
  };
  void (__stdcall *fnCallBack)(StormMsg *);	//0x08
};

#pragma pack(pop)

struct pMsg
{
 pMsg* pMsgNext;
 BYTE aPacket[510];
};

struct D2PacketTable //(0x6FB8BC30 + (4 *(0xPacket*3)))
{
	BOOL  (__fastcall *CallBack)(BYTE* aPacket);
	int PacketLen;
	BOOL (__fastcall *CallBack2)(UnitAny * ptUnit, BYTE* aPacket);
};


struct HoverText	//size 0x110
{
DWORD dwDisplayTime;	//0x00	8 * strlen + 125
DWORD dwExpireTime;		//0x04	DisplayTime+CurrentTick;
DWORD dwLangId;			//0x08
DWORD _1;				//0x0C	Unused?
char szMsg[255];		//0x10
};

struct ChatMsg		//size 0x2C
{
wchar_t* wMsg;			//0x00
void* _1;				//0x04
//...
};

struct Inventory
{
	DWORD dwSignature;				//0x00
	BYTE* pMemPool;					//0x04
	UnitAny* pOwner;				//0x08
	UnitAny* pFirstItem;			//0x0C
	UnitAny* pLastItem;				//0x10
	DWORD _1[2];					//0x14
	DWORD dwLeftItemUid;			//0x1C
	UnitAny* pCursorItem;			//0x20
	DWORD dwOwnerId;				//0x24
	DWORD dwItemCount;				//0x28
	DWORD _2[4];					//0x2C
	DWORD CorpseNumber;				//0x3C
};

struct ItemData {
	DWORD QualityNo;		//0x00
	DWORD LowSeed;			//0x04
	DWORD HighSeed;			//0x08
	DWORD OwnerID;			//0x0C
	DWORD InitSeed;			//0x10
	DWORD CommandFlags;		//0x14
	DWORD ItemFlags;		//0x18
	DWORD _1[2];			//0x1C
	DWORD ActionStamp;		//0x24
	DWORD FileIndex;		//0x28
	DWORD ItemLevel;		//0x2C
	WORD ItemFormat;		//0x30
	WORD RarePrefix;		//0x32
	WORD RareSutfix;		//0x34
	WORD AutoPrefix;		//0x36
	WORD MagicPrefix[3];	//0x38
	WORD MagicSutfix[3];	//0x3E
	BYTE BodyLoc;		    //0x44					// location on body = xpos of item (only if on body) (spread)
	BYTE InvPage;			//0x45					// 0 = inventory,  3= cube, 4=stash (spread)
	BYTE _2[2];				//0x46
	BYTE EarLvl;			//0x48
	BYTE InvGfxIdx;			//0x49
	char szPlayerName[16];	//0x4A
	BYTE _3[2];				//0x5A
	Inventory *pNodeInv;	//0x5C
	DWORD _4;				//0x60
	UnitAny* pNextItem;		//0x64
	BYTE NodePos;			//0x68
	BYTE NodePosOther;		//0x69
};

struct Act
{
	DWORD _1;						//0x00
	void *pEnviroment;				//0x04
	ActMisc* pMisc;					//0x08
	Room1* pRoom1;					//0x0C
	DWORD _2;						//0x10
	DWORD dwAct;					//0x14
	DWORD pfnCallBack;				//0x18
	DWORD _3[13];					//0x1C
	void * pMemPool;				//0x50
};

struct ActMisc
{
	void* _1;						//0x00
	DWORD _2[31];					//0x04
	DWORD pfnCallBack;				//0x80
	Act* pAct;						//0x84
	DWORD dwBossTombLevel;			//0x88
	DWORD _3[248];					//0x8C There's at least 1 Room1 in here, leaving undefined for now
	Level* pLevelFirst;				//0x46C
	DWORD _4[2];					//0x470
	DWORD dwStaffTombLevel;			//0x478	
};

struct AutoMapCell
{
	DWORD fSaved;					//0x00
	WORD nCellNo;					//0x04
	WORD xPixel;					//0x06
	WORD yPixel;					//0x08
	WORD wWeight;					//0x0A
	AutoMapCell* pLess;				//0x0C
	AutoMapCell* pMore;				//0x10
};

struct AutoMapLayer
{
	DWORD nLayerNo;					//0x00
	DWORD fSaved;					//0x04
	AutoMapCell* pFloors;			//0x08
	AutoMapCell* pWalls;			//0x0C
	AutoMapCell* pObjects;			//0x10
	AutoMapCell* pExtras;			//0x14
	AutoMapLayer* pNextLayer;		//0x18
};

struct AutoMapLayer2
{
	DWORD _1[2];					//0x00
	DWORD nLayerNo;					//0x08
};

struct PresetUnit
{
	DWORD _1[2];					//0x00
	DWORD dwPosY;					//0x08
	DWORD dwClassId;				//0x0C
	DWORD _2[1];					//0x10
	PresetUnit* pPresetNext;		//0x14
	DWORD dwPosX;					//0x18
	DWORD dwType;					//0x1C
};

struct Room1
{
	DWORD dwSeed[2];				//0x00
	DWORD dwXStart;					//0x08
	DWORD dwYStart;					//0x0C
	DWORD dwXSize;					//0x10
	DWORD dwYSize;					//0x14
	DWORD _1[7];					//0x18
	Room1** pRoomsNear;				//0x34
	Room2* pRoom2;					//0x38
	UnitAny* pUnitFirst;			//0x3C
	DWORD _2[6];					//0x40
	void* _1s;						//0x58
	DWORD _3;						//0x5c
	CollMap* Coll;					//0x60
	DWORD _4[2];					//0x64
	Act* pAct;						//0x6C
	DWORD _5;						//0x70
	Room1* pRoomNext;				//0x74
	INT nUnknown;					//0x78
	DWORD dwRoomsNear;				//0x7C
};

struct Room2
{
	RoomTile* pRoomTiles;			//0x00
	DWORD _1;						//0x04
	DWORD dwPresetType;				//0x08
	DWORD _2;						//0x0C
	DWORD dwRoomsNear;				//0x10
	DWORD _3[2];					//0x14
	Level* pLevel;					//0x1C
	DWORD dwPosX;					//0x20
	DWORD dwPosY;					//0x24
	DWORD dwSizeX;					//0x28
	DWORD dwSizeY;					//0x2C
	Room2* *pRoom2Near;				//0x30
	PresetUnit* pPreset;			//0x34
	Room2* pRoom2Next;				//0x38
	DWORD _4[34];					//0x3C
	Room2* pRoom2Prev;				//0xC4
	Room2* pRoom2Other;				//0xC8
	DWORD _5;						//0xCC
	DWORD dwSeed[2];				//0xD0
	DWORD _6;						//0xD8
	DWORD* pType2Info;				//0xDC
	DWORD _7[2];					//0xE0
	Room1* pRoom1;					//0xE8
};

struct Level
{
	DWORD _1;						//0x00
	DWORD dwPosX;					//0x04
	DWORD dwPosY;					//0x08
	DWORD dwSizeX;					//0x0C
	DWORD dwSizeY;					//0x10
	DWORD dwLevelNo;				//0x14
	DWORD _2[120];					//0x18
	DWORD dwSeed[2];				//0x1F8
	DWORD _3;						//0x200
	Room2* pRoom2First;				//0x204
	ActMisc* pMisc;					//0x208
	DWORD _4[8];					//0x20C
	Level* pNextLevel;				//0x22C
};

struct Path {
	WORD xOffset;					//0x00
	WORD xPos;						//0x02
	WORD yOffset;					//0x04
	WORD yPos;						//0x06
	DWORD _1[2];					//0x08
	WORD xTarget;					//0x10
	WORD yTarget;					//0x12
	DWORD _2[2];					//0x14
	Room1 *pRoom1;					//0x1C
	Room1 *pRoomUnk;				//0x20
	DWORD _3[3];					//0x24
	UnitAny *pUnit;					//0x30
	DWORD dwFlags;					//0x34
	DWORD _4;						//0x38
	DWORD dwPathType;				//0x3C
	DWORD dwPrevPathType;			//0x40
	DWORD dwUnitSize;				//0x44
	DWORD _5[4];					//0x48
	UnitAny *pTargetUnit;			//0x58
	DWORD dwTargetType;				//0x5C
	DWORD dwTargetId;				//0x60
	BYTE bDirection;				//0x64
};

struct Attack
{
   Game * pGame;				//0x00
   DWORD * pDifficultyLevelsTxt;//0x04
   UnitAny* pAttacker;			//0x08
   UnitAny* pDefender;			//0x0C
   DWORD dwAttackerType;		//0x10 (eType of the attacker, this is used so hirelings are treated like players)
   DWORD dwDefenderType;		//0x14 (eType of the defender, this is used so hirelings are treated like players)
   Damage *ptDamage;			//0x18
   DWORD _1;					//0x1C
   DWORD DamageReduced256;		//0x20
   DWORD MagDmgReduced256;		//0x24
};

struct PlayerData { //size 0x16C
	char szName[16];				//0x00
	QuestInfo *pNormalQuest;		//0x10
	QuestInfo *pNightmareQuest;		//0x14
	QuestInfo *pHellQuest;			//0x18
	Waypoint *pNormalWaypoint;		//0x1c
	Waypoint *pNightmareWaypoint;	//0x20
	Waypoint *pHellWaypoint;		//0x24
	DWORD _1[3];					//0x28
	Arena* pArena;					//0x34
	DWORD _1b;						//0x38
	DWORD _2[13];					//0x3C
	DWORD dwRightSkill;				//0x70
	DWORD dwLeftSkill;				//0x74
	DWORD dwRightSkillFlags;		//0x78
	DWORD dwLeftSkillFlags;			//0x7C
	DWORD dwSwitchRightSkill;		//0x80
	DWORD dwSwitchLeftSkill;		//0x84
	DWORD dwSwitchRightSkillFlags;	//0x88
	DWORD dwSwitchLeftSkillFlags;	//0x8C
	DWORD _3[3];					//0x90
	ClientData* pClientData;		//0x9C
	DWORD _6[50];					//0x100
	DWORD GameFrame;				//0x168
};

struct ObjectData
{
	void* pObjectTxt;				//0x00
	BYTE InteractType;				//0x04
	BYTE _1[3];						//0x05
	DWORD _2[8];					//0x08
	char szOwner[16];				//0x28
};

struct AiGeneral
{
  DWORD SpecialState;										  //0x00 - stuff like terror, confusion goes here
  void* ( __fastcall * fpAiFunction)(Game*,UnitAny*,DWORD*);  //0x04 - the primary ai function to call
  DWORD AiFlags;											  //0x08
  DWORD OwnerGUID;											  //0x0C- the global unique identifier of the boss or minion owner
  DWORD eOwnerType;											  //0x10 - the unit type of the boss or minion owner
  DWORD dwArgs[3];											  //0x14 - three dwords holding custom data used by ai func to store counters (etc)
  DWORD* pCmdCurrent;										  //0x20
  DWORD *pCmdLast;											  //0x24
  Game* pGame;												  //0x28
  DWORD OwnerGUIDEq;										  //0x2C - the same as +008
  DWORD eOwnerTypeEq;										  //0x30 - the same as +00C
  DWORD* pMinionList;										  //0x34 - list of all minions, for boss units (SetBoss in MonStats, Unique, SuperUnique etc)
  DWORD _1;													  //0x38
  DWORD eTrapNo;											  //0x3C - used by shadows for summoning traps (so they stick to one type usually)
};

struct MonsterData {
	DWORD* pMonStatsTxt;					//0x00
	BYTE Components[16];					//0x04
	WORD NameSeed;							//0x14
	struct
	{
		BYTE fUnk:1;
		BYTE fNormal:1;
		BYTE fChamp:1;
		BYTE fBoss:1;
		BYTE fMinion:1;
	};				//0x16
	BYTE dwLastMode;				//0x17
	DWORD dwDuriel;					//0x18
	BYTE anEnchants[9];				//0x1C
	BYTE _1;						//0x25
	WORD wUniqueNo;					//0x26
	AiGeneral* pAiGeneral;			//0x28
	DWORD pAiParams;				//0x2C
	DWORD pAiUnk;					//0x30
	DWORD _2[3];					//0x34
	DWORD dwNecroPet;				//0x40
	DWORD _3[3];					//0x44
	DWORD pVision;					//0x50
	DWORD AiState;					//0x54
	DWORD LvlNo;					//0x58
	DWORD SummonerFlags;			//0x5C
};


struct Stat // size 0x8
{
	WORD wSubIndex;					//0x00
	WORD wStatIndex;				//0x02
	DWORD dwStatValue;				//0x04
};

struct StatEx	//size 0x8
{
	Stat* pStat;					//0x00 An Array[wStatCount]
	WORD wStatCount;				//0x04
	WORD wnBitSize;					//0x06
};

struct StatListEx  //size 0x64
{
	DWORD pMemPool;					//0x00
	DWORD _1;						//0x04
	DWORD dwOwnerType;				//0x08
	DWORD dwOwnerId;				//0x0C
	DWORD dwListFlags;				//0x10
	DWORD _2[4];					//0x14
	StatEx BaseStats;				//0x24
	StatList* pLastList;			//0x2C - pointer to the last pStatList of the StatListEx owner (aka item owner in case list ex belongs to item)
	DWORD _3;						//0x30
	StatListEx* pListEx;			//0x34 - pStatListEx - pointer to owner StatListEx (if this one is owned by a item, this points to the item owners list)
	StatListEx* pNextListEx;		//0x38
	StatList *pMyLastList;			//0x3C
	StatList *pMyStats;				//0x40
	UnitAny* pOwner;				//0x44
	StatEx FullStats;				//0x48
	StatEx ModStats;				//0x50
	BYTE* StatFlags;				//0x58 pt to an  array
	void *fpCallBack;				//0x5C
	Game* ptGame;					//0x60
};

struct StatList { //size 0x3C
	void* pMemPool;					//0x00
	UnitAny* pUnit;					//0x04
	DWORD dwOwnerType;				//0x08
	DWORD dwOwnerId;				//0x0C
	DWORD dwFlags;					//0x10
	DWORD dwStateNo;				//0x14
	DWORD ExpireFrame;				//0x18
	DWORD SkillNo;					//0x1C
	DWORD sLvl;						//0x20
	StatEx Stats;					//0x24
	StatList *pPrevLink;			//0x2C
	StatList *pNextLink;			//0x30
	StatList *pPrev;				//0x34
	void *fpStatRemove;				//0x38
	StatList *pNext;				//0x3C
};

struct GfxDrawOffset
{
	DWORD DrawFlags;				//0x00
	DWORD xPos;						//0x04
	DWORD yPos;						//0x08
	DWORD zPos;						//0x0C
	struct
	{
	DWORD xOffset;				//0x00
	DWORD yOffset;				//0x04
	DWORD zOffset;				//0x08
	} Offsets[3];					//0x10
};

struct GfxInfo
{	
	DWORD _1;						//0x00
	DWORD _2;						//0x04
	DWORD _3;						//0x08
	DWORD _4;						//0x0C
	DWORD _5;						//0x10
	DWORD _6;						//0x14
	DWORD _7;						//0x18
	DWORD _8;						//0x1C
	DWORD _9;						//0x20
	DWORD _10;						//0x24
	DWORD _11;						//0x28
	DWORD _12;						//0x2C
	GfxDrawOffset*  pGfxDrawOffsets;//0x30
	DWORD _13;						//0x34
	DWORD nPalShiftIdx;				//0x38
};

struct UnitAny  // CLIENT SIDE
{
	DWORD dwType;					//0x00
	DWORD dwClassId;				//0x04
	void* pMemPool;					//0x08
	DWORD dwUnitId;					//0x0C
	DWORD dwMode;					//0x10
	union
	{
		PlayerData*  pPlayerData;
		ItemData*    pItemData;
		MonsterData* pMonsterData;
		ObjectData*  pObjectData;
	};								//0x14
	DWORD dwAct;					//0x18
	Act * pAct;						//0x1C
	DWORD dwSeed[2];				//0x20
	DWORD dwInitSeed;				//0x28
	union
	{
		Path*       pPath;
		StaticPath*   pStaticPath;
	};								//0x2C
	DWORD _3[5];					//0x30
	DWORD dwGfxFrame;				//0x44
	DWORD dwFrameRemain;			//0x48
	WORD wFrameRate;				//0x4C
	WORD _4;						//0x4E
	DWORD* pAnimData;				//0x50
	GfxInfo* pGfxInfo;				//0x54
	GfxInfo* pGfxInfo2;				//0x58
	StatListEx*  pStatsEx;			//0x5C
	Inventory* pInventory;			//0x60
	Light * pLight;					//0x64
	DWORD  dwLightRadious;			//0x68
	WORD   nPalShiftIdx;			//0x6C
	WORD UpdateType;				//0x6E
	UnitAny *pUpdateUnit;			//0x70
	DWORD *pQuestRecord;			//0x74
	BYTE bSparkyChest;				//0x78
	BYTE _6a[3];					//0x79
	DWORD pTimerArgs;				//0x7C
	DWORD dwSoundSync;				//0x80
	DWORD _7[2];					//0x84
	WORD wX;						//0x8C
	WORD wY;						//0x8E
	DWORD pEvent;					//0x90
	DWORD dwOwnerType;				//0x94
	DWORD dwOwnerId;				//0x98
	DWORD _8[2];					//0x9C
	HoverText* pHoverText;			//0xA4
	Info* pInfo;					//0xA8
	void* ptCombat;					//0xAC
	DWORD dwLastHitClass;			//0xB0
	DWORD _9[4];					//0xB4
	DWORD dwFlags;					//0xC4
	DWORD dwFlags2;					//0xC8
	DWORD _10[5];					//0xCC
	UnitAny* pChangedNext;			//0xE0
	UnitAny*  pRoomNext;			//0xE4
	UnitAny*  pListNext;			//0xE8
	pMsg* pMsgFirst;				//0xEC
	pMsg* pMsgLast;					//0xF0
};

struct SkillInfo
{
	WORD wSkillId;					//0x00
	BYTE _1[2];						//0x02
	DWORD SkillFlag;				//0x04
};

struct Skill
{
	SkillsTxt* pSkillsTxt;			//0x00
	Skill* pNextSkill;				//0x04
	DWORD SkillMode;				//0x08
	DWORD _1[7];					//0x0C
	DWORD dwSkillLevel;				//0x28
	DWORD _2[2];					//0x2C
	DWORD dwFlags;					//0x30
};

struct Info
{
	DWORD* pMemPool;			//0x00
	Skill* pFirstSkill;			//0x04
	Skill* pLeftSkill;			//0x08
	Skill* pRightSkill;			//0x0C
};

struct BnetData
{
	DWORD Id;					//0x00
	DWORD Id2;					//0x04
	DWORD Unk0;					//0x08
	DWORD Unk1;					//0x0C
	DWORD Unk2;					//0x10
	DWORD Id3;					//0x14
	WORD Unk3;					//0x18
	char GameName[22];			//0x1A
	char GameIp[16];			//0x30
	DWORD Unk4[16];				//0x40
	DWORD Id4;					//0x80
	DWORD Unk6;					//0x84
	char AccountName[48];		//0x88
	char PlayerName[24];		//0xB8
	char RealmName[8];			//0xD0
	BYTE Unk7[273];				//0xD8
	BYTE CharType;				//0x1E9 00 - 06
	BYTE CharFlags;				//0x1EA LoD, Ladder, Hc Flags + 4 Unk
	BYTE MaxDifficulty;			//0x1EB
	BYTE Unk8[31];				//0x1EC
 	BYTE Difficulty;			//0x20B Works only when creating, not joining game
	DWORD *pUnk9;				//0x20C
	DWORD Unk10[3];				//0x210
	WORD  Unk11;				//0x21C
	BYTE  bDrawBuild;			//0x21E
	BYTE BnetCallBack[4];		//0x21F Func Array with funcs related to bnet
	BYTE Unk12;					//0x223
	WORD Unk13;					//0x224
	BYTE Unk14;					//0x226
	char RealmName2[24];		//0x227
	char GamePass[24];			//0x23F
	char GameDesc[32];			//0x257
};


struct GfxCell {
	DWORD flags;					//0x00
	DWORD width;					//0x04
	DWORD height;					//0x08
	DWORD xoffs;					//0x0C
	DWORD yoffs;					//0x10
	DWORD _2;						//0x14
	DWORD lpParent;					//0x18
	DWORD length;					//0x1C
	BYTE cols;						//0x20
};

struct CellFile {
	DWORD dwVersion;				//0x00
	struct {
		WORD dwFlags;
		BYTE mylastcol;
		BYTE mytabno:1;
	};								//0x04
	DWORD eFormat;					//0x08
	DWORD termination;				//0x0C
	DWORD numdirs;					//0x10
	DWORD numcells;					//0x14
	GfxCell *cells[255];			//0x18
};

struct CellContext		//size 0x48
{
	DWORD direction;				//0x00
	GfxCell* hCell;					//0x04
	CellFile* pCellFile;			//0x08
	DWORD _1;						//0x0C
	DWORD _2;						//0x10
	DWORD _3;						//0x14
	DWORD _4;						//0x18
	BYTE _5;						//0x1C
	BYTE nComponents;				//0x1D
	WORD _6;						//0x1E
	DWORD _7;						//0x20
	DWORD _8;						//0x24 >=7
	DWORD _9;						//0x28
	DWORD _10;						//0x2C
	struct
		{
		DWORD dwUnitToken;			//0x30
		DWORD dwCompToken;			//0x34
		DWORD dwSomeToken;			//0x38
		DWORD _3;					//0x3C
		DWORD dwWClassToken;		//0x40
		} tUnitInfo;
	DWORD nCellNo;					//0x44
};

struct RosterInfo
{
DWORD dwUnitId;
DWORD dwPartyFlags;  //0x02 - ignore, 0x04 - squelch, 0x08 hostile
RosterInfo *ptNext;
};

struct RosterPet //size 0x34
{
	DWORD dwMonStatsIdx;//0x00
	DWORD dwPetTypeIdx;	//0x04
	DWORD dwUnitId;		//0x08
	DWORD dwOwnerId;	//0x0C
	DWORD _4;			//0x10
	DWORD _5;			//0x14
	DWORD _6;			//0x18
	DWORD LifePercent;	//0x1C
	DWORD bDrawIcon;	//0x20
	void* _8;			//0x24
	DWORD _9;			//0x28
	DWORD _10;			//0x2C
	RosterPet* ptNext;	//0x30
};

struct RosterBody
{
DWORD CorpseId;
RosterBody *ptPrevCorpse;
};

struct RosterUnit {
	char szName[16];				//0x00
	DWORD dwUnitId;					//0x10
	DWORD dwPartyLife;				//0x14
	DWORD KillCount;				//0x18
	DWORD dwClassId;                //0x1C
	WORD wLevel;					//0x20
	WORD wPartyId;  				//0x22
	DWORD dwLevelId;                //0x24
	DWORD Xpos;						//0x28
	DWORD Ypos;						//0x2C
	DWORD dwPartyFlags;				//0x30
	RosterInfo** ptInfo;			//0x34
	RosterBody* ptBody;				//0x38
	DWORD _6[10];					//0x3C
	WORD _7;						//0x64
	char szName2[16];				//0x66
	WORD _8;						//0x76
	DWORD _9[2];					//0x78
	RosterUnit * pNext;				//0x80
};

struct cStylePrefs
{
	DWORD dwFontType;	//0x00
	DWORD dwColor;		//0x04
};

struct cTextPrefs
{
	DWORD dwPosX;		//0x00
	DWORD dwPosY;		//0x04
	DWORD dwSizeY;		//0x08
};


struct ControlText // size = 0x20
 {
	wchar_t* wText[5]; 	//0x00 for each field
	DWORD dwColor;		//0x14
	DWORD dwAlign;		//0x18
	ControlText* pNext;	//0x1C
};

struct ControlMsg {
Control *pControl;
UINT uMsg;
WPARAM wParam;
};

struct Control {
     DWORD dwType;                                                          //0x00
     CellFile *pCellFile;                                                   //0x04
     DWORD dwState;                                                         //0x08 0x05 - enabled, 0x04 - disabled, 0x03-0x00 - not visible
     DWORD dwPosX;                                                          //0x0C
     DWORD dwPosY;                                                          //0x10
     DWORD dwSizeX;                                                         //0x14
     DWORD dwSizeY;                                                         //0x18
     BOOL  (__fastcall *Draw)(Control*);								    //0x1C
     BOOL  (__fastcall *DrawEx)(Control*);						  	        //0x20 used by timer/popup
     BOOL  (__stdcall *Push)(ControlMsg*);							        //0x24 
     BOOL  (__stdcall *Mouse)(ControlMsg*);				            		//0x28 
     BOOL  (__stdcall *ListCheck)(ControlMsg*);                          	//0x2C used only by list
     BOOL  (__stdcall *Key)(ControlMsg*);							 	    //0x30 WM_CHAR MSG
     BOOL  (__stdcall *OnPress)(Control*);		                            //0x34 User Defined
     BOOL  (__fastcall*DrawAnim)(Control*);                          		//0x38 used by animimage
     Control* pNext;                                                        //0x3C
};

struct EditBox : Control //(size 0x284)
{
//	 Control Header;														//0x00
	 DWORD dwLeftOffset;												    //0x40 
	 DWORD dwTopOffset;													    //0x44
	 DWORD dwMaxLength;                                   	                //0x48 
     DWORD dwTextOffset;	                              		            //0x4C 
     DWORD dwTextLen;														//0x50 (strlen -1)
     DWORD dwSelectEnd;                                                     //0x54
     DWORD dwSelectStart;                                                   //0x58
     wchar_t wText[256];													//0x5C
     DWORD dwCursorPos;										  			    //0x25C
     DWORD dwEditFlags;														//0x260 0x08 allows multiline
     BOOL (__stdcall *OnAccept)(char*);										//0x264
	 BOOL (__stdcall *InputHandle)(Control*,DWORD len, char* Key);			//0x268
	 BOOL (__stdcall *LengthHandle)(int aNull);								//0x26C hmm weird arg =  always 0
	 cStylePrefs Style;														//0x270 
	 Control * pTabNext;													//0x278
     Control * pTabPrev;													//0x27C
	 BOOL  bLeftButtonPressed;												//0x280
};

struct TextBox : Control // (size 0xAC)
{
//	 Control Header;									//0x00
	 DWORD dwLeftOffset;								//0x40 
	 DWORD dwTopOffset;								    //0x44
     ControlText* pFirstText;                           //0x48
     ControlText* pLastText;                            //0x4C
     ControlText* pSelectedText;                        //0x50
	 DWORD dwMaxLines;									//0x54
	 DWORD dwCurrentLine;								//0x58
	 DWORD dwTextFlags;									//0x5C 0x00 - left align 0x01 - SelectBox 0x2 - center 0x4 Create ScrollBar 0x40 - scrolling from right 0x80 - scrolling from bottom
	 DWORD dwSelectedItem;								//0x60
	 DWORD dwFields;									//0x64
	 DWORD dwFieldXSize[5];								//0x68 for each field
	 DWORD dwFieldAlign[5];								//0x7C
	 ScrollBar* ptScrollBar;							//0x90
	 cStylePrefs Style;									//0x94
	 DWORD dwMaxTextWidth;								//0x9C
	 DWORD dwMaxTextHeight;								//0xA0
	 DWORD dwInterline;									//0xA4
	 DWORD dwInterline2;								//0xA8
};

struct Image : Control // (size 0x4C)
{
//	Control Header;										//0x00
	DWORD CellFrame;									//0x40
	DWORD TransLvl;										//0x44
	void* _1;											//0x48 image struct?
};

struct AnimImage : Control // 0x60
{
//	Control Header;										//0x00
	void* AnimStruct;									//0x40 pointer to struct which holds all cellfile frames
	DWORD dwAnimSpeed;									//0x44
	DWORD dwTickCount;									//0x48 creation time
	DWORD dwCurrentFrame;								//0x4C
	BOOL bisHovered;									//0x50
	DWORD dwTransLvl;									//0x54
	void (__stdcall *OnHover)(AnimImage*);				//0x58
	BOOL bisAnimation;									//0x5C
};

struct Button : Control // (size 0x274)
{
//	 Control Header;									//0x00
   	 DWORD dwButtonFlags;								//0x40 0x00 - normal 0x01 - radio 0x02 - switch 0x04 - play sound 0x20 - sth with disabled/enabled 0x40 - multi line 
	 DWORD dwIsPushed;									//0x44
     BOOL  dwIsSwitched;                                //0x48
     BOOL _1;			                                //0x4C
     DWORD dwHotKey;                             	    //0x50
     DWORD dwButtonType;                           		//0x54 0x00 - Normal Button, 0x01 - Switch Button 0x02 - Long Button
     DWORD _2;	                                        //0x58
	 DWORD dwCellFrame;                                 //0x5C
     DWORD dwFont;										//0x60  hardcoded
     wchar_t wText[256];                              	//0x64
     DWORD dwColor;										//0x264 hardcoded
	 BOOL (__stdcall *OnHover)(Button*);				//0x268
	 BOOL bisHovered;									//0x26C
	 DWORD dwStrTbl2ndLine;								//0x270
};

struct ScrollBar : Control // (size 0x60)
{
//	 Control Header;									//0x00
     BOOL bMovedUp;	                                    //0x40 
     BOOL bMovedDown;	                                //0x44
     DWORD dwScrollEntries;								//0x48
     DWORD dwScrollPosition;                            //0x4C
     DWORD dwClickStep;                                 //0x50
	 TextBox * ptParent;								//0x54
	 BOOL  bLeftButtonPressed;							//0x58
	 BOOL  (__stdcall *Unk)(ControlMsg*);				//0x5C
};

struct List : Control // (size 0x6C)
{
//	Control Header;										//0x00
	DWORD dwFont;										//0x40
	DWORD _2;											//0x44
	DWORD _3;											//0x48
	DWORD _4;											//0x4C
	DWORD _5;											//0x50
	DWORD _6;											//0x54
	DWORD _7;											//0x58
	DWORD _8;											//0x5C
	DWORD _9;											//0x60
	DWORD*_10;											//0x64
	DWORD _11;											//0x68	
};

struct D2Menu // size 0x18
{
DWORD dwEntriesNo;		//0x00
DWORD dwInterline;		//0x04
DWORD dwTextHeight;		//0x08
DWORD dwMenuOffset;		//0x0C
DWORD dwBarHeight;		//0x10
DWORD _1;				//0x14 unused?
};

struct D2MenuEntry //size 0x550
{
	DWORD dwMenuType;									 //0x00  //-1 - static text, 0 -selectable, 1- switchbar , 2- with bar, 3 - key config (added)
	DWORD dwExpansion;									 //0x04  //if set, shows only in d2exp
	DWORD dwYOffset;									 //0x08  //generated dynamicaly
	union {
		char szCellFile[260];								 //0x0C  DATA\\LOCAL\\UI\\LANG\\%s used only in LoadMenu Func
		wchar_t wItemName[130];								 //my addition
	};
	BOOL (__fastcall* EnableCheck)(D2MenuEntry*, DWORD ItemNo); //0x110 if return false, its disabled
	BOOL (__fastcall* OnPress)(D2MenuEntry*, StormMsg*);		 //0x114 28.12.11 - added StormMsg*
	BOOL (__fastcall* OptionHandle)(D2MenuEntry*);			 //0x118 called when option value is changed
	BOOL (__fastcall* ChangeHandle)(D2MenuEntry*);			 //0x11C if return true OnPress is called, and option gfx is switched
	union {
		DWORD dwMaxValue;									 //0x120
		DWORD dwSwitchesNo;									 //0x120  (max 4)
		DWORD* Bind;										 //0x120 -> KeyConfig (my add)
	};
	union {
		DWORD dwCurrentValue;								 //0x124
		DWORD dwCurrentSwitch;
		DWORD dwColor;										 //my addition ONLY for MenuType = -1, 1, 3(?)
	};
	union {
		DWORD dwBarType;									 //0x128
		DWORD dwFontType;									 //my add valid for all
	};
	union {
		char szSwitchCellFiles[4][260];						 //0x12C DATA\\LOCAL\\UI\\LANG\\%s used only in LoadMenu Func
		wchar_t wSwitchItemName[4][130];					 //my addition
	};												
	CellFile* ptCellFile;								 //0x53C
	CellFile* ptSwitchCellFile[4];						 //0x540
};


#endif