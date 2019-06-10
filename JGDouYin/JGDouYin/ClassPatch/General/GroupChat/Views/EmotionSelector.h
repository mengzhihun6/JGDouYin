//
//  EmotionSelector.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>

#define EmotionSelectorHeight   220 + SafeAreaBottomHeight

@protocol EmotionSelectorDelegate
@required
-(void)onDelete;
-(void)onSend;
-(void)onSelect:(NSString *)emotionKey;
@end

@interface EmotionSelector : UIView
@property (nonatomic, strong) UIView                     *container;
@property (nonatomic, strong) UICollectionView           *collectionView;
@property (nonatomic, weak) id<EmotionSelectorDelegate>  delegate;
-(void)addTextViewObserver:(UITextView *)textView;
- (void)removeTextViewObserver:(UITextView *)textView;
@end

@interface EmotionCell:UICollectionViewCell
@property (nonatomic, strong) UIImageView     *emotion;
@property (nonatomic, copy) NSString          *emotionKey;
- (void)setDelete;
- (void)initData:(NSString *)key;
@end
