/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, VTSiriPHash;

@interface VTXPCConnection : NSObject

{
    NSMutableSet *_activationAssertions;
    _Bool _isPhraseSpotterBypassed;
    _Bool _isRecording;
    VTSiriPHash *_hasher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (oneway void)getTestResponse:(CDUnknownBlockType)arg1;
- (oneway void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (oneway void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2 timestamp:(double)arg3;
- (oneway void)setRaiseToSpeakBypassing:(_Bool)arg1 timeout:(double)arg2 timestamp:(double)arg3;
- (oneway void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1;
- (oneway void)notifySecondChanceRequest;
- (oneway void)notifyTriggerEventRequest;
- (oneway void)queryLastTriggerEventTypeWithReply:(CDUnknownBlockType)arg1;
- (oneway void)resetAssertions;
- (oneway void)clearVoiceTriggerCount;
- (oneway void)getVoiceTriggerCountWithReply:(CDUnknownBlockType)arg1;
- (oneway void)getFirstChanceAudioBufferWithReply:(CDUnknownBlockType)arg1;
- (oneway void)getFirstChanceVTEventInfoWithReply:(CDUnknownBlockType)arg1;
- (oneway void)getFirstChanceTriggeredDateWithReply:(CDUnknownBlockType)arg1;
- (oneway void)isLastTriggerFollowedBySpeechWithReply:(CDUnknownBlockType)arg1;
- (oneway void)requestAudioCapture:(double)arg1;
- (oneway void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(CDUnknownBlockType)arg1;
- (oneway void)requestCurrentBuiltInRTModelDictionaryWithReply:(CDUnknownBlockType)arg1;
- (oneway void)setCurrentBuiltInRTModelDictionary:(id)arg1;
- (oneway void)enableTriggerEventXPCNotification:(_Bool)arg1;
- (void)handleDisconnect;
- (void)_setPhraseSpotterBypassing:(_Bool)arg1;
- (void)_setRaiseToSpeakBypassing:(_Bool)arg1;

@end
