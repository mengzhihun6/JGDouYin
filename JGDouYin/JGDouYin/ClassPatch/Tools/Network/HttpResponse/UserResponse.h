//
//  UserResponse.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseResponse.h"
#import "User.h"

@interface UserResponse:BaseResponse

@property (nonatomic, strong) User    *data;

@end
