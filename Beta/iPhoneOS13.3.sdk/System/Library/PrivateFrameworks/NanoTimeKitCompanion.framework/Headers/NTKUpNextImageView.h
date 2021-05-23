/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CALayer, CLKImageProvider, NSString, NTKUpNextBaseCell, UIColor, UIImage, UIImageView;

@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextImageView : UIView <Swift>

{
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    CALayer *_foregroundAccentBackdrop;
    UIImageView *_foregroundAccentImageView;
    UIImageView *_overrideImageView;
    NTKUpNextBaseCell *_parentCell;
    id <CLKMonochromeFilterProvider> _filterProvider;
    UIColor *_fallbackTintColor;
    CLKImageProvider *_imageProvider;
    UIImage *_overrideImage;
    NSString *_compositingFilter;
}

@property (retain, nonatomic) UIColor *fallbackTintColor;
@property (nonatomic, readonly) CLKImageProvider *imageProvider;
@property (nonatomic, readonly) UIImage *overrideImage;
@property (retain, nonatomic) NSString *compositingFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (struct CGSize)intrinsicContentSize;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)setImageProvider:(id)arg1;
- (void)_updateColors;
- (void)setOverrideImage:(id)arg1;
- (id)contentsLayer;
- (_Bool)_hasMultipartImages;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (struct CGRect)contentsLayerBoundsForLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 parentCell:(id)arg2;
- (void)setFullColorImage:(id)arg1 tintableImageProvider:(id)arg2;

@end
