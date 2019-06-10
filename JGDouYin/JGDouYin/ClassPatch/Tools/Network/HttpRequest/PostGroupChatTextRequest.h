//
//  PostGroupChatTextRequest.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseRequest.h"

@interface PostGroupChatTextRequest:BaseRequest

@property (nonatomic, copy) NSString *udid;
@property (nonatomic, copy) NSString *text;

@end
