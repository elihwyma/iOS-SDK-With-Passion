/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class VTPolicy;

@protocol OS_dispatch_queue;

@interface VTAssetManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    VTPolicy *_enablePolicy;
}

+ (id)sharedInstance;

- (id)init;
- (void)_fetchRemoteMetaData;
- (_Bool)_isReadyToUse;
- (id)installedAssetForLanguage:(id)arg1;
- (void)_fetchRemoteAssetForLanguage:(id)arg1 supportPremium:(_Bool)arg2;
- (id)_installedAssetForLanguage:(id)arg1 supportPremium:(_Bool)arg2;
- (id)_assetQueryForLanguage:(id)arg1 supportPremium:(_Bool)arg2;
- (id)_filteredAssetsForAssets:(id)arg1 language:(id)arg2 supportPremium:(_Bool)arg3;
- (id)_findLatestInstalledAsset:(id)arg1;
- (id)_installedAssetWithoutMetaDataForLanguage:(id)arg1 supportPremium:(_Bool)arg2;
- (id)_defaultDownloadOptions;
- (void)_runAssetQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateFromRemoteToLocalAssets:(id)arg1;
- (void)_downloadAsset:(id)arg1 withComplete:(CDUnknownBlockType)arg2;
- (void)_addKeyValuePairForQuery:(id *)arg1;
- (void)_startDownloadingVoiceTriggerAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)assetForLanguage:(id)arg1;

@end
