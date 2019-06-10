//
//  RefreshControl.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

//refreshing type enum
typedef NS_ENUM(NSUInteger,RefreshingType) {
    RefreshHeaderStateIdle,
    RefreshHeaderStatePulling,
    RefreshHeaderStateRefreshing,
    RefreshHeaderStateAll
};


typedef void (^OnRefresh)(void);

@interface RefreshControl:UIControl

@property (nonatomic, strong) UIScrollView      *superView;
@property (nonatomic, strong) UIImageView       *indicatorView;
@property (nonatomic, strong) OnRefresh         onRefresh;
@property (nonatomic, assign) RefreshingType    refreshingType;

- (void)setOnRefresh:(OnRefresh)onRefresh;
- (void)startRefresh;
- (void)endRefresh;
- (void)loadAll;

@end
