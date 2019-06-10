//
//  NSTextAttachment+Emotion.m
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//
#import "NSTextAttachment+Emotion.h"
#import "objc/runtime.h"

@implementation NSTextAttachment (Emotion)

- (void)setEmotionKey:(NSString *)key {
    objc_setAssociatedObject(self, &emotionKey, key, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

- (NSString *)emotionKey {
    return objc_getAssociatedObject(self, &emotionKey);
}

@end
