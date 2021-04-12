//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFRSSIQueue;

@interface SFBubbleEstimator : NSObject
{
    SFRSSIQueue *_rssiQueue;
    NSUInteger _thresholdStartTicks;
    BOOL _insideBubble;
    BOOL _insideBubbleWithThreshold;
    BOOL _preventBoost;
    long long _rssiEnter;
    long long _rssiExit;
    double _thresholdSeconds;
}

+ (id)estimatorWithEnter:(long long)arg1 exit:(long long)arg2 threshold:(double)arg3;
+ (id)estimatorWithEnter:(long long)arg1 exit:(long long)arg2;
@property(nonatomic) double thresholdSeconds; // @synthesize thresholdSeconds=_thresholdSeconds;
@property(nonatomic) long long rssiExit; // @synthesize rssiExit=_rssiExit;
@property(nonatomic) long long rssiEnter; // @synthesize rssiEnter=_rssiEnter;
@property(nonatomic) BOOL preventBoost; // @synthesize preventBoost=_preventBoost;
@property(readonly, nonatomic) BOOL insideBubbleWithThreshold; // @synthesize insideBubbleWithThreshold=_insideBubbleWithThreshold;
@property(readonly, nonatomic) BOOL insideBubble; // @synthesize insideBubble=_insideBubble;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double velocitySmoothed;
@property(readonly, nonatomic) double velocity;
- (BOOL)shouldExpandBubble;
- (long long)updateWithRSSI:(long long)arg1;
- (void)reset;

@end

