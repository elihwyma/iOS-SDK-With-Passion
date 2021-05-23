/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIImageView.h>

@class MPUBorderConfiguration, MPUBorderDrawingCache, MPUStackView, NSString, UIView;

__attribute__((visibility("hidden")))
@interface SKUIStackedImageView : SKUIImageView

{
    MPUBorderConfiguration *_borderConfiguration;
    long long _stackDepth;
    MPUStackView *_stackView;
    MPUBorderDrawingCache *_borderDrawingCache;
}

@property (retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache;
@property (weak, nonatomic) UIView *perspectiveTargetView;
@property (nonatomic) struct CGPoint vanishingPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
+ (struct SKUIStackedImageConfiguration)_configurationForSize:(struct CGSize)arg1;

- (void)dealloc;
- (void)setImage:(id)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageSize:(struct CGSize)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (long long)numberOfItemsInStackView:(id)arg1;
- (void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3;
- (void)stackView:(id)arg1 didCreateItem:(id)arg2;
- (void)performCompressionAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
