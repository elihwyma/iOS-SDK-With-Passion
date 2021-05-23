/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CLKDevice, CLKImageProvider, NSString, NTKColoringImageView, UIColor, UIImage, UIImageView;

@protocol CLKMonochromeFilterProvider;

@interface NTKStackedImagesComplicationImageView : UIView <Swift>

{
    CLKDevice *_device;
    NTKColoringImageView *_foregroundImageView;
    NTKColoringImageView *_backgroundImageView;
    UIImageView *_foregroundAccentImageView;
    NTKColoringImageView *_monochromeImageView;
    UIImageView *_monochromeShadowView;
    UIImageView *_multipartShadowView;
    UIImage *_multipartShadowViewSource;
    _Bool _isUsingLegibility;
    _Bool _isShadowImagesStale;
    double _shadowBlur;
    UIColor *_shadowColor;
    double _imageScaleFactor;
    CLKImageProvider *_imageProvider;
    id <CLKMonochromeFilterProvider> _filterProvider;
    UIColor *_color;
    UIColor *_overrideColor;
    double _multicolorAlpha;
    UIColor *_foregroundColor;
}

@property (nonatomic) double multicolorAlpha;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic, readonly) UIColor *contentColor;
@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (nonatomic) _Bool legibilityEnabled;
@property (nonatomic) double shadowBlur;
@property (retain, nonatomic) UIColor *shadowColor;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateAlpha;
- (void)_updateColors;
- (void)_updateImages;
- (void)_updateShadow;
- (_Bool)_hasMultipartImages;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_enumerateMultipartImageViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageViewsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_hasShadowViews;
- (_Bool)_shouldIgnoreTwoPieceImage;
- (void)_updateShadowViewImages;
- (void)_loadImageViewsIfNecessary;
- (void)_updateImageSubviewsMaxSize;
- (_Bool)hasMonochromeImage;

@end
