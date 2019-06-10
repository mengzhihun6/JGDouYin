//
//  ChatTextView.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

//chat edit message type enum
typedef NS_ENUM(NSUInteger,ChatEditMessageType) {
    EditTextMessage        = 0,
    EditPhotoMessage       = 1,
    EditEmotionMessage     = 2,
    EditNoneMessage        = 3,
};


@protocol ChatTextViewDelegate

@required
-(void)onSendText:(NSString *)text;
-(void)onSendImages:(NSMutableArray<UIImage *> *)images;
-(void)onEditBoardHeightChange:(CGFloat)height;

@end


@interface ChatTextView : UIView
@property (nonatomic, strong) UIView                 *container;
@property (nonatomic, strong) UITextView             *textView;
@property (nonatomic, assign) ChatEditMessageType    editMessageType;
@property (nonatomic, weak) id<ChatTextViewDelegate> delegate;

- (void)show;
- (void)dismiss;

@end

