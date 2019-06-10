//
//  SwipeLeftInteractiveTransition.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AwemeListController;

@interface SwipeLeftInteractiveTransition : UIPercentDrivenInteractiveTransition
@property (nonatomic, assign) BOOL interacting;
-(void)wireToViewController:(AwemeListController *)viewController;
@end
