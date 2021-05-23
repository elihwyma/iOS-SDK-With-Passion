/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/Swift-Protocol.h>

@protocol VTXPCService <Swift>

- (unsigned short)getTestResponse: /* Error: Ran out of types for this method. */;
- (unsigned short)enableVoiceTrigger:withAssertion:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)setPhraseSpotterBypassing:timeout:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)setRaiseToSpeakBypassing:timeout:timestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyVoiceTriggeredSiriSessionCancelled: /* Error: Ran out of types for this method. */;
- (unsigned short)notifySecondChanceRequest;
- (unsigned short)notifyTriggerEventRequest;
- (unsigned short)queryLastTriggerEventTypeWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAssertions;
- (unsigned short)clearVoiceTriggerCount;
- (unsigned short)getVoiceTriggerCountWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getFirstChanceAudioBufferWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getFirstChanceVTEventInfoWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getFirstChanceTriggeredDateWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)isLastTriggerFollowedBySpeechWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAudioCapture: /* Error: Ran out of types for this method. */;
- (unsigned short)requestCurrentVoiceTriggerAssetDictionaryWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestCurrentBuiltInRTModelDictionaryWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setCurrentBuiltInRTModelDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)enableTriggerEventXPCNotification: /* Error: Ran out of types for this method. */;

@end
