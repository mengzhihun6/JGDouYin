//
//  ImageMessageCell.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseMessageCell.h"

@class CircleProgressView;

@interface ImageMessageCell : BaseMessageCell
@property (nonatomic, strong) UIImageView              *avatar;
@property (nonatomic, strong) UIImageView              *imageMsg;
@property (nonatomic, strong) CircleProgressView       *progressView;
@property (nonatomic, strong) GroupChat                *chat;
@property (nonatomic, strong) OnMenuAction             onMenuAction;

-(void)initData:(GroupChat *)chat;
-(void)updateUploadStatus:(GroupChat *)chat;
- (CGRect)menuFrame;

@end
