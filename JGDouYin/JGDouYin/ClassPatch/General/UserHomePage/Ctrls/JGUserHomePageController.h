//
//  JGUserHomePageController.h
//  JGDouYin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "JGBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface JGUserHomePageController : JGBaseViewController

@property (nonatomic, strong) UICollectionView                 *collectionView;
@property (nonatomic, assign) NSInteger                        selectIndex;

@end

NS_ASSUME_NONNULL_END
