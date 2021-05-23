/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSPointerArray, PXRoundedCornerOverlayView, UIColor;

__attribute__((visibility("hidden")))
@interface PUCollageView : UIView

{
    _Bool _hasRoundedCorners;
    double _spacing;
    long long _numberOfItems;
    double _cornerRadius;
    double _subitemCornerRadius;
    long long __numberOfImageViews;
    NSArray *__imageViews;
    NSPointerArray *__imageSizes;
    UIColor *_cornersBackgroundColor;
    PXRoundedCornerOverlayView *__roundedCornerOverlayView;
    struct CGSize _collageSize;
}

@property (nonatomic, readonly) long long _numberOfImageViews;
@property (nonatomic, readonly) NSArray *_imageViews;
@property (nonatomic, readonly) NSPointerArray *_imageSizes;
@property (retain, nonatomic) UIColor *cornersBackgroundColor;
@property (retain, nonatomic, setter=_setRoundedCornerOverlayView:) PXRoundedCornerOverlayView *_roundedCornerOverlayView;
@property (nonatomic) struct CGSize collageSize;
@property (nonatomic) double spacing;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double subitemCornerRadius;
@property (nonatomic) _Bool hasRoundedCorners;

+ (long long)maximumNumberOfItems;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)_updateImageViews;
- (struct CGSize)imageSizeForItemAtIndex:(long long)arg1;
- (void)setImageSize:(struct CGSize)arg1 forItemAtIndex:(long long)arg2;
- (void)_updateRoundedCornerOverlayView;
- (void)setHasRoundedCorners:(_Bool)arg1 withCornersBackgroundColor:(id)arg2;

@end
