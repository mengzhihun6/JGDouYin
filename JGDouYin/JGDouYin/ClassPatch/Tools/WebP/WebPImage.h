//
//  WebPImage.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <webp/decode.h>
#import <webp/demux.h>
#import <webp/mux_types.h>

@interface WebPFrame : NSObject

@property (nonatomic, strong) UIImage                  *image;
@property (nonatomic, assign) CGFloat                  duration;
@property (nonatomic, assign) WebPData                 webPData;
@property (nonatomic, assign) CGFloat                  height;
@property (nonatomic, assign) CGFloat                  width;
@property (nonatomic, assign) CGFloat                  has_alpha;

@end


@interface WebPImage : UIImage

@property (nonatomic, copy) NSData                              *imageData;
@property (nonatomic, strong) WebPFrame                         *curDisplayFrame;
@property (nonatomic, strong) UIImage                           *curDisplayImage;
@property (nonatomic, assign) NSInteger                         curDisplayIndex;
@property (nonatomic, assign) NSInteger                         curDecodeIndex;
@property (nonatomic, assign) NSInteger                         frameCount;
@property (nonatomic, strong) NSMutableArray<WebPFrame *>       *frames;

- (CGFloat)curDisplayFrameDuration;
- (WebPFrame *)decodeCurFrame;
- (void)incrementCurDisplayIndex;
- (BOOL)isAllFrameDecoded;

@end

