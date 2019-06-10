//
//  SharePopView.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SharePopView:UIView

@property (nonatomic, strong) UIView           *container;
@property (nonatomic, strong) UIButton         *cancel;

- (void)show;
- (void)dismiss;

@end


@interface ShareItem:UIView

@property (nonatomic, strong) UIImageView      *icon;
@property (nonatomic, strong) UILabel          *label;

-(void)startAnimation:(NSTimeInterval)delayTime;

@end
