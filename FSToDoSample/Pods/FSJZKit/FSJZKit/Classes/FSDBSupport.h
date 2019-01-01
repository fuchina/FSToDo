//
//  FSDBSupport.h
//  myhome
//
//  Created by FudonFuchina on 2017/8/26.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSDBMaster.h"
#import "FSMacro.h"
#import "FSTuple.h"

@interface FSDBSupport : NSObject

+ (NSMutableArray *)querySQL:(NSString *)sql class:(Class)cname tableName:(NSString *)tableName;
+ (NSMutableArray *)querySQL:(NSString *)sql class:(Class)cname tableName:(NSString *)tableName eachCallback:(void(^)(id model))preCount;

// 查输入当年【含】与前一年共两年
+ (NSArray<Tuple2<NSString *,NSArray<Tuple3 *> *> *> *)incomesAndcostsByMonth:(NSInteger)year table:(NSString *)table first:(NSTimeInterval)first;

// 给表增加字段
+ (NSString *)addField:(NSString *)field defaultValue:(NSString *)value toTable:(NSString *)table;
// 更改表的某个字段的值
+ (NSString *)updateField:(NSString *)field value:(NSString *)value ofTable:(NSString *)table;

+ (void)dayFlowOfAccount:(NSString *)account date:(NSDate *)date completion:(void(^)(CGFloat sr,CGFloat cb))completion;

@end
