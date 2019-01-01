//
//  FSAlertAPI.h
//  myhome
//
//  Created by FudonFuchina on 2018/7/1.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSBaseAPI.h"
#import "FSAlertModel.h"

@interface FSAlertAPI : FSBaseAPI

+ (void)todoAlerts:(NSString *)password callback:(void(^)(NSArray *list, NSInteger count))completion;
+ (void)todoAlertsOnlyCount:(BOOL)onlyCount password:(NSString *)password callback:(void(^)(NSArray *list, NSInteger count))completion;

@end
