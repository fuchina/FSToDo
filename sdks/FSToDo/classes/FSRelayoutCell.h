//
//  FSRelayoutCell.h
//  myhome
//
//  Created by fudon on 2016/12/13.
//  Copyright © 2016年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSAlertModel.h"

@interface FSRelayoutCell : UITableViewCell

@property (nonatomic,copy) void (^buttonEvent)(NSInteger index);

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier mode:(BOOL)hasButton;

- (void)configData:(FSAlertModel *)model;

@end
