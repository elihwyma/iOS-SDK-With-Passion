/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
 */

#import <NSObject.h>

@class NSLock, NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TTSTimer : NSObject

{
    NSMutableArray *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSLock *_timerLock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _paused;
}

- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (void)_startTimer:(id)arg1;
- (void)clearQueue;
- (void)_createTimer;
- (void)pauseQueue;
- (void)_handleTimerFired;
- (void)enqueueBlock:(CDUnknownBlockType)arg1 withDelay:(double)arg2 withId:(long long)arg3;
- (void)continueQueue;

@end
