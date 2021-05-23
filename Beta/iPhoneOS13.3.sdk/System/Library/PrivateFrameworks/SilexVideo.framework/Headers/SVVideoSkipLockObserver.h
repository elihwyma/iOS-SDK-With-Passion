/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SVTimeBasedAction, SVTimeline;

@protocol SVVideoSkipThresholdObserving;

@interface SVVideoSkipLockObserver : NSObject

{
    _Bool _locked;
    double _countdown;
    CDUnknownBlockType _unlockBlock;
    CDUnknownBlockType _countdownBlock;
    SVTimeline *_timeline;
    id <SVVideoSkipThresholdObserving> _thresholdObserver;
    SVTimeBasedAction *_unlockAction;
    NSMutableArray *_countdownActions;
}

@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, readonly) id <SVVideoSkipThresholdObserving> thresholdObserver;
@property (nonatomic) _Bool locked;
@property (nonatomic) double countdown;
@property (retain, nonatomic) SVTimeBasedAction *unlockAction;
@property (retain, nonatomic) NSMutableArray *countdownActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, setter=onUnlock:) CDUnknownBlockType unlockBlock;
@property (copy, nonatomic, setter=onCountDown:) CDUnknownBlockType countdownBlock;

- (void)dealloc;
- (_Bool)lockStateForThresholdObserver:(id)arg1 onTimeline:(id)arg2;
- (void)scheduleUnlockActionWithThreshold:(double)arg1;
- (void)scheduleCountdownActionsWithThreshold:(double)arg1;
- (id)initWithTimeline:(id)arg1 thresholdObserver:(id)arg2;

@end
