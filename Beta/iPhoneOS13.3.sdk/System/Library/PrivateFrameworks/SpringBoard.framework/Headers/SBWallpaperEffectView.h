/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSString, SBWallpaperController, UIColor, UIImage, UIImageView;

@protocol _SBFakeBlur;

@interface SBWallpaperEffectView : UIView

{
    long long _variant;
    UIColor *_wallpaperAverageColor;
    long long _startStyle;
    long long _endStyle;
    double _transitionFraction;
    UIView<_SBFakeBlur> *_blurView;
    UIView *_grayscaleTintView;
    UIView *_colorTintView;
    UIView<_SBFakeBlur> *_transitionBlurView;
    UIView *_transitionGrayscaleTintView;
    UIView *_transitionColorTintView;
    UIImageView *_maskImageView;
    UIView *_blurMaskingContainer;
    UIView *_tintMaskingContainer;
    UIImage *_maskImage;
    _Bool _shouldMaskBlur;
    _Bool _shouldMaskTint;
    _Bool _fullscreen;
    _Bool _forcesOpaque;
    unsigned long long _transformOptions;
    _Bool _accessibilityReduceTransparencyEnabled;
    SBWallpaperController *_wallpaperController;
}

@property (retain, nonatomic) UIView<_SBFakeBlur> *blurView;
@property (retain, nonatomic) UIView *grayscaleTintView;
@property (retain, nonatomic) UIView *colorTintView;
@property (retain, nonatomic) UIView<_SBFakeBlur> *transitionBlurView;
@property (retain, nonatomic) UIView *transitionGrayscaleTintView;
@property (retain, nonatomic) UIView *transitionColorTintView;
@property (retain, nonatomic) UIImageView *maskImageView;
@property (retain, nonatomic) UIView *blurMaskingContainer;
@property (retain, nonatomic) UIView *tintMaskingContainer;
@property (nonatomic, readonly) SBWallpaperController *wallpaperController;
@property (nonatomic) double zoomScale;
@property (nonatomic, getter=isFullscreen) _Bool fullscreen;
@property (nonatomic) _Bool forcesOpaque;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long wallpaperStyle;
@property (nonatomic) _Bool needsClassicModeBackground;
@property (nonatomic) _Bool shouldUseBrightMaterial;

+ (id)imageInRect:(struct CGRect)arg1 forVariant:(long long)arg2 withStyle:(long long)arg3 zoomFactor:(double)arg4 mask:(id)arg5 masksBlur:(_Bool)arg6 masksTint:(_Bool)arg7;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (id)appearanceStorage;
- (void)setBarStyle:(long long)arg1;
- (void)setTranslucent:(_Bool)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)_setFrame:(struct CGRect)arg1 forceUpdateBackgroundImage:(_Bool)arg2;
- (void)_setIsContainedInPopover:(_Bool)arg1;
- (void)updateBackgroundImage;
- (void)setAppearanceStorage:(id)arg1;
- (void)setBarWantsAdaptiveBackdrop:(_Bool)arg1;
- (void)setTransitionState:(CDStruct_059c2b36)arg1;
- (id)initWithWallpaperVariant:(long long)arg1;
- (void)_configureViews;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2;
- (_Bool)prepareToAnimateToTransitionState:(inout CDStruct_059c2b36 *)arg1;
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;
- (_Bool)currentTransitionStateIsOpaque;
- (id)initWithWallpaperController:(id)arg1 variant:(long long)arg2 transformOptions:(unsigned long long)arg3;
- (void)fakeBlurView:(id)arg1 didChangeStyle:(long long)arg2;
- (void)offsetWallpaperBy:(struct CGPoint)arg1;
- (void)_configureFromScratch;
- (_Bool)_isEffectivelyFullscreen;
- (void)_configureViewsForFullscreen:(_Bool)arg1;
- (void)_setTransitionFraction:(double)arg1;
- (void)_configureForCurrentBlurStyle;
- (void)_updateWallpaperAverageColor:(id)arg1;
- (_Bool)_needsBlurViewForStyle:(long long)arg1;
- (void)_configureGrayscaleAndColorTintViewForStartStyle:(_Bool)arg1;
- (void)setMaskImage:(id)arg1 masksBlur:(_Bool)arg2 masksTint:(_Bool)arg3;

@end
