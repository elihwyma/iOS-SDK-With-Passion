/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKInputEvent.h>

@interface TISKSpaceKeyEvent : TISKInputEvent

- (id)description;
- (void)reportToSession:(id)arg1;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (id)init:(id)arg1 order:(long long)arg2;

@end
