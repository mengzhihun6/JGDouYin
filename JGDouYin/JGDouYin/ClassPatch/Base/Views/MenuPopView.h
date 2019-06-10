//
//  MenuPopView.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^OnAction)(NSInteger index);

@interface MenuPopView:UIView
@property (nonatomic, strong) UIView        *container;
@property (nonatomic, strong) UIButton      *cancel;
@property (nonatomic, strong) OnAction      onAction;

- (instancetype)initWithTitles:(NSArray *)titles;
- (void)show;
- (void)dismiss;

@end
