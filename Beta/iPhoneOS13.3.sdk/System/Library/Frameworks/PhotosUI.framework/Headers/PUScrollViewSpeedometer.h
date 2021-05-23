/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSTimer, UIScrollView;

@protocol PUScrollViewSpeedometerDelegate;

@interface PUScrollViewSpeedometer : NSObject

{
    _Bool _delegateSupportsRegimeChange;
    id <PUScrollViewSpeedometerDelegate> _delegate;
    long long _regime;
    double _mediumUpperThreshold;
    double _mediumLowerThreshold;
    double _fastUpperThreshold;
    double _fastLowerThreshold;
    UIScrollView *__lastScrollView;
    double __lastTime;
    NSTimer *__timeoutTimer;
    long long __nextRegime;
    long long __nextRegimeCount;
    struct CGPoint _scrollSpeed;
    struct CGSize __lastContentSize;
    struct CGPoint __lastContentOffset;
}

@property (nonatomic, setter=_setScrollSpeed:) struct CGPoint scrollSpeed;
@property (nonatomic, setter=_setRegime:) long long regime;
@property (weak, nonatomic, setter=_setLastScrollView:) UIScrollView *_lastScrollView;
@property (nonatomic, setter=_setLastContentSize:) struct CGSize _lastContentSize;
@property (nonatomic, setter=_setLastTime:) double _lastTime;
@property (nonatomic, setter=_setLastContentOffset:) struct CGPoint _lastContentOffset;
@property (retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer;
@property (nonatomic, setter=_setNextRegime:) long long _nextRegime;
@property (nonatomic, setter=_setNextRegimeCount:) long long _nextRegimeCount;
@property (weak, nonatomic) id <PUScrollViewSpeedometerDelegate> delegate;
@property (nonatomic) double mediumUpperThreshold;
@property (nonatomic) double mediumLowerThreshold;
@property (nonatomic) double fastUpperThreshold;
@property (nonatomic) double fastLowerThreshold;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)_rescheduleTimeout;
- (void)_handleTimeoutTimer:(id)arg1;
- (void)scrollViewWillScrollToTop:(id)arg1;
- (long long)_newRegimeForScrollSpeed:(struct CGPoint)arg1;

@end
