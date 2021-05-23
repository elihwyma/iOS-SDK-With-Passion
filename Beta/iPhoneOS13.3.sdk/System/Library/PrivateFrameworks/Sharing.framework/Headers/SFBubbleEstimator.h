/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class SFRSSIQueue;

@interface SFBubbleEstimator : NSObject

{
    SFRSSIQueue *_rssiQueue;
    unsigned long long _thresholdStartTicks;
    _Bool _insideBubble;
    _Bool _insideBubbleWithThreshold;
    _Bool _preventBoost;
    long long _rssiEnter;
    long long _rssiExit;
    double _thresholdSeconds;
}

@property (nonatomic, readonly) _Bool insideBubble;
@property (nonatomic, readonly) _Bool insideBubbleWithThreshold;
@property (nonatomic) _Bool preventBoost;
@property (nonatomic) long long rssiEnter;
@property (nonatomic) long long rssiExit;
@property (nonatomic) double thresholdSeconds;
@property (nonatomic, readonly) double velocity;
@property (nonatomic, readonly) double velocitySmoothed;

+ (id)estimatorWithEnter:(long long)arg1 exit:(long long)arg2;
+ (id)estimatorWithEnter:(long long)arg1 exit:(long long)arg2 threshold:(double)arg3;

- (void)reset;
- (_Bool)shouldExpandBubble;
- (long long)updateWithRSSI:(long long)arg1;

@end
