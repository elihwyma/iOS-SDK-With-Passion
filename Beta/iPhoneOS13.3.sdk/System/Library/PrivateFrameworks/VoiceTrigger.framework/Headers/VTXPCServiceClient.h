/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface VTXPCServiceClient : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_vtxConnection;
}

- (id)init;
- (void)dealloc;
- (id)_service;
- (void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1;
- (void)notifySecondChanceRequest;
- (void)notifyTriggerEventRequest;
- (void)resetAssertions;
- (void)clearVoiceTriggerCount;
- (void)requestAudioCapture:(double)arg1;
- (void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(CDUnknownBlockType)arg1;
- (void)setCurrentBuiltInRTModelDictionary:(id)arg1;
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2;
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;
- (void)setRaiseToSpeakBypassing:(_Bool)arg1 timeout:(double)arg2;
- (unsigned char)getLastTriggerType;
- (long long)getVoiceTriggerCount;
- (id)getFirstChanceAudioBuffer;
- (id)getFirstChanceVTEventInfo;
- (id)getFirstChanceTriggeredDate;
- (long long)isLastTriggerFollowedBySpeech;
- (id)requestCurrentVoiceTriggerAssetDictionary;
- (id)requestCurrentBuiltInRTModelDictionary;

@end
