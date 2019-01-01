//
//  FSClicksView.h
//  myhome
//
//  Created by FudonFuchina on 2018/8/13.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSClicksView : UIView

@property (nonatomic, assign) NSInteger  numbers;
@property (nonatomic, copy) void (^tapClick)(FSClicksView *view,NSInteger index);

@end
