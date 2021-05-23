/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class NSArray, NSPointerArray, PXLayoutPerformerOutput, PXRoundedCornerOverlayView, UIColor;

@interface PXCollageView : UIView

{
    double _spacing;
    long long _numberOfItems;
    double _cornerRadius;
    UIColor *_cornerBackgroundColor;
    double _imageCornerRadius;
    PXLayoutPerformerOutput *_layoutOutput;
    NSArray *__imageViews;
    NSPointerArray *__imageSizes;
    PXRoundedCornerOverlayView *__roundedCornerOverlayView;
}

@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic, readonly) NSArray *_imageViews;
@property (nonatomic, readonly) NSPointerArray *_imageSizes;
@property (retain, nonatomic) PXRoundedCornerOverlayView *_roundedCornerOverlayView;
@property (nonatomic) double spacing;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) UIColor *cornerBackgroundColor;
@property (nonatomic) double imageCornerRadius;

+ (long long)maximumNumberOfItems;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)_updateImageViews;
- (struct CGSize)imageSizeForItemAtIndex:(long long)arg1;
- (void)setImageSize:(struct CGSize)arg1 forItemAtIndex:(long long)arg2;
- (void)_updateRoundedCornerOverlayView;

@end
