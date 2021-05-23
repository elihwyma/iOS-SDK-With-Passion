/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MTExponentialBackOffTimer : NSObject

{
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    double _initialTime;
    unsigned long long _currentBackoff;
    unsigned long long _backoffFactor;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double initialTime;
@property (nonatomic) unsigned long long currentBackoff;
@property (nonatomic) unsigned long long backoffFactor;

+ (id)timerWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(CDUnknownBlockType)arg3;
+ (id)timerWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(CDUnknownBlockType)arg3 queue:(id)arg4;
+ (id)timerWithInitialTime:(double)arg1 fireBlock:(CDUnknownBlockType)arg2;

- (id)description;
- (void)stop;
- (void)start;
- (void)reset;
- (void)_cancel;
- (id)initWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)timerFinished;

@end
