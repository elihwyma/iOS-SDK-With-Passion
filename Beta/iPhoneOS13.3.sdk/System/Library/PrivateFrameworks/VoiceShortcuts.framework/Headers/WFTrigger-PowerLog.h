/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <WFTrigger.h>

@interface WFTrigger (PowerLog)

+ (id)powerLogEventKindForTrigger:(id)arg1;

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (_Bool)contextStoreRegistrationIsForWatch;

@end
