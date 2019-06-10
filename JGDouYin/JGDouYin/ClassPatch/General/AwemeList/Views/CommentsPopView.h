//
//  CommentsPopView.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CommentsPopView:UIView

@property (nonatomic, strong) UILabel           *label;
@property (nonatomic, strong) UIImageView       *close;

- (instancetype)initWithAwemeId:(NSString *)awemeId;
- (void)show;
- (void)dismiss;

@end


@class Comment;
@interface CommentListCell : UITableViewCell

@property (nonatomic, strong) UIImageView        *avatar;
@property (nonatomic, strong) UIImageView        *likeIcon;
@property (nonatomic, strong) UILabel            *nickName;
@property (nonatomic, strong) UILabel            *extraTag;
@property (nonatomic, strong) UILabel            *content;
@property (nonatomic, strong) UILabel            *likeNum;
@property (nonatomic, strong) UILabel            *date;
@property (nonatomic, strong) UIView             *splitLine;

-(void)initData:(Comment *)comment;
+(CGFloat)cellHeight:(Comment *)comment;

@end



@protocol CommentTextViewDelegate

@required
-(void)onSendText:(NSString *)text;

@end


@interface CommentTextView : UIView

@property (nonatomic, strong) UIView                         *container;
@property (nonatomic, strong) UITextView                     *textView;
@property (nonatomic, strong) id<CommentTextViewDelegate>    delegate;

- (void)show;
- (void)dismiss;

@end
