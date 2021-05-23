/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSString, VTBuiltInRTModel, VTCoreSpeechKeepAliveHandler, VTGestureMonitor, VTPhraseSpotter, VTPolicy, VTXPCServiceServer;

@protocol OS_dispatch_queue;

@interface VTStateManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    VTPhraseSpotter *_phraseSpotter;
    VTBuiltInRTModel *_builtInRTModel;
    CDUnknownBlockType _callbackWithMessageAndTimestamp;
    VTPolicy *_enablePolicy;
    VTXPCServiceServer *_xpcServer;
    _Bool _voiceTriggerIsEnabled;
    _Bool _voiceTriggerIsEnabledOnCoreSpeechDaemon;
    _Bool _rtModelDownloaded;
    VTGestureMonitor *_gestureMonitor;
    unsigned long long _wakeGestureHostTime;
    VTCoreSpeechKeepAliveHandler *_coreSpeechKeepAliveHandler;
}

@property (retain, nonatomic) VTCoreSpeechKeepAliveHandler *coreSpeechKeepAliveHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)notifyVoiceTrigger;
+ (id)_serviceClient;
+ (void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1;
+ (void)clearVoiceTriggerCount;
+ (void)requestAudioCapture:(double)arg1;
+ (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(CDUnknownBlockType)arg1;
+ (void)setCurrentBuiltInRTModelDictionary:(id)arg1;
+ (long long)getVoiceTriggerCount;
+ (id)requestCurrentVoiceTriggerAssetDictionary;
+ (id)requestCurrentBuiltInRTModelDictionary;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (void)requestVoiceTriggerEnabled:(_Bool)arg1 forReason:(id)arg2;
+ (void)requestPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;
+ (void)requestRaiseToSpeakBypassing:(_Bool)arg1 timeout:(double)arg2;
+ (void)requestForcedSecondChance;
+ (void)requestForcedTriggerEvent;
+ (_Bool)isLastTriggerForced;
+ (_Bool)isLastTriggerSecondChanceTriggered;
+ (id)firstChanceAudioBuffer;
+ (id)firstChanceVTEventInfo;
+ (id)firstChanceTriggeredDate;
+ (_Bool)iPhoneShouldStartVoiceTriggerInCoreSpeech;

- (id)initWithProperty:(id)arg1 callbackWithMessageAndTimestamp:(CDUnknownBlockType)arg2;
- (id)getModel;
- (id)getPhraseSpotter;
- (void)gestureMonitorDidReceiveWakeGesture:(id)arg1;
- (void)gestureMonitorDidReceiveSleepGesture:(id)arg1;
- (id)initWithProperty:(id)arg1 phraseSpotter:(id)arg2 enablePolicy:(id)arg3 callbackWithMessageAndTimestamp:(CDUnknownBlockType)arg4;
- (void)_notifyStateTransitionToState:(long long)arg1 withStartTimestamp:(unsigned long long)arg2;
- (void)_initializeXPCService;
- (void)_stateTransitionDidOccur:(_Bool)arg1 fromCallback:(_Bool)arg2;
- (void)_powerlog:(id)arg1;
- (void)VTFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(_Bool)arg2;
- (id)initWithProperty:(id)arg1 callbackWithMessage:(CDUnknownBlockType)arg2;

@end
