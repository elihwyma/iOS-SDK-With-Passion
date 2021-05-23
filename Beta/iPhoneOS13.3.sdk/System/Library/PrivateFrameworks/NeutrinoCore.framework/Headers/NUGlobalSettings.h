/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface NUGlobalSettings : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

+ (void)reset;
+ (id)globalSettings;
+ (void)setCacheNodeDirectoryURL:(id)arg1;
+ (void)setImageSourceDisableRAW:(_Bool)arg1;
+ (_Bool)deviceDisableMetal;
+ (void)setDeviceDisableMetal:(_Bool)arg1;
+ (_Bool)deviceDisableOpenGL;
+ (void)setDeviceDisableOpenGL:(_Bool)arg1;
+ (_Bool)devicePrintRenderer;
+ (void)setDevicePrintRenderer:(_Bool)arg1;
+ (long long)deviceDefaultSampleMode;
+ (void)setDeviceDefaultSampleMode:(long long)arg1;
+ (long long)storagePoolNonPurgeableLimit;
+ (void)setStoragePoolNonPurgeableLimit:(long long)arg1;
+ (long long)storagePoolPurgeableLimit;
+ (void)setStoragePoolPurgeableLimit:(long long)arg1;
+ (double)storagePoolMigrationDelay;
+ (void)setStoragePoolMigrationDelay:(double)arg1;
+ (_Bool)surfaceStorageFactoryUsePool;
+ (void)setSurfaceStorageFactoryUsePool:(_Bool)arg1;
+ (_Bool)bufferStorageFactoryUsePool;
+ (void)setBufferStorageFactoryUsePool:(_Bool)arg1;
+ (_Bool)imageRenderJobUseSurfaceRenderer;
+ (void)setImageRenderJobUseSurfaceRenderer:(_Bool)arg1;
+ (_Bool)imageRenderJobUseTextureRenderer;
+ (void)setImageRenderJobUseTextureRenderer:(_Bool)arg1;
+ (double)renderJSPipelineTimeout;
+ (void)setRenderJSPipelineTimeout:(double)arg1;
+ (_Bool)rendererUseHalfFloat;
+ (void)setRendererUseHalfFloat:(_Bool)arg1;
+ (_Bool)rendererClampToAlpha;
+ (void)setRendererClampToAlpha:(_Bool)arg1;
+ (_Bool)rendererUseP3Linear;
+ (void)setRendererUseP3Linear:(_Bool)arg1;
+ (long long)imageTileSize;
+ (void)setImageTileSize:(long long)arg1;
+ (long long)imageTileBorder;
+ (void)setImageTileBorder:(long long)arg1;
+ (_Bool)imageSourceDisableRAW;
+ (_Bool)imageSourceDisableCacheImmediately;
+ (void)setImageSourceDisableCacheImmediately:(_Bool)arg1;
+ (long long)cacheNodeCacheSizeLimit;
+ (void)setCacheNodeCacheSizeLimit:(long long)arg1;
+ (long long)cacheNodeFilePermissions;
+ (void)setCacheNodeFilePermissions:(long long)arg1;
+ (double)cacheNodeImageCompression;
+ (void)setCacheNodeImageCompression:(double)arg1;
+ (_Bool)isViewDebugEnabled;
+ (void)setViewDebugEnabled:(_Bool)arg1;
+ (id)cacheNodeDirectoryURL;
+ (_Bool)renderVideoLive;
+ (void)setRenderVideoLive:(_Bool)arg1;
+ (_Bool)platformHasWideColor;
+ (void)setPlatformHasWideColor:(_Bool)arg1;
+ (id)pipelineSourceURL;
+ (void)setPipelineSourceURL:(id)arg1;
+ (_Bool)imageLayerDebug;
+ (void)setImageLayerDebug:(_Bool)arg1;
+ (_Bool)displayDisableDeepColor;
+ (void)setDisplayDisableDeepColor:(_Bool)arg1;
+ (_Bool)displayForceDeepColor;
+ (void)setDisplayForceDeepColor:(_Bool)arg1;
+ (_Bool)displayDisableColorMatching;
+ (void)setDisplayDisableColorMatching:(_Bool)arg1;
+ (_Bool)renderTransparencyOverBlack;
+ (void)setRenderTransparencyOverBlack:(_Bool)arg1;
+ (_Bool)renderTransparencyOpaque;
+ (void)setRenderTransparencyOpaque:(_Bool)arg1;
+ (void)setUpCacheNodeDirectoryWithComponent:(id)arg1;
+ (_Bool)logPeakRenderCIUsuage;
+ (void)setLogPeakRenderCIUsuage:(_Bool)arg1;

- (id)init;
- (void)reset;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)_settingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (_Bool)boolSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (long long)integerSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (double)doubleSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)stringSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)urlSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;

@end
