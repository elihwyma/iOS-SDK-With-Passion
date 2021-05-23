/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SBFMagnifyMode, SBFWallpaperConfiguration;

@protocol SBFProceduralWallpaperProvider, SBFWallpaperConfigurationManagerDelegate;

@interface SBFWallpaperConfigurationManager : NSObject

{
    NSMutableDictionary *_wallpaperImageCache;
    int _externalNotificationToken;
    unsigned long long _batchChangeCount;
    long long _batchNotifyVariants;
    _Bool _enableWallpaperDimming;
    _Bool _cachedVariantsShareWallpaperConfiguration;
    _Bool _cachedVariantsShareWallpaperConfigurationValid;
    NSArray *_dataStores;
    id <SBFWallpaperConfigurationManagerDelegate> _delegate;
    double _wallpaperScale;
    long long _wallpaperMode;
    long long _wallpaperSizeType;
    id <SBFProceduralWallpaperProvider> _proceduralWallpaperProvider;
    SBFMagnifyMode *_magnifyMode;
    struct CGSize _wallpaperSize;
}

@property (nonatomic) _Bool cachedVariantsShareWallpaperConfiguration;
@property (nonatomic, getter=isCachedVariantsShareWallpaperConfigurationValid) _Bool cachedVariantsShareWallpaperConfigurationValid;
@property (copy, nonatomic, readonly) NSArray *dataStores;
@property (weak, nonatomic) id <SBFWallpaperConfigurationManagerDelegate> delegate;
@property (nonatomic, readonly) struct CGSize wallpaperSize;
@property (nonatomic, readonly) struct CGSize wallpaperSizeIncludingParallaxOverhang;
@property (nonatomic, readonly) double wallpaperScale;
@property (nonatomic) long long wallpaperMode;
@property (nonatomic) _Bool enableWallpaperDimming;
@property (nonatomic, readonly) long long wallpaperSizeType;
@property (copy, nonatomic, readonly) SBFWallpaperConfiguration *lockScreenWallpaperConfiguration;
@property (copy, nonatomic, readonly) SBFWallpaperConfiguration *homeScreenWallpaperConfiguration;
@property (nonatomic, readonly) _Bool variantsShareWallpaperConfiguration;
@property (nonatomic, readonly) unsigned long long numberOfCachedStaticImages;
@property (weak, nonatomic) id <SBFProceduralWallpaperProvider> proceduralWallpaperProvider;
@property (retain, nonatomic) SBFMagnifyMode *magnifyMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
- (_Bool)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2;
- (double)thumbnailWidth;
- (id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (_Bool)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)removeWallpaperImageHashDataForVariants:(long long)arg1;
- (id)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (_Bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (_Bool)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (void)removeWallpaperGradientForVariants:(long long)arg1;
- (id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2 wallpaperMode:(long long)arg3;
- (id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2;
- (void)clearCacheForVariants:(long long)arg1;
- (id)initWithWallpaperDataStores:(id)arg1 wallpaperSize:(struct CGSize)arg2 scale:(double)arg3 sizeType:(long long)arg4;
- (id)initWithWallpaperDataStores:(id)arg1;
- (long long)parallaxDeviceType;
- (void)notifyDelegateOfChangesToVariants:(long long)arg1;
- (_Bool)isInChangeBatch;
- (_Bool)isVideoSupportedByDefaultForVariant:(long long)arg1;
- (_Bool)isVideoSupportedForVariant:(long long)arg1;
- (_Bool)isProceduralWallpaperInfoValid:(id)arg1;
- (id)cleanedProceduralWallpaperInfo:(id)arg1;
- (id)wallpaperColorForVariant:(long long)arg1 fromDataStore:(id)arg2 colorName:(id *)arg3;
- (id)fallbackWallpaperConfigurationForVarient:(long long)arg1;
- (id)wallpaperThumbnailImageForFulfillingLookupForConfiguration:(id)arg1;
- (id)wallpaperThumbnailImageDataForFulfillingLookupForConfiguration:(id)arg1;
- (id)wallpaperConfigurationForVariant:(long long)arg1;
- (_Bool)variantsShareWallpaperConfigurationForTypes:(unsigned long long)arg1;
- (id)wallpaperThumbnailImageDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperThumbnailImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)setWallpaperImage:(id)arg1 adjustedImage:(id)arg2 thumbnailData:(id)arg3 wallpaperOptions:(id)arg4 forVariants:(long long)arg5 wallpaperMode:(long long)arg6;
- (_Bool)setWallpaperImage:(id)arg1 originalImage:(id)arg2 thumbnailData:(id)arg3 wallpaperOptions:(id)arg4 forVariants:(long long)arg5 options:(unsigned long long)arg6 wallpaperMode:(long long)arg7 isMigrating:(_Bool)arg8;
- (id)normalizeImage:(id)arg1;
- (id)hashDataForImage:(id)arg1;
- (id)thumbnailDataForImage:(id)arg1;
- (long long)effectiveSharedVariantForVariants:(long long)arg1;
- (void)wallpaperWillChangeForVariants:(long long)arg1;
- (void)removeAllDataExceptForTypes:(unsigned long long)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(_Bool)arg3;
- (void)wallpaperDidChangeForVariants:(long long)arg1 shouldNotify:(_Bool)arg2;
- (void)removeWallpaperImagesForVariants:(long long)arg1 variantsShareWallpaperConfiguration:(_Bool)arg2;
- (long long)wallpaperTypeForSharedWallpaperConfigurationForTypes:(unsigned long long)arg1;
- (void)beginChangeBatch;
- (void)removeDataForTypes:(unsigned long long)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(_Bool)arg3;
- (_Bool)setWallpaperConfigurationFromDefaultWallpaperConfigurationSet:(id)arg1;
- (_Bool)setWallpaperConfigurationFromDefaultWallpaperConfiguration:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 name:(id)arg4;
- (void)clearDelayedChangeNotifications;
- (void)endChangeBatch;
- (_Bool)setWallpaperImage:(id)arg1 originalImage:(id)arg2 forVariants:(long long)arg3 options:(unsigned long long)arg4;
- (_Bool)setVideoURL:(id)arg1 forVariant:(long long)arg2 shoudCrop:(_Bool)arg3 relativeCropRect:(struct CGRect)arg4 wallpaperMode:(long long)arg5;
- (void)restoreDefaultWallpaperForAllVariantsAndNotify:(_Bool)arg1;
- (void)migrateWallpaperOptionsForImageIfNecessaryForVariant:(long long)arg1 representingVariants:(long long)arg2;
- (void)safeMigrateWallpaperImageIfNecessary;
- (void)regenerateThumbnailsIfNecessary;
- (id)migratedWallpaperOptionsForWallpaperOptions:(id)arg1 originalImageSize:(struct CGSize)arg2;
- (struct CGRect)cropRectForOldCropRect:(struct CGRect)arg1 portrait:(_Bool)arg2 zoomScale:(double)arg3 oldParallaxFactor:(double)arg4 forImageSize:(struct CGSize)arg5 newZoomScale:(double *)arg6;
- (double)parallaxFactorForCropRect:(struct CGRect)arg1 portrait:(_Bool)arg2 forImageSize:(struct CGSize)arg3 zoomScale:(double)arg4;
- (_Bool)safeMigrateWallpaperImageIfNecessaryForVariant:(long long)arg1 representingVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (_Bool)setWallpaperThumbnailFromFullsizeImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)regenerateThumbnailIfNecessaryForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)saveCroppedVideo:(id)arg1 toURL:(id)arg2 cropRect:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (Class)proceduralWallpaperClassForIdentifier:(id)arg1;
- (void)removeAllDataExceptForType:(long long)arg1 variants:(long long)arg2 variantsShareWallpaperConfiguration:(_Bool)arg3;
- (void)removeVideoForVariants:(long long)arg1;
- (void)delayNotifyingChangeForVariants:(long long)arg1;
- (struct CGRect)cropRectForViewPort:(struct CGRect)arg1 portrait:(_Bool)arg2 zoomScale:(double)arg3 parallaxFactor:(double)arg4 forImageSize:(struct CGSize)arg5 contentScaleFactor:(double)arg6;
- (id)lockScreenWallpaperConfigurationIncludingValuesForTypes:(unsigned long long)arg1;
- (id)homeScreenWallpaperConfigurationIncludingValuesForTypes:(unsigned long long)arg1;
- (_Bool)setWallpaperImage:(id)arg1 wallpaperOptions:(id)arg2 forVariants:(long long)arg3;
- (_Bool)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2;
- (void)removeWallpaperImagesForVariants:(long long)arg1;
- (_Bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2;
- (void)performMigrationWithFailureHandler:(CDUnknownBlockType)arg1;
- (void)regenerateStaticWallpaperThumbnailImages;
- (id)videoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)setProceduralWallpaperIdentifier:(id)arg1 options:(id)arg2 forVariants:(long long)arg3;
- (void)getBestCropRect:(out struct CGRect *)arg1 zoomScale:(out double *)arg2 forImageSize:(struct CGSize)arg3 portrait:(_Bool)arg4 parallaxFactor:(double)arg5;

@end
