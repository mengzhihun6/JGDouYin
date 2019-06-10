//
//  PictureInfo.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseModel.h"

@interface PictureInfo :BaseModel

@property (nonatomic, copy) NSString      *file_id;
@property (nonatomic, copy) NSString      *url;
@property (nonatomic, assign) NSInteger   width;
@property (nonatomic, assign) NSInteger   height;
@property (nonatomic, copy) NSString      *type;

@end
