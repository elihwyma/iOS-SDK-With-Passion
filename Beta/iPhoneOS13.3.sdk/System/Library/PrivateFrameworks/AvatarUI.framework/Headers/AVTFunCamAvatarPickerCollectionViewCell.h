/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionViewCell.h>

@class AVTUIAnimatingImageView, CAShapeLayer, NSUUID, UIButton;

@interface AVTFunCamAvatarPickerCollectionViewCell : UICollectionViewCell

{
    _Bool _selectionVisible;
    _Bool _roundImageCorners;
    _Bool _showsTitle;
    NSUUID *_displaySessionUUID;
    CDUnknownBlockType _imageInsetProvider;
    long long _imageContentMode;
    AVTUIAnimatingImageView *_imageView;
    UIButton *_accessoryButton;
    CAShapeLayer *_selectionLayer;
    struct CGSize _engagedSize;
}

@property (nonatomic, readonly) AVTUIAnimatingImageView *imageView;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (nonatomic, readonly) CAShapeLayer *selectionLayer;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (copy, nonatomic) CDUnknownBlockType imageInsetProvider;
@property (nonatomic) long long imageContentMode;
@property (nonatomic) _Bool selectionVisible;
@property (nonatomic) _Bool roundImageCorners;
@property (nonatomic) _Bool showsTitle;
@property (nonatomic) struct CGSize engagedSize;

+ (id)cellIdentifier;
+ (struct CGPath *)selectionPathInBounds:(struct CGRect)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)setImageZoomFactor:(double)arg1;
- (void)updateWithTintColor:(id)arg1;
- (void)updateWithImage:(id)arg1 animated:(_Bool)arg2;
- (void)updateSelectionLayer;

@end
