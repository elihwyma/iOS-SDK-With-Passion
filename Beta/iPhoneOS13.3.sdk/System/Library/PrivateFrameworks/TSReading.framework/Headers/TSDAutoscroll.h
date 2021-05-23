/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol TSDAutoscrollDelegate;

@interface TSDAutoscroll : NSObject

{
    NSObject<TSDAutoscrollDelegate> *mTarget;
    struct CGPoint mPoint;
    int mDirections;
    double mRepeatInterval;
    NSTimer *mTimer;
    unsigned long long mCount;
    _Bool mActive;
    struct CGPoint mLastAutoscrollDelta;
    double mLastFired;
    _Bool mTargetIsAutoscrolling;
}

@property (retain, nonatomic) NSObject<TSDAutoscrollDelegate> *target;
@property (nonatomic) struct CGPoint point;
@property (nonatomic) int directions;
@property (nonatomic) double repeatInterval;
@property (nonatomic) unsigned long long count;
@property (nonatomic) _Bool active;
@property (nonatomic) _Bool targetIsAutoscrolling;
@property (nonatomic, readonly) struct CGPoint lastAutoscrollDelta;

+ (void)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint)arg2;

- (void)dealloc;
- (void)invalidate;
- (void)timerFired:(id)arg1;
- (void)p_cleanup;
- (_Bool)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint)arg2 directions:(int)arg3 repeatInterval:(double)arg4;
- (unsigned long long)p_deltaForCount:(unsigned long long)arg1;

@end
