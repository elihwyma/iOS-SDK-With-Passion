/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSOperation.h>

@class NSArray, NSDate, NSDictionary, NSError, NSLock, NSUUID, _CATObserverManager;

@interface CATOperation : NSOperation

{
    NSArray *mCallStackSymbols;
    _Atomic int mState;
    NSLock *mLock;
    _CATObserverManager *mObserverManager;
    _Bool _canCancel;
    NSUUID *_UUID;
    NSDate *_createdDate;
    NSDate *_enqueuedDate;
    NSDate *_startedDate;
    NSDate *_finishedDate;
    unsigned long long _phase;
    NSError *_error;
    id _resultObject;
    NSDictionary *_userInfo;
    long long _completedUnitCount;
    long long _totalUnitCount;
}

@property (retain) NSUUID *UUID;
@property unsigned long long phase;
@property (retain) NSDate *createdDate;
@property (retain) NSDate *enqueuedDate;
@property (retain) NSDate *startedDate;
@property (retain) NSDate *finishedDate;
@property (retain) NSError *error;
@property (retain) NSDictionary *userInfo;
@property (retain) id resultObject;
@property long long completedUnitCount;
@property long long totalUnitCount;
@property (readonly) _Bool isCanceled;
@property (readonly) _Bool canCancel;

+ (id)callStackSymbols;
+ (_Bool)isCancelable;
+ (_Bool)automaticallyNotifiesObserversOfUUID;
+ (_Bool)automaticallyNotifiesObserversOfCreatedDate;
+ (_Bool)automaticallyNotifiesObserversOfEnqueuedDate;
+ (_Bool)automaticallyNotifiesObserversOfStartedDate;
+ (_Bool)automaticallyNotifiesObserversOfFinishedDate;
+ (id)keyPathsForValuesAffectingIsCanceled;

- (id)init;
- (id)description;
- (void)start;
- (void)addObserver:(id)arg1;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (_Bool)isAsynchronous;
- (id)stateDescription;
- (void)endOperationWithResultObject:(id)arg1;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 delegateQueue:(id)arg4;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4 delegateQueue:(id)arg5;
- (void)operationWillStart;
- (_Bool)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2;
- (void)endOperationWithError:(id)arg1;
- (void)endOperationSuccessfullyIfNeeded;
- (void)finalizeOperation;
- (void)operationWillFinish;
- (void)operationDidFinish;
- (void)operationWillEnqueueOntoOperationQueue:(id)arg1;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4;

@end
