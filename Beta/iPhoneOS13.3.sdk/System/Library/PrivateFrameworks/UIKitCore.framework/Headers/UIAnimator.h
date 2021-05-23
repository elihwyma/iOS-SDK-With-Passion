/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface UIAnimator : NSObject

{
    NSMutableArray *_animations;
    double _lastUpdateTime;
    id _heartbeat[3];
    int _heartbeatClientCount[3];
}

+ (id)sharedAnimator;
+ (void)disableAnimation;
+ (void)enableAnimation;

- (void)dealloc;
- (void)stopAnimation:(id)arg1;
- (void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(_Bool)arg3 startTime:(double)arg4;
- (void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2;
- (void)_startAnimation:(id)arg1 withStartTime:(double)arg2;
- (void)_advanceAnimationsOfType:(int)arg1 withTimestamp:(double)arg2;
- (void)_TimerHeartbeatCallback:(id)arg1;
- (void)_TVHeartbeatCallback:(id)arg1;
- (void)_LCDHeartbeatCallback:(id)arg1;
- (void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(_Bool)arg3;
- (void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(_Bool)arg3;
- (void)removeAnimationsForTarget:(id)arg1;
- (void)startAnimation:(id)arg1;
- (_Bool)_isRunningAnimation:(id)arg1;

@end
