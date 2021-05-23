/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CSAssetController : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_assetsMigrationQueue;
    NSDictionary *_csAssetsDictionary;
    NSMutableDictionary *_observers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetsMigrationQueue;
@property (retain, nonatomic) NSDictionary *csAssetsDictionary;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;
+ (id)getVoiceTriggerAssetTypeString;
+ (id)getEndpointAssetTypeString;
+ (id)getLanguageDetectorAssetTypeString;
+ (id)filteredAssetsForAssets:(id)arg1 assetType:(unsigned long long)arg2 language:(id)arg3;
+ (void)addKeyValuePairForQuery:(id *)arg1 assetType:(unsigned long long)arg2;
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+ (unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;
+ (id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg1 assetType:(unsigned long long)arg2;

- (id)init;
- (_Bool)_isReadyToUse;
- (id)_findLatestInstalledAsset:(id)arg1;
- (id)_defaultDownloadOptions;
- (void)_runAssetQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_downloadAsset:(id)arg1 withComplete:(CDUnknownBlockType)arg2;
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1;
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;
- (void)_cleanUpMobileAssetV1Directory;
- (id)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_assetQueryForAssetType:(unsigned long long)arg1;
- (void)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;
- (void)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_downloadAssetCatalogForAssetType:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startDownloadingAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
