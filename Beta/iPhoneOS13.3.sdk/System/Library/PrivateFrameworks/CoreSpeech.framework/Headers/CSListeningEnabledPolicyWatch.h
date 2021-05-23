/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSPolicy.h>

@interface CSListeningEnabledPolicyWatch : CSPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addListeningEnabledConditions;

@end
