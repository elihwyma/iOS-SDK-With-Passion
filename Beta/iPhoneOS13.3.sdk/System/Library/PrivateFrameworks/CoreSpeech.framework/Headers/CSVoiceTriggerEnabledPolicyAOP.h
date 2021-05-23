/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSPolicy.h>

@interface CSVoiceTriggerEnabledPolicyAOP : CSPolicy

- (id)init;
- (void)_addVoiceTriggerEnabledConditions;
- (void)_subscribeEventMonitors;

@end
