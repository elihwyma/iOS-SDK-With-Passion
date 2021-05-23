/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, NSError, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface AMSObservable : NSObject

{
    unsigned long long _behavior;
    NSError *_failureError;
    NSString *_logKey;
    NSMutableArray *_observers;
    NSMutableArray *_queuedResults;
    NSObject<OS_dispatch_queue> *_sendMessageQueue;
    NSConditionLock *_stateLock;
}

@property (nonatomic, readonly) unsigned long long behavior;
@property (retain, nonatomic) NSError *failureError;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSMutableArray *queuedResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendMessageQueue;
@property (retain, nonatomic) NSConditionLock *stateLock;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;

- (id)init;
- (_Bool)cancel;
- (void)subscribe:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (_Bool)sendCompletion;
- (_Bool)sendResult:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (id)initWithObserver:(id)arg1 behavior:(unsigned long long)arg2;
- (id)initWithObservers:(id)arg1 behavior:(unsigned long long)arg2;
- (_Bool)_isComplete;
- (_Bool)sendFailure:(id)arg1;
- (id)initWithObservers:(id)arg1;
- (id)subscribeWithResultBlock:(CDUnknownBlockType)arg1;
- (void)unsubscribeAll;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithNotification:(id)arg1 object:(id)arg2;

@end
