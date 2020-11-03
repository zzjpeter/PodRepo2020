//
//  PhoneMacro.h
//  TooToo
//
//  Created by liuning on 15/12/21.
//  Copyright © 2015年 MoHao. All rights reserved.
//

#ifndef PhoneMacro_h
#define PhoneMacro_h

#define Is_iPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad ? YES : NO)

/* 判断设备 */
#pragma mark - 设备(屏幕)类型1 通过UIScreen
#define     IS_IPHONE4              ([UIScreen mainScreen].bounds.size.width == 320.0f && [UIScreen mainScreen].bounds.size.height == 480.0f)           // 320 * 480
#define     IS_IPHONE5              ([UIScreen mainScreen].bounds.size.width == 320.0f && [UIScreen mainScreen].bounds.size.height == 568.0f)           // 320 * 568
#define     IS_IPHONE6              ([UIScreen mainScreen].bounds.size.width == 375.0f && [UIScreen mainScreen].bounds.size.height == 667.0f)           // 375 * 667
#define     IS_IPHONE6P             ([UIScreen mainScreen].bounds.size.width == 414.0f && [UIScreen mainScreen].bounds.size.height == 736.0f)           // 414 * 736
#define     IS_IPHONEX              ([UIScreen mainScreen].bounds.size.width == 375.0f && [UIScreen mainScreen].bounds.size.height == 812.0f)
#define     IS_IPHONEXS             ([UIScreen mainScreen].bounds.size.width == 375.0f && [UIScreen mainScreen].bounds.size.height == 812.0f)
#define     IS_IPHONEXR             ([UIScreen mainScreen].bounds.size.width == 414.0f && [UIScreen mainScreen].bounds.size.height == 896.0f)
#define     IS_IPHONEXMAX           ([UIScreen mainScreen].bounds.size.width == 414.0f && [UIScreen mainScreen].bounds.size.height == 896.0f)

#define IS_IPHONEX_ALL (IS_IPHONEX || IS_IPHONEXS  || IS_IPHONEXR  || IS_IPHONEXMAX )

#pragma mark - 设备(屏幕)类型2 通过UIScreen的currentMode
#define iPhone4  [UIScreen mainScreen].bounds.size.height < 500
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size)  : NO)
#define iPhone6plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1080,1920), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)
#define iPhoneX_ ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !Is_iPad: NO)
#define iPhoneXr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size)||CGSizeEqualToSize(CGSizeMake(750, 1624), [[UIScreen mainScreen] currentMode].size)) && !Is_iPad: NO)
#define iPhoneXs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !Is_iPad: NO)
#define iPhoneXs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !Is_iPad: NO)
#define iPhoneX_ALL (iPhoneX_ || iPhoneXr || iPhoneXs == YES || iPhoneXs_Max)


/* 尺寸 */
#define IPHONEWIDTH  [UIScreen mainScreen].bounds.size.width
#define IPHONEHEIGHT  [UIScreen mainScreen].bounds.size.height
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

#define StatusHeight        (iPhoneX_ALL?44:20) //因为只系统支持版本是7.0以上，所以写死20
#define NavBarHeight        (iPhoneX_ALL?88:64)
#define TabbarHeight        (iPhoneX_ALL?83:49)
#define IPhoneXDel          (iPhoneX_ALL?24:0) //iPhoneX与其他手机顶部的高度差
#define IPhoneXDelTop       (iPhoneX_ALL?24:0)
#define IPhoneXDelBottom    (iPhoneX_ALL?34:0)
#define OnlyNavBarHeight (NavBarHeight - StatusHeight) //除去状态栏后的导航栏高度 44

//转换
#define UISCALE IPHONEWIDTH/375.0f
#define kiPhone6W 375.0
#define kiPhone6H 667.0
#define kScaleX SCREEN_WIDTH / kiPhone6W
#define kScaleY SCREEN_HEIGHT / kiPhone6H
#define kScaleW_H SCREEN_WIDTH / SCREEN_HEIGHT

/* 版本控制 */
#define CURRENT_DATA_VERSION            @"1.0.0"

/* 判断iOS版本 */

//系统版本等于多少 ==
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
//系统版本大于多少 >
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
//系统版本大于等于多少 >=
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
//系统版本小于多少 <
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
//系统版本小于等于多少 <=
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#endif /* PhoneMacro_h */
