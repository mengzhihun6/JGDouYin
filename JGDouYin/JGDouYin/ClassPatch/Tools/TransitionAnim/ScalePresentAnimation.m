//
//  ScalePresentAnimation.m
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "ScalePresentAnimation.h"
#import "JGUserHomePageController.h"
#import "AwemeListController.h"
#import "AwemeCollectionCell.h"

@implementation ScalePresentAnimation

- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning>)transitionContext{
    return 0.25f;
}

- (void)animateTransition:(id <UIViewControllerContextTransitioning>)transitionContext{
    AwemeListController *toVC = [transitionContext viewControllerForKey:UITransitionContextToViewControllerKey];
    UINavigationController *fromVC = (UINavigationController *)[transitionContext viewControllerForKey:UITransitionContextFromViewControllerKey];
    JGUserHomePageController *userHomePageController = fromVC.viewControllers.firstObject;
    UIView *selectCell = (AwemeCollectionCell *)[userHomePageController.collectionView cellForItemAtIndexPath:[NSIndexPath indexPathForItem:userHomePageController.selectIndex inSection:1]];
    
    UIView *containerView = [transitionContext containerView];
    [containerView addSubview:toVC.view];
    
    CGRect initialFrame = [userHomePageController.collectionView convertRect:selectCell.frame toView:[userHomePageController.collectionView superview]];
    CGRect finalFrame = [transitionContext finalFrameForViewController:toVC];
    NSTimeInterval duration = [self transitionDuration:transitionContext];
    
    toVC.view.center = CGPointMake(initialFrame.origin.x + initialFrame.size.width/2, initialFrame.origin.y + initialFrame.size.height/2);
    toVC.view.transform = CGAffineTransformMakeScale(initialFrame.size.width/finalFrame.size.width, initialFrame.size.height/finalFrame.size.height);
    
    [UIView animateWithDuration:duration
                          delay:0
         usingSpringWithDamping:0.8
          initialSpringVelocity:1
                        options:UIViewAnimationOptionLayoutSubviews
                     animations:^{
                         toVC.view.center = CGPointMake(finalFrame.origin.x + finalFrame.size.width/2, finalFrame.origin.y + finalFrame.size.height/2);
                         toVC.view.transform = CGAffineTransformMakeScale(1, 1);
                     } completion:^(BOOL finished) {
                         [transitionContext completeTransition:YES];
                     }];
}
@end
