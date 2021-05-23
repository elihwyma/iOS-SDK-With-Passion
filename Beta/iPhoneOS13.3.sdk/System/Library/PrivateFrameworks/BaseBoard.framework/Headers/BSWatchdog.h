/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSTimer, NSDate;

@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;

@interface BSWatchdog : NSObject

{
    id <BSWatchdogDelegate> _delegate;
    id <BSWatchdogProviding> _provider;
    NSObject<OS_dispatch_queue> *_queue;
    double _timeout;
    BSTimer *_timer;
    CDUnknownBlockType _completion;
    NSDate *_startDate;
    _Bool _invalidated;
    _Bool _completed;
    _Bool _hasFired;
}

@property (retain, nonatomic) id <BSWatchdogDelegate> delegate;
@property (nonatomic, readonly) id <BSWatchdogProviding> provider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly, getter=hasFired) _Bool fired;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)start;
- (id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startWatchdogTimer;
- (void)_completeWatchdogAfterFiring:(_Bool)arg1;
- (void)_watchdogInvalidated;
- (void)_invalidateTimer;
- (void)_stageOneTimerFired;
- (void)_setupTimerWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_stageTwoTimerFired;
- (void)_watchdogTimerFired;
- (id)initWithProvider:(id)arg1 queue:(id)arg2;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2;

@end
