#ifndef CODE_80086E70_H
#define CODE_80086E70_H

#include "common_structs.h"
#include "camera.h"

void func_80086E70(s32);
void func_80086EAC(s32, s32, s16);
void func_80086EF0(s32);
void func_80086F10(s32, s32, s32);
void func_80086F60(s32);
s32  func_80086FA4(s32);
void func_80086FD4(s32);
void func_8008701C(s32, s32);
s32  func_80087060(s32, s32);
s32  func_80087104(s32, u16);
s32  func_800871AC(s32, s32);
void func_80087258(s32, s32, f32);
s32  func_80087294(s32, Player*);
s32  func_800872D8(s32, Camera*);
u16  func_80087324(s32);
s32  func_80087368(s32);
void func_800873A4(s32);
void func_800873F4(s32);
void func_80087444(s32);
void func_8008748C(s32);
void func_800874D4(s32);
void func_8008751C(s32);
void func_8008757C(s32);
void func_80087620(s32);
void func_800876A0(s32);
void func_80087710(s32);
void func_8008775C(s32);
void func_80087798(s32);
void func_800877C4(s32);
void func_800877F0(s32);
void func_8008781C(s32);
void func_80087844(s32);
f32  func_8008786C(f32, f32, f32, f32, f32);
s32  func_8008789C(s32, s32);
s32  func_80087954(s32, s32);
s32  func_80087A0C(s32, s16, s16, s16, s16);
s32  func_80087B84(s32, f32, f32);
s32  func_80087C48(s32, f32, f32, s32);
s32  func_80087D24(s32, f32, f32, f32);
s32  func_80087E08(s32, f32, f32, f32, s16, s32);
s32  func_80087F14(s32, f32, f32, f32, s16, s32);
void func_80088038(s32, f32, u16);
void func_800880DC();
void func_80088150(s32);
s32  func_80088538(s32);
s32  func_8008861C(s32);
void func_800886F4(s32);
void func_800887C0(s32);
s32  func_80088880(s32, Player*);
s32  func_800888E8(s32, Player*);
u32  func_8008896C(s32, Camera*);
s32  func_800889D4(s32, Camera*);
s32  func_80088A58(s32, Player*, f32);
s32  func_80088AC0(s32, Player*, f32, f32);
s32  func_80088B40(s32, Player*, f32);
s32  func_80088BB8(s32, Camera*, f32);
s32  func_80088C20(s32, Camera*, f32, f32);
s32  func_80088CA0(s32, Camera*, f32);
s32  func_80088D18(s32, Player*);
s32  func_80088DA4(s32, Player*);
s32  func_80088E48(s32, Player*, f32);
s32  func_80088E98(s32, Player*, f32);
f32  func_80088F54(s32, Player*);
s32  func_80088F94(s32, Player*, f32);
void func_80088FF0(Player*);
void func_8008900C(Player*);
void func_80089020(s32, f32*);
void func_800892E0(s32);
s32  func_8008A060(s32, Camera*, u16);
s32  func_8008A0B4(s32, Player*, Camera*, u16);
s32  func_8008A140(s32, Camera*, u16);
void func_8008A1D0(s32, s32, s32, s32);
void func_8008A2CC(s32, s32, u16);
u32  func_8008A364(s32, s32, u16, s32);
void func_8008A454(s32, s32, s32);
void func_8008A4CC(s32);
void func_8008A610(s32);
void func_8008A6DC(s32, f32);
void func_8008A810(s32);
void func_8008A830(s32);
void func_8008A850(s32);
s32  func_8008A870(Player*);
s32  func_8008A890(Camera*);
s32  func_8008A8B0(s16, s16);
void func_8008ABC0(s32);
void func_8008AC40(s32);
void func_8008ACC0();
void func_8008ACC8();
void func_8008ACD0();
void func_8008ACD8();
void func_8008ADC0();
void func_8008ADC8();
void func_8008AE8C();
void func_8008AE94();
void func_8008ADD0(s32, f32);
void func_8008AFE0(s32, f32);
void func_8008B018();
void func_8008B020();
void func_8008B028();
void func_8008B030();
void func_8008ACE0(s32,f32);
void func_8008B17C(s32, f32);
void func_8008B1B4();
void func_8008B1BC();
void func_8008B1C4();
void func_8008B1CC();
void func_8008B44C(s32);
void func_8008B7D4(s32, f32, f32, f32);
void func_8008B80C(s32, f32, f32, f32);
void func_8008B844(s32);
void func_8008B888(s32, u16, u16, u16);
void func_8008B8BC(s32, u16, u16, u16);
void func_8008B8F0(s32, f32, f32, f32);
void func_8008BA40(s32, s16, u16);
void func_8008BAB4(s32, s16, u16);
void func_8008BB28(s32, s16, u16);
void func_8008BB9C(s32, s16, s16, u16, u16);
void func_8008BC58(s32, s16, s16, u16, u16);
void func_8008BD14(s32, s16, s16, s16, u16, u16, u16);
void func_8008BE0C(s32, s16, u16);
void func_8008BEA4(s32, u16, u16);
void func_8008BFC0(s32);
void func_8008BF18(s32);
void func_8008C1B8();
void func_8008C1C0();

// This may be a list of tilemap flags on a per-camera basis
extern s16 D_8018CF68[];
extern s32 gPlayerCountSelection1;
extern s32 D_80183DA8;
extern s32 D_80183DC8;
extern f32 gVBlankTimer;
extern UnkActorInner D_8018C3B0;
extern Player *gPlayerOneCopy;

#endif
