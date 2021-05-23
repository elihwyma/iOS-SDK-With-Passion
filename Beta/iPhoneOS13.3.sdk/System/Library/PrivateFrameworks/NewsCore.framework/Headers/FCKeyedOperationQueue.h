/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSOrderedSet;

@protocol FCKeyedOperationQueueDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface FCKeyedOperationQueue : NSObject

{
    _Bool _suspended;
    id <FCKeyedOperationQueueDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSMutableOrderedSet *_mutableKeyQueue;
    NSMutableSet *_keysForExecutingOperations;
    long long _maxConcurrentOperationCount;
    NSMutableDictionary *_cancelHandlersByKey;
    NSObject<OS_dispatch_group> *_operationExecutionGroup;
}

@property (weak, nonatomic) id <FCKeyedOperationQueueDelegate> delegate;
@property (retain, nonatomic) NSMutableOrderedSet *mutableKeyQueue;
@property (retain, nonatomic) NSMutableSet *keysForExecutingOperations;
@property (nonatomic) long long maxConcurrentOperationCount;
@property (retain, nonatomic) NSMutableDictionary *cancelHandlersByKey;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *operationExecutionGroup;
@property (copy, nonatomic) NSOrderedSet *keyQueue;
@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;

- (id)init;
- (id)initWithDelegate:(id)arg1 maxConcurrentOperationCount:(long long)arg2;
- (void)notifyWhenAllOperationsAreFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (void)_cancelOperationsIfNeeded;
- (void)_enqueueOperationIfNeeded;

@end
