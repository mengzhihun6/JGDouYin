//
//  AwemeListController.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "JGBaseViewController.h"

typedef NS_ENUM(NSUInteger, AwemeType) {
    AwemeWork        = 0,
    AwemeFavorite    = 1
};

@class Aweme;
@interface AwemeListController : JGBaseViewController

@property (nonatomic, strong) UITableView                       *tableView;
@property (nonatomic, assign) NSInteger                         currentIndex;

-(instancetype)initWithVideoData:(NSMutableArray<Aweme *> *)data currentIndex:(NSInteger)currentIndex pageIndex:(NSInteger)pageIndex pageSize:(NSInteger)pageSize awemeType:(AwemeType)type uid:(NSString *)uid;

@end
