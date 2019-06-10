//
//  PhotoSelector.h
//  JGDouyin
//
//  Created by 郭军 on 2019/6/10.
//  Copyright © 2019 JG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

#define PhotoSelectorHeight   220 + SafeAreaBottomHeight

@protocol PhotoSelectorDelegate
@required
-(void)onSend:(NSMutableArray<UIImage *> *)images;
@end

@interface PhotoSelector : UIView
@property (nonatomic, strong) UIView                   *container;
@property (nonatomic, strong) UICollectionView         *collectionView;
@property (nonatomic, weak) id<PhotoSelectorDelegate>  delegate;
@end

typedef void (^OnSelect)(BOOL isSelected);

@interface PhotoCell:UICollectionViewCell
@property (nonatomic, strong) UIImageView             *photo;
@property (nonatomic, strong) UIButton                *checkbox;
@property (nonatomic, strong) CALayer                 *coverLayer;
@property (nonatomic, strong) OnSelect                onSelect;
- (void)initData:(PHAsset *)asset isSelected:(BOOL)selected;
- (void)setOnSelect:(OnSelect)onSelect;
@end
