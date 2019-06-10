//
//  TimeCell.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseMessageCell.h"

@interface TimeCell : BaseMessageCell

@property (nonatomic, strong) UITextView      *textView;
@property (nonatomic, strong) GroupChat       *chat;

-(void)initData:(GroupChat *)chat;

@end
