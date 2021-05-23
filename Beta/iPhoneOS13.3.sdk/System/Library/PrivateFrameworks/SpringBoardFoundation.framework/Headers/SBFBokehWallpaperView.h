/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFWallpaperView.h>

@class CADisplayLink, CAGradientLayer, NSDictionary, NSMutableArray, SBFMotionManager, UIImage;

@interface SBFBokehWallpaperView : SBFWallpaperView

{
    CADisplayLink *_displayLink;
    SBFMotionManager *_motionManager;
    NSMutableArray *_circleArray;
    NSDictionary *_options;
    long long _circleFillColor;
    unsigned long long _blurFrameCount;
    UIImage *_cachedSnapshotImage;
    struct __IOSurface *_snapshotBuffer;
    UIImage *_cachedFolderBlurImage;
    _Bool _isOnLockScreen;
    _Bool _contentIsVisible;
    _Bool _hasSingleVariant;
}

@property (nonatomic, readonly) CAGradientLayer *layer;

+ (Class)layerClass;
+ (id)defaultGradientSilver;
+ (id)defaultGradient;
+ (id)blueGradient;
+ (id)greenGradient;
+ (id)yellowGradient;
+ (id)redGradient;
+ (id)silverGradient;
+ (_Bool)_allowsParallax;
+ (id)purpleGradient;
+ (id)orangeGradient;

- (void)dealloc;
- (void)invalidate;
- (long long)userInterfaceStyle;
- (id)cacheGroup;
- (void)_thermalStateDidChange:(id)arg1;
- (long long)wallpaperType;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (_Bool)isDisplayingWallpaperWithConfiguration:(id)arg1 forVariant:(long long)arg2;
- (id)_computeAverageColor;
- (id)snapshotImage;
- (void)_screenDidUpdate;
- (struct __IOSurface *)_createSnapshotBuffer;
- (void)_handleVariantChange;
- (void)_screenDimmed:(id)arg1;
- (void)_screenUndimmed:(id)arg1;
- (void)_wallpaperDidChange:(id)arg1;
- (void)_updateGradientAndFillColor;
- (void)setWallpaperAnimationEnabled:(_Bool)arg1;
- (void)_addBokehCircles:(long long)arg1;
- (_Bool)_lowPowerModeIsEnabled;
- (_Bool)_thermalStateIsCritical;
- (void)_toggleCircleAnimations:(_Bool)arg1;
- (void)_initDisplayLink;
- (void)_destroyDisplayLink;
- (void)_updateVariantStatus;
- (void)_correctGyroValues:(inout double *)arg1 y:(inout double *)arg2;
- (void)_updateOrientationIfNeeded;
- (_Bool)_layerIsOutOfBounds:(id)arg1;
- (struct CGRect)newRectForCircle:(id)arg1 potentialX:(double)arg2 potentialY:(double)arg3;
- (void)_updateSnapshotImageIfNeeded;
- (void)_updateCircleFillColor;
- (id)_imageFromColor:(id)arg1;
- (id)_folderBlurImage;
- (id)_imageForBackdropParameters:(CDStruct_d8f0d129)arg1 includeTint:(_Bool)arg2 overrideTraitCollection:(id)arg3;
- (void)_styleModeChanged:(id)arg1;
- (_Bool)_needsFallbackImageForBackdropGeneratedImage:(id)arg1;

@end
