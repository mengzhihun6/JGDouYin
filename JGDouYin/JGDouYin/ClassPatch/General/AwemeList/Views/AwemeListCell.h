//
//  AwemeListCell.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^OnPlayerReady)(void);

@class Aweme;
@class AVPlayerView;
@class HoverTextView;
@class CircleTextView;
@class FocusView;
@class MusicAlbumView;
@class FavoriteView;

@interface AwemeListCell : UITableViewCell

@property (nonatomic, strong) Aweme            *aweme;

@property (nonatomic, strong) AVPlayerView     *playerView;
@property (nonatomic, strong) HoverTextView    *hoverTextView;

@property (nonatomic, strong) CircleTextView   *musicName;
@property (nonatomic, strong) UILabel          *desc;
@property (nonatomic, strong) UILabel          *nickName;

@property (nonatomic, strong) UIImageView      *avatar;
@property (nonatomic, strong) FocusView        *focus;
@property (nonatomic, strong) MusicAlbumView   *musicAlum;

@property (nonatomic, strong) UIImageView      *share;
@property (nonatomic, strong) UIImageView      *comment;

@property (nonatomic, strong) FavoriteView     *favorite;

@property (nonatomic, strong) UILabel          *shareNum;
@property (nonatomic, strong) UILabel          *commentNum;
@property (nonatomic, strong) UILabel          *favoriteNum;

@property (nonatomic, strong) OnPlayerReady    onPlayerReady;
@property (nonatomic, assign) BOOL             isPlayerReady;

- (void)initData:(Aweme *)aweme;
- (void)play;
- (void)pause;
- (void)replay;
- (void)startDownloadBackgroundTask;
- (void)startDownloadHighPriorityTask;

@end
