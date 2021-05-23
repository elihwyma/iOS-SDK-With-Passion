/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, RBEventQueueEvent;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RBEventQueue : NSObject

{
    NSMutableArray *_eventQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_eventTimer;
    _Bool _isProcessingEvents;
    _Bool _inModifyBlock;
    _Bool _dirtyDuringModify;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) RBEventQueueEvent *nextEvent;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)addEvents:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)batchModify:(CDUnknownBlockType)arg1;
- (void)removeEvents:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)_queue_stopEventTimer;
- (void)_queue_startEventTimer;
- (void)_queue_processEvents;
- (id)_createTimerWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;

@end
