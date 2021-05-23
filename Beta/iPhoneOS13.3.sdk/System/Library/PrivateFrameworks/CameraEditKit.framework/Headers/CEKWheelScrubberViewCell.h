/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface CEKWheelScrubberViewCell : UICollectionViewCell

{
    UIView *_itemView;
    double _selectionDotCenterTopSpacing;
    long long _dotPlacement;
    UIView *__selectionDotView;
    UIView *__clippingView;
}

@property (nonatomic, readonly) UIView *_selectionDotView;
@property (nonatomic, readonly) UIView *_clippingView;
@property (nonatomic, readonly) UIView *itemView;
@property (nonatomic) double selectionDotCenterTopSpacing;
@property (nonatomic) long long dotPlacement;

+ (struct CGSize)defaultSize;
+ (double)borderInsetWidth;
+ (struct CGSize)_defaultContentSize;
+ (struct CGSize)screenScaleContentSize;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)_updateSelectionDot;
- (double)_selectionDotDiameter;

@end
