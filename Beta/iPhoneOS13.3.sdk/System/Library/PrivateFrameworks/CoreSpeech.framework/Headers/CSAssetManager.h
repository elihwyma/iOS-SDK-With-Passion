/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAssetDownloadingOption, CSPolicy, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSAssetManager : NSObject

{
    CSPolicy *_enablePolicy;
    NSString *_currentLanguageCode;
    CSAssetDownloadingOption *_downloadingOption;
    NSMutableDictionary *_observers;
    NSObject<OS_dispatch_source> *_downloadTimer;
    long long _downloadTimerCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *currentLanguageCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (void)_fetchRemoteMetaData;
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)setAssetDownloadingOption:(id)arg1;
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;
- (id)initWithDownloadOption:(id)arg1;
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (void)_createPeriodicalDownloadTimer;
- (void)_startPeriodicalDownload;
- (void)_stopPeriodicalDownload;
- (_Bool)_canFetchRemoteAsset:(unsigned long long)arg1;
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg1 didReceiveNewVoiceTriggerAssetMetaData:(_Bool)arg2;
- (void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeechEndpointAssetMetaData:(_Bool)arg2;
- (void)CSAssetController:(id)arg1 didDownloadNewAssetForType:(unsigned long long)arg2;
- (id)assetForCurrentLanguageOfType:(unsigned long long)arg1;
- (id)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1;
- (void)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;

@end
