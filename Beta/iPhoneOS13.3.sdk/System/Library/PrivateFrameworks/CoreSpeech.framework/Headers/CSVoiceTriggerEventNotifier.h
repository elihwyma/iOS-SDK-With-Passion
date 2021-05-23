/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@protocol OS_dispatch_queue;

@interface CSVoiceTriggerEventNotifier : NSObject

{
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerGotSuperVector:(id)arg1;
- (void)raiseToSpeakDetected:(id)arg1;
- (void)_notifyTriggerEvent:(id)arg1 deviceId:(id)arg2;
- (void)_notifyNearMissEvent:(id)arg1;
- (void)_notifySpeakerReject:(id)arg1;
- (void)_notifySuperVector:(id)arg1;
- (void)_notifyKeywordDetect;
- (void)_notifyRaiseToSpeakTriggerEvent:(id)arg1;
- (id)_createVoiceTriggerEventInfoString:(id)arg1;

@end
