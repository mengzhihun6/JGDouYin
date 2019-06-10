//
//  GroupChatListRequest.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseRequest.h"

@interface GroupChatListRequest:BaseRequest

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger size;

@end
