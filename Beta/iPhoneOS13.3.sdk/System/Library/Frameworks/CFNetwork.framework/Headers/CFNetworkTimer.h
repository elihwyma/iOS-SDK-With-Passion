/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@protocol OS_dispatch_source;

@interface CFNetworkTimer : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    double _lastResumeTime;
    double _lastPauseTime;
    double _runTime;
    int _state;
}

@property int state;

- (void)dealloc;
- (void)setTimer:(double)arg1;
- (void)cancelTimer;
- (id)initWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pauseTimer;
- (void)resumeTimer;
- (void)suspendCallbacksForTimer;
- (void)resumeCallbacksForTimer;
- (void)setCancelCallbacks:(CDUnknownBlockType)arg1;

@end
