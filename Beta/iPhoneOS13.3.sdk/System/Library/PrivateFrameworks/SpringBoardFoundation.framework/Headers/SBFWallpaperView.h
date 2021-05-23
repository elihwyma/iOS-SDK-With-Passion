/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIView.h>

@class NSString, NSTimer, SBFWallpaperParallaxSettings, SBFWallpaperSettings, UIColor, UIImage, _UILegibilitySettings, _UILegibilitySettingsProvider;

@protocol SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewDelegate, SBFWallpaperViewInternalObserver;

@interface SBFWallpaperView : UIView

{
    SBFWallpaperSettings *_wallpaperSettings;
    UIView *_parallaxView;
    double _zoomFactor;
    double _contentScaleFactor;
    long long _variant;
    unsigned long long _transformOptions;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_lastAverageColor;
    NSTimer *_colorSampleTimer;
    _Bool _shouldGenerateBlurredImagesWhenVisible;
    _Bool _generatingBlurredImages;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    _Bool _wantsRasterization;
    long long _disallowRasterizationBlockCount;
    _Bool _parallaxEnabled;
    _Bool _continuousColorSamplingEnabled;
    _Bool _wallpaperAnimationEnabled;
    _Bool _rotating;
    _Bool _hasVideo;
    _Bool _sharesContentsAcrossVariants;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    UIView *_contentView;
    long long _wallpaperMode;
    id <SBFWallpaperViewDelegate> _wallpaperDelegate;
    UIImage *_untreatedWallpaperImage;
    double _parallaxFactor;
    NSString *_wallpaperName;
    long long _logicalContentOrientation;
    NSString *_cacheGroup;
    id <SBFWallpaperViewInternalObserver> _internalObserver;
}

@property (retain, nonatomic) UIImage *untreatedWallpaperImage;
@property (nonatomic) long long logicalContentOrientation;
@property (copy, nonatomic, readonly) NSString *cacheGroup;
@property (copy, nonatomic, readonly) NSString *variantCacheIdentifier;
@property (copy, nonatomic, readonly) NSString *cacheUniqueIdentifier;
@property (weak, nonatomic) id <SBFWallpaperViewInternalObserver> internalObserver;
@property (nonatomic, readonly) _Bool needsImmediateLayoutBeforeRotation;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long variant;
@property (nonatomic, readonly) long long wallpaperType;
@property (nonatomic, readonly) long long wallpaperMode;
@property (weak, nonatomic) id <SBFWallpaperViewDelegate> wallpaperDelegate;
@property (nonatomic, readonly) UIImage *wallpaperImage;
@property (nonatomic) double zoomFactor;
@property (nonatomic) _Bool parallaxEnabled;
@property (nonatomic) double parallaxFactor;
@property (nonatomic, readonly) struct CGRect cropRect;
@property (nonatomic, readonly) double cropZoomScale;
@property (nonatomic, readonly) _Bool supportsCropping;
@property (nonatomic) _Bool continuousColorSamplingEnabled;
@property (nonatomic) _Bool wallpaperAnimationEnabled;
@property (nonatomic, getter=isRotating) _Bool rotating;
@property (copy, nonatomic, readonly) NSString *wallpaperName;
@property (nonatomic, readonly) _Bool hasVideo;
@property (nonatomic) _Bool sharesContentsAcrossVariants;
@property (nonatomic, readonly) _Bool hasContentOutsideVisibleBounds;
@property (nonatomic) unsigned long long transformOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate;

+ (_Bool)_allowsParallax;
+ (Class)wallpaperViewClassForWallpaperType:(long long)arg1;
+ (_Bool)_allowsRasterization;
+ (_Bool)_shouldScaleForParallax;
+ (Class)wallpaperViewClassForConfiguration:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (double)contrast;
- (double)contentScaleFactor;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_updateScaleFactor;
- (_Bool)_isVisible;
- (void)setLegibilitySettings:(id)arg1;
- (void)setContentsRect:(struct CGRect)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)_displayedImage;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (id)_computeAverageColor;
- (id)averageColorInRect:(struct CGRect)arg1 withSmudgeRadius:(double)arg2;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (id)snapshotImage;
- (void)_updateContentViewScale;
- (void)_notifyBlursInvalidated;
- (void)_handleVariantChange;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (id)_imageForBackdropParameters:(CDStruct_d8f0d129)arg1 includeTint:(_Bool)arg2 overrideTraitCollection:(id)arg3;
- (_Bool)_needsFallbackImageForBackdropGeneratedImage:(id)arg1;
- (void)_updateParallaxSettings;
- (void)_updateRasterizationState;
- (void)_updateLegibilitySettingsForAverageColor:(id)arg1 force:(_Bool)arg2 notify:(_Bool)arg3;
- (void)setZoomFactor:(double)arg1 withAnimationFactory:(id)arg2;
- (void)_beginDisallowRasterizationBlock;
- (void)_endDisallowRasterizationBlock;
- (void)setVariant:(long long)arg1 withAnimationFactory:(id)arg2;
- (void)_setLegibilitySettings:(id)arg1 notify:(_Bool)arg2;
- (id)_primaryColorOverride;
- (_Bool)_dontUseShadow;
- (void)legibilitySettingsDidChange;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (double)contrastInRect:(struct CGRect)arg1;
- (double)_contrastInContentViewRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (void)_updateGeneratingBlurs;
- (id)_blurredImage;
- (void)_handleVisibilityChange;
- (id)_generateImageFromImage:(id)arg1 forBackdropParameters:(CDStruct_d8f0d129)arg2 includeTint:(_Bool)arg3 traitCollection:(id)arg4;
- (id)_cacheKeyForParameters:(CDStruct_d8f0d129)arg1 includingTint:(_Bool)arg2 downsampleFactor:(double)arg3 traitCollection:(id)arg4;
- (id)_backdrop_generateImageFromImage:(id)arg1 forBackdropParameters:(CDStruct_d8f0d129)arg2 includeTint:(_Bool)arg3 traitCollection:(id)arg4;
- (id)_material_generateImageFromImage:(id)arg1 forBackdropParameters:(CDStruct_d8f0d129)arg2 traitCollection:(id)arg3;
- (id)_fallbackImageWithOriginalSize:(struct CGSize)arg1;
- (void)_applyParallaxSettings;
- (void)_startGeneratingBlurredImages;
- (void)_stopGeneratingBlurredImages;
- (void)_addParallax;
- (void)_removeParallax;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (void)prepareToAppear;
- (void)prepareToDisappear;
- (void)resetLegibilitySettingsForAverageColor:(id)arg1;
- (void)setGeneratesBlurredImages:(_Bool)arg1;
- (id)blurredImage;
- (id)imageForBackdropParameters:(CDStruct_d8f0d129)arg1 includeTint:(_Bool)arg2 overrideTraitCollection:(id)arg3;
- (void)preheatImageData;
- (_Bool)wantsRasterization;

@end
