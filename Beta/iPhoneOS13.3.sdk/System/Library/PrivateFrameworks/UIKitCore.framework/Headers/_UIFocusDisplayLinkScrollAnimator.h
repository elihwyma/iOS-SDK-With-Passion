/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMapTable, NSTimer, UIScreen, _UIFocusEngineScrollableContainerOffsets;

__attribute__((visibility("hidden")))
@interface _UIFocusDisplayLinkScrollAnimator : NSObject

{
    UIScreen *_screen;
    _UIFocusEngineScrollableContainerOffsets *_singleScrollableContainerEntry;
    NSMapTable *_scrollableContainers;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    double _lastTimerFireDate;
    double _defaultConvergenceRate;
}

@property (nonatomic) double defaultConvergenceRate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGPoint)targetContentOffsetForScrollableContainer:(id)arg1;
- (void)cancelScrollingForScrollableContainer:(id)arg1;
- (id)_entryForScrollableContainer:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)_updateHeartbeatConfiguration;
- (_Bool)_shouldPushAndPopRunLoopModes;
- (_Bool)_canCreateDisplayLink;
- (void)_displayLinkHeartbeat:(id)arg1;
- (void)_timerHeartbeat:(id)arg1;
- (void)_commonHeartbeat:(double)arg1;
- (void)_processEntry:(id)arg1 timeDelta:(long long)arg2 completed:(id)arg3;
- (struct CGPoint)_applyAccelerationLimitToAcceleration:(struct CGPoint)arg1 currentOffset:(struct CGPoint)arg2 targetOffset:(struct CGPoint)arg3;
- (id)initWithScreen:(id)arg1;
- (void)setTargetContentOffset:(struct CGPoint)arg1 forScrollableContainer:(id)arg2 convergenceRate:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isAnimatingScrollableContainer:(id)arg1;
- (struct CGPoint)currentVelocityForScrollableContainer:(id)arg1;
- (struct CGPoint)velocityToScrollFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2;
- (void)_switchToTimerScrolling;

@end
