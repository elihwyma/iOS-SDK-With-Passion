/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSVoiceTriggerAssetHandler.h>

@class CSAsset, NSString;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler

{
    CSAsset *_cachedAsset;
}

@property (retain) CSAsset *cachedAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)getVoiceTriggerAsset:(CDUnknownBlockType)arg1;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(_Bool)arg2;
- (void)_getVoiceTriggerAssetFromAssetManager:(CDUnknownBlockType)arg1;
- (void)_checkNewAssetAvailablity;

@end
