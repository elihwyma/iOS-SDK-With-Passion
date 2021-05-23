/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <WFPredictedLocationTransitionTrigger.h>

@interface WFPredictedLocationTransitionTrigger (CoreDuetContext)

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (double)timeIntervalUpperBound;
- (double)timeIntervalLowerBound;

@end
