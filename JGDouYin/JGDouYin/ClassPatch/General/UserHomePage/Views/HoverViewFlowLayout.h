//
//  HoverViewFlowLayout.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HoverViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic, assign) CGFloat      topHeight;

- (instancetype)initWithTopHeight:(CGFloat)height;

@end
