/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class NSData, NSString, SBFColorBoxes, UIImage;

@interface SBFStaticWallpaperView : SBFWallpaperView

{
    double _overallContrast;
    SBFColorBoxes *_colorBoxes;
    _Bool _needsWallpaperDimmingTreatment;
    UIImage *_displayedImage;
    UIImage *_sampleImage;
    NSData *_displayedImageHashData;
    NSString *_displayedImageHashString;
}

@property (retain, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage;
@property (retain, nonatomic, getter=_sampleImage, setter=_setSampleImage:) UIImage *sampleImage;
@property (copy, nonatomic) NSData *displayedImageHashData;
@property (copy, nonatomic) NSString *displayedImageHashString;
@property (retain, nonatomic) SBFColorBoxes *colorBoxes;

+ (_Bool)_allowsParallax;
+ (_Bool)_allowsRasterization;
+ (_Bool)_canCacheImages;
+ (_Bool)_canDownscaleSampleImage;

- (double)contrast;
- (void)setContentsRect:(struct CGRect)arg1;
- (struct CGSize)_imageSize;
- (float)_zoomScale;
- (long long)wallpaperType;
- (id)wallpaperImage;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (id)_computeAverageColor;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (id)snapshotImage;
- (void)_setUpStaticImageContentView:(id)arg1;
- (void)_setupContentViewWithOptions:(unsigned long long)arg1;
- (id)_averageColorInContentViewRect:(struct CGRect)arg1 smudgeRadius:(double)arg2;
- (double)_contrastInContentViewRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3;
- (id)cacheUniqueIdentifier;
- (void)setCropRect:(struct CGRect)arg1 zoomScale:(double)arg2;
- (double)cropZoomScale;
- (void)preheatImageData;
- (_Bool)hasContentOutsideVisibleBounds;
- (id)_createColorBoxes;
- (id)_wallpaperImageForAnalysis;
- (void)_displayImage:(id)arg1;
- (void)_updateColorBoxesWithKey:(id)arg1 image:(id)arg2;
- (void)_generateImageForImage:(id)arg1 cacheKey:(id)arg2 options:(unsigned long long)arg3 downsampleFactor:(double)arg4 needsDimmingTreatment:(_Bool)arg5 averageColor:(id)arg6 generationHandler:(CDUnknownBlockType)arg7;
- (_Bool)imageRequiresLuminanceTreatment;
- (void)_setupWallpaperImageFromConfiguration:(id)arg1 options:(unsigned long long)arg2;

@end
