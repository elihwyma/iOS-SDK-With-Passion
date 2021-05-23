/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/VTPolicy.h>

@interface VTAssetManagerEnablePolicy : VTPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addAssetManagerEnabledConditions;

@end
