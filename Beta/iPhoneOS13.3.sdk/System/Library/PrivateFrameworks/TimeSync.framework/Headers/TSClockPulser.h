/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@class NSString, TSClock;

@interface TSClockPulser : NSObject

{
    TSClock *_pulseClock;
    _Bool _hasLastTimestamp;
    _Bool _holdoverMode;
    int _lastLockState;
    _Bool _threadIsRunning;
    _Bool _threadShouldBeRunning;
    unsigned int _startSemaphore;
    unsigned int _stopSemaphore;
    _Bool _useRealtimePriority;
    int _pulseOffset;
    CDUnknownBlockType _pulseHandler;
    unsigned long long _pulsePeriod;
}

@property (copy, nonatomic) CDUnknownBlockType pulseHandler;
@property (nonatomic) _Bool useRealtimePriority;
@property (nonatomic) unsigned long long pulsePeriod;
@property (nonatomic) int pulseOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)pulseThread;
- (void)didChangeClockMasterForClock:(id)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (void)didBeginClockGrandmasterChangeForClock:(id)arg1;
- (void)didEndClockGrandmasterChangeForClock:(id)arg1;
- (id)initWithPulseClock:(id)arg1;
- (_Bool)startPulsing;
- (_Bool)stopPulsing;

@end
