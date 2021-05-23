/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIImageView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIParallaxImageView : SKUIImageView

{
    struct UIEdgeInsets _imagePadding;
    struct CGSize _imageSize;
    SKUIImageView *_innerImageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;

- (id)image;
- (void)setImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setPlaceholder:(id)arg1;
- (struct CGSize)imageSize;
- (id)placeholder;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)_updateInnerImageView;
- (void)setImagePadding:(struct UIEdgeInsets)arg1;

@end
