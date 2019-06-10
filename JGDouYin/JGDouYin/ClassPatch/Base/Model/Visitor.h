//
//  Visitor.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "BaseModel.h"
#import "PictureInfo.h"
@interface Visitor :BaseModel
@property (nonatomic , copy) NSString              *uid;
@property (nonatomic , copy) NSString              *udid;
@property (nonatomic , strong) PictureInfo         *avatar_thumbnail;
@property (nonatomic , strong) PictureInfo         *avatar_medium;
@property (nonatomic , strong) PictureInfo         *avatar_large;
-(NSString *)formatUDID;
@end
