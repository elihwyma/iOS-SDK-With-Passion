/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IKConcurrentEvaluator : NSObject

{
    NSMutableArray *_orderedKeys;
    NSMutableDictionary *_fetchers;
    NSMutableDictionary *_getters;
    long long _activeFetchCount;
    long long _numberOfSchedulingLocksAcquired;
    NSObject<OS_dispatch_semaphore> *_schedulingLock;
    NSObject<OS_dispatch_queue> *_queue;
    long long _concurrencyCount;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) long long concurrencyCount;

+ (id)idleEvaluator;

- (id)objectForKey:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 concurrencyCount:(long long)arg2;
- (void)_insertFetcher:(CDUnknownBlockType)arg1 getter:(CDUnknownBlockType)arg2 forKey:(id)arg3;
- (void)_scheduleFetchRelayed:(_Bool)arg1;
- (CDUnknownBlockType)_getterForKey:(id)arg1;
- (CDUnknownBlockType)_removeFetcherForKey:(id)arg1;
- (void)addEvaluationBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)lockSchedulingForEvaluation:(CDUnknownBlockType)arg1;

@end
