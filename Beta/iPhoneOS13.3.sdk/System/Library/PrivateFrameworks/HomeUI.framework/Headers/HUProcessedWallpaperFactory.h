/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface HUProcessedWallpaperFactory : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *supportedVariants;
@property (nonatomic, readonly) unsigned long long processVersionNumber;

+ (id)_defaultBackdropSettings;

- (id)processedImageForVariant:(long long)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (id)_processedImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_darkContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_darkContentDarkModeBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (id)_lightContentBlurredImageForWallpaper:(id)arg1 image:(id)arg2;
- (struct CGRect)_scaledCropRectForBounds:(struct CGRect)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (id)_croppedImageFromWallpaper:(id)arg1 image:(id)arg2;
- (id)_layerWithCompositingFilterType:(id)arg1 color:(id)arg2;
- (id)_imageByApplyingLayerEffects:(id)arg1 toImage:(id)arg2;

@end
