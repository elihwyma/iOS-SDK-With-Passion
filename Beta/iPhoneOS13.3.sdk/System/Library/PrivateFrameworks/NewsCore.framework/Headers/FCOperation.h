/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSOperation.h>

@class FCOnce, NFUnfairLock, NSDictionary, NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_group;

@interface FCOperation : NSOperation

{
    _Bool _executing;
    _Bool _finished;
    _Bool _childOperationsCancelled;
    long long _relativePriority;
    unsigned long long _retryCount;
    double _timeoutDuration;
    NSString *_operationID;
    double _operationStartTime;
    double _operationEndTime;
    CDUnknownBlockType _timedOutTest;
    NSMutableArray *_childOperations;
    NFUnfairLock *_childOperationsLock;
    FCOnce *_startOnce;
    NSObject<OS_dispatch_group> *_finishedGroup;
}

@property (copy, nonatomic) CDUnknownBlockType timedOutTest;
@property (retain, nonatomic) NSMutableArray *childOperations;
@property (nonatomic) _Bool childOperationsCancelled;
@property (retain, nonatomic) NFUnfairLock *childOperationsLock;
@property (retain, nonatomic) FCOnce *startOnce;
@property (nonatomic) double operationStartTime;
@property (nonatomic) double operationEndTime;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *finishedGroup;
@property (nonatomic) double timeoutDuration;
@property (nonatomic, readonly) FCOperation *proxyOperation;
@property (copy, nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) _Bool hasOperationStarted;
@property (copy, nonatomic, readonly) NSDictionary *errorUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long relativePriority;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)setQualityOfService:(long long)arg1;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_startIfNeeded;
- (_Bool)waitUntilFinishedWithTimeout:(double)arg1;
- (unsigned long long)maxRetries;
- (id)shortOperationDescription;
- (void)finishedPerformingOperationWithError:(id)arg1;
- (void)associateChildOperation:(id)arg1;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (void)cancelChildOperations;
- (unsigned long long)propertiesInheritedByChildOperations;
- (_Bool)_shouldThrottleOperationWithRetryAfter:(double *)arg1;
- (void)_finishOperationWithError:(id)arg1;
- (void)finishFromEarlyCancellation;
- (id)longOperationDescription;
- (void)_finishedPerformingOperationWithError:(id)arg1;
- (void)prepareOperation;
- (_Bool)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double *)arg2;
- (void)_handleThrottlingFromError:(id)arg1 delay:(double)arg2;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (void)_handleRetryFromError:(id)arg1 signal:(id)arg2;
- (id)throttleGroup;
- (id)_userDefaultsKeyForThrottleEndDate;
- (void)resetForRetry;
- (void)_associateChildOperation:(id)arg1;
- (void)operationDidFinishWithError:(id)arg1;
- (void)startIfNeeded;
- (void)associateChildOperations:(id)arg1;

@end
