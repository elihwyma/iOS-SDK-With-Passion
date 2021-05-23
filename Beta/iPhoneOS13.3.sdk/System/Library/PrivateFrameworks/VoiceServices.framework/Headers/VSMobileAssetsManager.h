/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface VSMobileAssetsManager : NSObject

{
    NSObject<OS_dispatch_queue> *_downloadQueue;
    NSObject<OS_dispatch_queue> *_assetQueryQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue;

+ (id)sharedManager;
+ (id)selectVoiceResourceAssetForLanguage:(id)arg1;
+ (id)pickCorrectAssetFromLocalAssets:(id)arg1;
+ (id)preinstallAssetsDirectory;
+ (id)_languagesFromAttributes:(id)arg1;
+ (id)queryForVoiceResourceAsset:(id)arg1 returnTypes:(long long)arg2;
+ (id)voiceResourceFromAsset:(id)arg1;
+ (id)bundleIdentifierForVoiceType:(long long)arg1;
+ (void)amendVoiceWithDefaultSettings:(id)arg1;
+ (id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
+ (id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
+ (id)installedVoiceResources;
+ (_Bool)isVoiceAssetWellDefined:(id)arg1;
+ (id)getLatestAssetFromArray:(id)arg1;
+ (id)queryForLanguage:(id)arg1 forType:(long long)arg2 voicename:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6;

- (id)init;
- (void)resetCache;
- (id)selectVoiceResourceAssetForLanguage:(id)arg1;
- (void)migrateAssetIfNeededWithAssetType:(id)arg1;
- (void)downloadCatalog:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_getVoiceAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6;
- (id)voiceDataFromAsset:(id)arg1;
- (id)legacyLocalVocalizerVoiceAssetForLanguage:(id)arg1;
- (id)preinstallAssetsMetadata;
- (id)voiceAssetFromPreinstallMetadata:(id)arg1;
- (id)preinstalledVoicesForLanguage:(id)arg1 gender:(long long)arg2;
- (id)_getResults:(id)arg1;
- (id)_installedVoiceResourceAssetForLanguage:(id)arg1;
- (void)_purgeAsset:(id)arg1;
- (void)amendVoiceWithDefaultSettings:(id)arg1;
- (id)selectVoiceForLang:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
- (id)activeVoiceAssets;
- (id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;
- (id)inactiveVoiceAssets;
- (id)installedVoiceResources;
- (id)_localVoiceForLanguage:(id)arg1 gender:(long long)arg2;
- (id)_builtInVoiceForLanguage:(id)arg1;
- (id)_nonCacheVoiceSelectionForLanguage:(id)arg1 type:(long long)arg2 gender:(long long)arg3 footprint:(long long)arg4;
- (id)selectPreinstalledVoiceForLanguage:(id)arg1 gender:(long long)arg2;
- (void)downloadVoiceAsset:(id)arg1 discretionary:(_Bool)arg2 useBattery:(_Bool)arg3 progressUpdateHandler:(CDUnknownBlockType)arg4;
- (id)downloadCatalog:(id)arg1 options:(id)arg2;
- (void)_downloadAsset:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)populateVoiceData:(id)arg1 fromAsset:(id)arg2;
- (void)migrateAssets;
- (id)cleanUnusedVoiceAssets;
- (void)cleanOldVoiceResources;
- (void)downloadVoiceAsset:(id)arg1 useBattery:(_Bool)arg2 progressUpdateHandler:(CDUnknownBlockType)arg3;
- (void)downloadVoiceAsset:(id)arg1 discretionary:(_Bool)arg2 progressUpdateHandler:(CDUnknownBlockType)arg3;
- (void)cancelDownload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeVoiceAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadVoiceResource:(id)arg1 discretionary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeVoiceResource:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)voiceAssetWithName:(id)arg1 localOnly:(_Bool)arg2 outError:(id *)arg3;
- (void)purgeAsset:(id)arg1;

@end
