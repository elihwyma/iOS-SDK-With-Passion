/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSEventQueueEvent, NSArray, NSHashTable, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface BSEventQueue : NSObject

{
    NSHashTable *_eventQueueLocks;
    NSMutableArray *_eventQueue;
    _Bool _processingEvents;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    BSEventQueueEvent *_executingEvent;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) BSEventQueueEvent *executingEvent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly, getter=isLocked) _Bool locked;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (copy, nonatomic, readonly) NSArray *pendingEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_addEventQueueLock:(id)arg1;
- (void)_removeEventQueueLock:(id)arg1;
- (_Bool)_shouldProcessEvent:(id)arg1 enqueuedDuringExecutionOfEvent:(id)arg2;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (void)_processNextEvent;
- (void)executeOrInsertEvents:(id)arg1 atPosition:(int)arg2;
- (void)_executeOrPendEvents:(id)arg1 position:(int)arg2;
- (id)acquireLockForReason:(id)arg1;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)flushEvents:(id)arg1;
- (void)_noteWillCancelEventsWithName:(id)arg1 count:(unsigned long long)arg2;
- (void)relinquishLock:(id)arg1;
- (void)_noteQueueDidDrain;
- (void)_noteQueueDidLock;
- (void)_noteQueueDidUnlock;
- (id)initWithName:(id)arg1 onQueue:(id)arg2;
- (void)executeOrInsertEvent:(id)arg1 atPosition:(int)arg2;
- (void)flushPendingEvents;
- (void)flushAllEvents;
- (void)cancelEventsWithName:(id)arg1;
- (_Bool)hasEventWithPrefix:(id)arg1;
- (_Bool)hasEventWithName:(id)arg1;

@end
