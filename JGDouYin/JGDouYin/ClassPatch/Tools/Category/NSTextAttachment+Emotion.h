//
//  NSTextAttachment+Emotion.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

static char emotionKey;

@interface NSTextAttachment (Emotion)

- (void)setEmotionKey:(NSString *)key;

- (NSString *)emotionKey;

@end
