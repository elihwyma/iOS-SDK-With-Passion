/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString, NSTimer, PXScrollViewController;

@interface PXScrollViewSpeedometer : PXObservable

{
    _Bool _hasRampedUpForCurrentAnimatedScroll;
    PXScrollViewController *_scrollViewController;
    long long _regime;
    long long _previousRegime;
    double __lastTime;
    NSTimer *__timeoutTimer;
    long long __nextRegime;
    long long __nextRegimeCount;
    struct CGPoint _scrollVelocity;
    struct CGPoint _lastScrollDirection;
    struct CGPoint _scrollAcceleration;
    struct CGRect __lastVisibleRect;
}

@property (nonatomic, setter=_setLastVisibleRect:) struct CGRect _lastVisibleRect;
@property (nonatomic, setter=_setLastTime:) double _lastTime;
@property (retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer;
@property (nonatomic, setter=_setNextRegime:) long long _nextRegime;
@property (nonatomic, setter=_setNextRegimeCount:) long long _nextRegimeCount;
@property (nonatomic) struct CGPoint scrollVelocity;
@property (nonatomic) struct CGPoint scrollAcceleration;
@property (nonatomic) struct CGPoint lastScrollDirection;
@property (nonatomic) _Bool hasRampedUpForCurrentAnimatedScroll;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic, readonly) long long regime;
@property (nonatomic, readonly) long long previousRegime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;
- (void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;
- (id)initWithScrollController:(id)arg1;
- (void)_updateScrollRegime;
- (void)_handleScrollEvent:(id)arg1 didScrollingEnd:(_Bool)arg2;
- (void)_setRegime:(long long)arg1;
- (void)_setPreviousRegime:(long long)arg1;
- (double)mediumLowerThreshold;
- (double)mediumUpperThreshold;
- (double)fastLowerThreshold;
- (double)fastUpperThreshold;
- (void)_scheduleScrubbingTimeout;
- (void)_handleScrubbingTimeout;
- (void)_rescheduleTimeout;
- (void)_handleTimeoutTimer:(id)arg1;

@end
