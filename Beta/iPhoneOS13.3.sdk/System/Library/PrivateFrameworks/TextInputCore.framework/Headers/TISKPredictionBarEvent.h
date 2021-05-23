/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKTimestampEvent.h>

@interface TISKPredictionBarEvent : TISKTimestampEvent

- (id)description;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (id)init:(double)arg1 order:(long long)arg2;

@end
