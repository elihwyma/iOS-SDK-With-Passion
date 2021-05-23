/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/Swift-Protocol.h>

@protocol VTTriggerEventMonitorDelegate <Swift>

- (unsigned short)voiceTriggered;
- (unsigned short)earlyDetected;

@end
