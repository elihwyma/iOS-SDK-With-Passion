/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/VTPolicy.h>

@interface VTVoiceTriggerEnabledPolicyAOP : VTPolicy

- (id)init;
- (void)_addVoiceTriggerEnabledConditions;
- (void)_subscribeEventMonitors;

@end
