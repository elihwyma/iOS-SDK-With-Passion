/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFParallaxSettings.h>

@interface SBFWallpaperParallaxSettings : SBFParallaxSettings

{
    double _overhangX;
    double _overhangY;
    double _perspectiveTransform;
}

@property double overhangX;
@property double overhangY;
@property double perspectiveTransform;

+ (id)settingsControllerModule;
+ (struct CGSize)bestWallpaperSizeForWallpaperSize:(struct CGSize)arg1 deviceType:(long long)arg2 parallaxFactor:(double)arg3 portrait:(_Bool)arg4;
+ (struct CGSize)minimumWallpaperSizeForWallpaperSize:(struct CGSize)arg1 deviceType:(long long)arg2;
+ (struct CGSize)minimumWallpaperSizeForCurrentDevice;
+ (long long)_currentDeviceType;
+ (struct CGSize)_requiredOverhangSizeForDeviceType:(long long)arg1;
+ (struct CGSize)_requiredOverhangSizeForCurrentDevice;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1 portrait:(_Bool)arg2;
+ (struct CGSize)overhangSizeForDeviceType:(long long)arg1;
+ (double)minimumZoomScaleForWallpaperSize:(struct CGSize)arg1 parallaxFactor:(double)arg2 deviceType:(long long)arg3;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1;
+ (struct CGSize)overhangSizeForCurrentDevice;
+ (double)minimumZoomScaleForCurrentDeviceForWallpaperSize:(struct CGSize)arg1 parallaxFactor:(double)arg2;

- (void)setDefaultValues;

@end
