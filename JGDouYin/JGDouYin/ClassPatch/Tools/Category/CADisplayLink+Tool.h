//
//  CADisplayLink+Tool.h
//  JGDouyin
//
//  Created by Qiao Shi on 2018/9/27.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ExecuteMethodBlock) (CADisplayLink *displayLink);

@interface CADisplayLink (Tool)

@property (nonatomic,copy)ExecuteMethodBlock executeBlock;

+ (CADisplayLink *)displayLinkWithExecuteBlock:(ExecuteMethodBlock)block;

@end
