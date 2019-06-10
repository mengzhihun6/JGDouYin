//
//  GroupChatResponse.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseResponse.h"
#import "GroupChat.h"

@interface GroupChatResponse:BaseResponse

@property (nonatomic, copy) GroupChat   *data;

@end
