//
//  AwemeListResponse.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseResponse.h"
#import "Aweme.h"

@interface AwemeListResponse:BaseResponse

@property (nonatomic, copy) NSArray<Aweme *> <Aweme>   *data;

@end
