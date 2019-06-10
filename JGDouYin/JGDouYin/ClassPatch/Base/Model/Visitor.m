//
//  Visitor.m
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import "Visitor.h"
@implementation Visitor
-(NSString *)formatUDID {
    if(_udid.length < 8) return @"************";
    NSMutableString *udid = [[NSMutableString alloc] initWithString:_udid];
    [udid replaceCharactersInRange:NSMakeRange(4, udid.length-8) withString:@"****"];
    return udid;
}
@end
