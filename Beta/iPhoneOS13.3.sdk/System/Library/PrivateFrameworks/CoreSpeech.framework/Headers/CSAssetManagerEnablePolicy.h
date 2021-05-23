/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSPolicy.h>

@interface CSAssetManagerEnablePolicy : CSPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addAssetManagerEnabledConditions;
- (_Bool)_shouldCheckNetworkAvailability;

@end
