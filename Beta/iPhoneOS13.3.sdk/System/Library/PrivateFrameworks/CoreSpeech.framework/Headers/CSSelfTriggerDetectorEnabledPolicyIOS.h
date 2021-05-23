/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSPolicy.h>

@interface CSSelfTriggerDetectorEnabledPolicyIOS : CSPolicy

{
    CSPolicy *_voiceTriggerEnabledPolicy;
}

@property (retain, nonatomic) CSPolicy *voiceTriggerEnabledPolicy;

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addSelfTriggerDetectorEnabledConditions;

@end
