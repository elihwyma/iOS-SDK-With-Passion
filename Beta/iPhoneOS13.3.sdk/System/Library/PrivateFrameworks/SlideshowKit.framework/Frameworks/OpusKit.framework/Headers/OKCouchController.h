/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class OKPresentationCouch, OKPresentationCouchStep;

@protocol OKCouchControllerDelegate, OS_dispatch_source;

@interface OKCouchController : NSObject

{
    OKPresentationCouch *_couch;
    OKPresentationCouchStep *_lastStep;
    unsigned long long _stepMode;
    double _currentStepStartTime;
    double _readinessWaitStartTime;
    double _progress;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _startValidityBarrier;
    long long _stopCounter;
    _Bool _isPlaying;
    _Bool _hasStartedToWait;
    _Bool _loops;
    id <OKCouchControllerDelegate> _delegate;
    double _defaultStepDuration;
    double _currentStepDuration;
    double _delayForReadinessWaitNotification;
}

@property id <OKCouchControllerDelegate> delegate;
@property (nonatomic) double defaultStepDuration;
@property (nonatomic, readonly) double currentStepDuration;
@property (nonatomic) _Bool loops;
@property (nonatomic) double delayForReadinessWaitNotification;

- (void)dealloc;
- (void)startPlayback;
- (void)stopPlayback;
- (void)_setupTimer;
- (void)overrideMode:(unsigned long long)arg1 andCurrentStepDuration:(double)arg2;
- (void)allowPlayback;
- (void)preventPlayback;
- (_Bool)canStartPlayback;
- (void)startPlaybackAfterDelay:(double)arg1;
- (id)initWithCouch:(id)arg1 andDelegate:(id)arg2;
- (void)_dispatchNextStep;
- (id)_nextCouchStep:(id)arg1;
- (void)_executeStep:(id)arg1 forTargetPageViewController:(id)arg2;
- (void)_timerEventHandler;

@end
