//
//  AwemeCollectionCell.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WebPImageView;
@class Aweme;

@interface AwemeCollectionCell : UICollectionViewCell

@property (nonatomic, strong) WebPImageView    *imageView;
@property (nonatomic, strong) UIButton         *favoriteNum;

- (void)initData:(Aweme *)aweme;

@end
