//
//  HoverTextView.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SendTextDelegate

@required
-(void)onSendText:(NSString *)text;

@end



@protocol HoverTextViewDelegate

@required
-(void) hoverTextViewStateChange:(BOOL)isHover;

@end



@interface HoverTextView : UIView

@property (nonatomic, strong) UITextView                     *textView;
@property (nonatomic, weak) id<SendTextDelegate>             delegate;
@property (nonatomic, weak) id<HoverTextViewDelegate>        hoverDelegate;

@end

