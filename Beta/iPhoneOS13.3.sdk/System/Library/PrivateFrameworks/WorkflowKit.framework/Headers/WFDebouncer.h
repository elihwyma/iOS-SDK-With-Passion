/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WFDebouncer : NSObject

{
    double _delay;
    double _maximumDelay;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_targetTable;
    NSObject<OS_dispatch_source> *_delayTimer;
    NSObject<OS_dispatch_source> *_maximumDelayTimer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMapTable *targetTable;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *delayTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *maximumDelayTimer;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) double maximumDelay;

- (void)fire;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithDelay:(double)arg1 queue:(id)arg2;
- (id)initWithDelay:(double)arg1 maximumDelay:(double)arg2 queue:(id)arg3;
- (void)resetDelayTimer;
- (void)resetMaximumDelayTimer;
- (void)restartDelayTimer;
- (void)startMaximumDelayTimerIfNecessary;
- (void)poke;

@end
