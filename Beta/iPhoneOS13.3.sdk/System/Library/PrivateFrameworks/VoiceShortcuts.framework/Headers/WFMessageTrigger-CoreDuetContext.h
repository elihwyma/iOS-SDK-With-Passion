/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <WFMessageTrigger.h>

@interface WFMessageTrigger (CoreDuetContext)

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;

@end
