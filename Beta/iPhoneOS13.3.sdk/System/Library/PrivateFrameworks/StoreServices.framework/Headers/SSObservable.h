/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSConditionLock, NSError, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface SSObservable : NSObject

{
    NSError *_failureError;
    NSString *_logKey;
    NSMutableArray *_observers;
    NSMutableArray *_queuedResults;
    NSObject<OS_dispatch_queue> *_sendMessageQueue;
    NSConditionLock *_stateLock;
}

@property (retain, nonatomic) NSError *failureError;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSMutableArray *queuedResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendMessageQueue;
@property (retain, nonatomic) NSConditionLock *stateLock;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;

+ (_Bool)_errorIsCanceledError:(id)arg1;
+ (id)observableWithObserver:(id)arg1;
+ (id)observableWithObservers:(id)arg1;

- (id)init;
- (_Bool)cancel;
- (void)subscribe:(id)arg1;
- (_Bool)sendCompletion;
- (_Bool)sendResult:(id)arg1;
- (_Bool)_isComplete;
- (_Bool)sendFailure:(id)arg1;

@end
