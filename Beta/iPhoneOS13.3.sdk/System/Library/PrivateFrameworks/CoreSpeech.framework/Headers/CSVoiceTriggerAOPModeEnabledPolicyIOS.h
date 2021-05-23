/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSPolicy.h>

@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addVoiceTriggerAOPModeEnabledConditions;
- (void)_addConditionsForIOSBargeIn;
- (void)_addConditionsForIOSAOP;
- (_Bool)_isSpeechDetectionDevicePresent;

@end
