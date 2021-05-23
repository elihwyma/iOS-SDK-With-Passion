/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/TISKInputEvent.h>

@interface TISKDeleteKeyEvent : TISKInputEvent

{
    long long _deletePostion;
}

@property (nonatomic) long long deletePostion;

- (id)description;
- (void)reportToSession:(id)arg1;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (id)init:(id)arg1 order:(long long)arg2;
- (long long)_metricDeleteKeyPostion;

@end
