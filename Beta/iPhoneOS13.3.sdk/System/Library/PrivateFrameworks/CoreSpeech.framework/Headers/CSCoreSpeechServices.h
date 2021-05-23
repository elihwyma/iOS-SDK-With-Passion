/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSCoreSpeechServices : NSObject

+ (id)getCoreSpeechXPCConnection;
+ (void)installedVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)voiceTriggerJarvisLanguageList:(id)arg1 jarvisSelectedLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)getCoreSpeechServiceConnection;
+ (void)voiceTriggerRTModelForVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 downloadedModels:(id)arg3 preinstalledModels:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)requestUpdatedSATAudio;
+ (long long)getFirstPassRunningMode;

@end
