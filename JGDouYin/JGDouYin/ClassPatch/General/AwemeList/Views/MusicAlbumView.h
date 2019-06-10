//
//  MusicAlbumView.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Aweme;

@interface MusicAlbumView : UIView

@property (nonatomic, strong) UIImageView      *album;

- (void)startAnimation:(CGFloat)rate;
- (void)resetView;

@end
