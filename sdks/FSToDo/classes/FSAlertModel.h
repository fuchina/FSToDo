//
//  FSAlertModel.h
//  myhome
//
//  Created by FudonFuchina on 2018/3/9.
//  Copyright © 2018年 fuhope. All rights reserved.
//

/*
 1.到提醒时间后就提醒；
 2.没确定点击“下次提醒”时一直提醒；
 */

#import "FSAppModel.h"
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, FSTODOType) {
    FSTODOTypeUnknown = 0,          // 未知错误情况
    FSTODOTypeByDay = 1,            // 每天提醒
    FSTODOTypeByMonth = 2,          // 每月提醒
    FSTODOTypeByYear = 3,           // 每年提醒
    FSTODOTypeByTime = 4,           // 按时间提醒
    FSTODOTypeByWeek = 5,           // 每周提醒
};

typedef NS_ENUM(NSInteger, FSWeekdayIndex) {
    FSWeekdayIndexMonday = 1,
    FSWeekdayIndexTuesday = 2,
    FSWeekdayIndexWednesday = 3,
    FSWeekdayIndexThursday = 4,
    FSWeekdayIndexFriday = 5,
    FSWeekdayIndexSaturday = 6,
    FSWeekdayIndexSunday = 7,
};

@interface FSAlertModel : FSAppModel

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy) NSString     *time;

@property (nonatomic,copy) NSString     *type;      // FSTODOType
@property (nonatomic,copy) NSString     *expitime;  // 到期时间，时间戳
@property (nonatomic,copy) NSString     *did;       // 下次提醒 timestamp，下次提醒

@property (nonatomic,copy) NSString     *content;
@property (nonatomic,copy) NSString     *done;      // 完成情况：'1'.完成  '0'：未完成

@property (nonatomic,copy) NSString     *exp;
@property (nonatomic,copy) NSString     *typeString;
@property (nonatomic,strong) UIColor    *color;

+ (NSArray<NSString *> *)tableFields;

+ (FSWeekdayIndex)weekIndexForWeekday:(NSInteger)weekday;

+ (NSString *)hansForWeekday:(NSInteger)weekday;
+ (NSString *)hansForWeekdays:(NSArray *)weekdays;

+ (NSArray *)dbDataForWeekIPs:(NSArray *)ips data:(NSArray *)data;
+ (NSArray *)dbDataForIPs:(NSArray *)ips data:(NSArray *)data;
+ (NSString *)weekTitleForIPs:(NSArray *)data;
+ (NSString *)titleForIPs:(NSArray *)data;

@end
