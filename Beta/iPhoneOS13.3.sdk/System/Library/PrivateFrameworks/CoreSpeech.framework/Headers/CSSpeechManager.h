/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAudioRecorder, CSBuiltInVoiceTrigger, CSFallbackAudioSessionReleaseProvider, CSKeywordDetector, CSMyriadPHash, CSMyriadSelfTriggerCoordinator, CSOpportuneSpeakListnerTestService, CSSelfTriggerDetector, CSSmartSiriVolume, CSSpIdImplicitTraining, CSVoiceProfileRetrainManager, CSVoiceTriggerEventNotifier, CSVoiceTriggerFidesClient, CSVoiceTriggerFileLogger, CSVoiceTriggerFirstPassHearst, CSVoiceTriggerFirstPassJarvis, NSMutableDictionary, NSString;

@protocol CSSmartSiriVolumeDelegate, CSSpeechManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSSpeechManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CSSmartSiriVolume *_smartSiriVolume;
    NSObject<OS_dispatch_queue> *_assetQueryQueue;
    CSAudioRecorder *_audioRecorder;
    NSMutableDictionary *_audioProviders;
    CSFallbackAudioSessionReleaseProvider *_fallbackAudioSessionReleaseProvider;
    id <CSSpeechManagerDelegate> _clientController;
    id <CSSmartSiriVolumeDelegate> _volumeClientController;
    NSObject<OS_dispatch_queue> *_voiceTriggerQueue;
    CSBuiltInVoiceTrigger *_voiceTrigger;
    CSVoiceTriggerEventNotifier *_voiceTriggerEventNotifier;
    CSVoiceTriggerFileLogger *_voiceTriggerFileLogger;
    CSSelfTriggerDetector *_selfTriggerDetector;
    CSKeywordDetector *_keywordDetector;
    CSMyriadPHash *_myriad;
    CSMyriadSelfTriggerCoordinator *_myriadSelfTriggerCoordinator;
    CSVoiceTriggerFidesClient *_voiceTriggerFidesClient;
    CSVoiceTriggerFirstPassJarvis *_voiceTriggerFirstPassJarvis;
    CSVoiceTriggerFirstPassHearst *_voiceTriggerFirstPassHearst;
    CSVoiceProfileRetrainManager *_voiceTriggerRetrainer;
    CSSpIdImplicitTraining *_voiceTriggerImplicitTraining;
    NSObject<OS_dispatch_source> *_clearLoggingFileTimer;
    long long _clearLoggingFileTimerCount;
    CSOpportuneSpeakListnerTestService *_opportuneSpeakListnerTestService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue;
@property (retain, nonatomic) CSAudioRecorder *audioRecorder;
@property (retain, nonatomic) NSMutableDictionary *audioProviders;
@property (retain, nonatomic) CSFallbackAudioSessionReleaseProvider *fallbackAudioSessionReleaseProvider;
@property (weak, nonatomic) id <CSSpeechManagerDelegate> clientController;
@property (weak, nonatomic) id <CSSmartSiriVolumeDelegate> volumeClientController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceTriggerQueue;
@property (retain, nonatomic) CSBuiltInVoiceTrigger *voiceTrigger;
@property (retain, nonatomic) CSVoiceTriggerEventNotifier *voiceTriggerEventNotifier;
@property (retain, nonatomic) CSVoiceTriggerFileLogger *voiceTriggerFileLogger;
@property (retain, nonatomic) CSSelfTriggerDetector *selfTriggerDetector;
@property (retain, nonatomic) CSKeywordDetector *keywordDetector;
@property (retain, nonatomic) CSMyriadPHash *myriad;
@property (retain, nonatomic) CSMyriadSelfTriggerCoordinator *myriadSelfTriggerCoordinator;
@property (retain, nonatomic) CSVoiceTriggerFidesClient *voiceTriggerFidesClient;
@property (retain, nonatomic) CSVoiceTriggerFirstPassJarvis *voiceTriggerFirstPassJarvis;
@property (retain, nonatomic) CSVoiceTriggerFirstPassHearst *voiceTriggerFirstPassHearst;
@property (retain, nonatomic) CSVoiceProfileRetrainManager *voiceTriggerRetrainer;
@property (retain, nonatomic) CSSpIdImplicitTraining *voiceTriggerImplicitTraining;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clearLoggingFileTimer;
@property (nonatomic) long long clearLoggingFileTimerCount;
@property (retain, nonatomic) CSOpportuneSpeakListnerTestService *opportuneSpeakListnerTestService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) CSSmartSiriVolume *smartSiriVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (id)sharedManagerForCoreSpeechDaemon;

- (id)init;
- (void)dealloc;
- (void)startManager;
- (void)voiceTriggerAssetHandler:(id)arg1 didChangeCachedAsset:(id)arg2;
- (void)voiceTriggerXPCService:(id)arg1 setPhraseSpotterBypassing:(_Bool)arg2;
- (id)audioProviderWithContext:(id)arg1 error:(id *)arg2;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2;
- (void)_createClearLoggingFileTimer;
- (void)_startVoiceTrigger;
- (void)_setupVoiceTriggerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startClearLoggingFilesTimer;
- (id)_voiceTriggerEventNotifierCreateIfNeeded:(_Bool)arg1;
- (id)_myriadSelfTriggerCoordinatorIfNeeded:(_Bool)arg1;
- (void)_setupForHearstIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupForJarvisIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getVoiceTriggerAssetIfNeeded:(CDUnknownBlockType)arg1;
- (id)_getAudioRecorderWithError:(id *)arg1;
- (void)_reinitializeVoiceTriggerIfNeeded;
- (void)_reinitializeVoiceTriggerWithAsset:(id)arg1;
- (void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1;
- (void)_teardownForBluetoothDevice;
- (void)_setupForBluetoothDeviceIfNeededWithDeviceType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareForBluetoothDeviceWithDeviceType:(unsigned long long)arg1 asset:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;
- (void)audioRecorderWillBeDestroyed:(id)arg1;
- (void)audioProviderInvalidated:(id)arg1 streamHandleId:(unsigned long long)arg2;
- (void)registerSpeechController:(id)arg1;
- (void)registerSiriClientProxy:(id)arg1;
- (void)registerVolumeController:(id)arg1;
- (id)audioProviderWithUUID:(id)arg1;
- (id)audioProviderWithStreamID:(unsigned long long)arg1;
- (id)fetchFallbackAudioSessionReleaseProvider;

@end
