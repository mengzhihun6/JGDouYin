//
//  Header.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseResponse.h"
#import "GroupChat.h"

@interface GroupChatListResponse:BaseResponse

@property (nonatomic, copy) NSArray<GroupChat>   *data;

@end
