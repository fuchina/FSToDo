//
//  FSNewFutureAlertController.h
//  myhome
//
//  Created by fudon on 2016/12/12.
//  Copyright © 2016年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSAlertModel.h"

@interface FSNewFutureAlertController : FSBaseController

@property (nonatomic,copy)   NSString           *password;
@property (nonatomic,strong) FSAlertModel       *entity;

// bModel为空为新增，否则为更新
@property (nonatomic,copy) void (^callback)(FSNewFutureAlertController *bVC,FSAlertModel *bModel);

@end
