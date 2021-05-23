/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

@class AVTUIAnimatingImageView, NSUUID, UIView;

@interface AVTSimpleAvatarPickerCollectionViewCell : UICollectionViewCell

{
    _Bool _showSelectedState;
    NSUUID *_displaySessionUUID;
    unsigned long long _imageInsetSize;
    UIView *_selectionLayer;
    AVTUIAnimatingImageView *_imageView;
}

@property (nonatomic, readonly) UIView *selectionLayer;
@property (nonatomic, readonly) AVTUIAnimatingImageView *imageView;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (nonatomic) unsigned long long imageInsetSize;
@property (nonatomic) _Bool showSelectedState;

+ (id)cellIdentifier;
+ (double)imageInsetForInsetSize:(unsigned long long)arg1;
+ (struct CGPath *)selectionPathInBounds:(struct CGRect)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)updateWithImage:(id)arg1 animated:(_Bool)arg2;
- (void)updateSelectionLayerOpacityAnimated:(_Bool)arg1;
- (_Bool)shouldShowSelectionLayer;
- (void)updateHighlightedState:(_Bool)arg1 animated:(_Bool)arg2;

@end
