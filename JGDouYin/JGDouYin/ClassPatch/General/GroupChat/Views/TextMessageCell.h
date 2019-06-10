//
//  TextMessageCell.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseMessageCell.h"

@interface TextMessageCell : BaseMessageCell

@property (nonatomic, strong) UIImageView             *avatar;
@property (nonatomic, strong) UITextView              *textView;
@property (nonatomic, strong) CAShapeLayer            *backgroundlayer;
@property (nonatomic, strong) UIImageView             *indicatorView;
@property (nonatomic, strong) UIImageView             *tipIcon;
@property (nonatomic, strong) GroupChat               *chat;
@property (nonatomic, strong) OnMenuAction            onMenuAction;

-(void)initData:(GroupChat *)chat;
- (CGRect)menuFrame;

@end
