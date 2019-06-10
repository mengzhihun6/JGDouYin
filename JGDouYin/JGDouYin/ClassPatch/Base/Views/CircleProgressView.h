//
//  CircleProgressView.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CircleProgressView : UIView

@property (nonatomic, assign) CGFloat progress;
@property (nonatomic, assign, setter=setTipHidden:) BOOL isTipHidden;

- (void)resetView;

@end
