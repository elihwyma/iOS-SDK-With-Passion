/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDClientContext, CKDOperation, NSDate, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@protocol OS_dispatch_queue, OS_os_activity;

__attribute__((visibility("hidden")))
@interface CKDQueuedFetch : NSObject

{
    _Bool _isFinished;
    _Bool _isCancelled;
    NSDate *_queuedDate;
    CDUnknownBlockType _completionHandler;
    CKDQueuedFetch *_equivalentRunningFetch;
    NSObject<OS_os_activity> *_osActivity;
    NSMutableDictionary *_completionHandlersByItemID;
    unsigned long long _lastCompletionHandlerCount;
    NSDate *_startDate;
    NSDate *_lastRequestDate;
    CKDClientContext *_context;
    NSOperationQueue *_operationQueue;
    long long _scope;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    long long _highestQOS;
    NSString *_runningOperationID;
    NSMutableSet *_dependentOperationIDs;
    NSMutableDictionary *_dependentOperationIDsByItemID;
    CKDOperation *_initialOperation;
}

@property (retain, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (retain, nonatomic) NSMutableDictionary *completionHandlersByItemID;
@property (nonatomic) unsigned long long lastCompletionHandlerCount;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *lastRequestDate;
@property (weak, nonatomic) CKDClientContext *context;
@property (weak, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) long long scope;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) long long highestQOS;
@property (retain, nonatomic) NSString *runningOperationID;
@property (retain, nonatomic) NSMutableSet *dependentOperationIDs;
@property (retain, nonatomic) NSMutableDictionary *dependentOperationIDsByItemID;
@property (retain, nonatomic) CKDOperation *initialOperation;
@property (nonatomic) _Bool isFinished;
@property (nonatomic) _Bool isCancelled;
@property (retain, nonatomic) NSDate *queuedDate;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (weak, nonatomic) CKDQueuedFetch *equivalentRunningFetch;

- (id)init;
- (id)description;
- (void)start;
- (id)CKPropertiesDescription;
- (id)allItemIDs;
- (void)addCallbackForItemWithID:(id)arg1 operation:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3;
- (void)createFetchOperationForItemIDs:(id)arg1 operationQueue:(id)arg2 operationConfigurationBlock:(CDUnknownBlockType)arg3;
- (id)callbacksForItemWithID:(id)arg1;
- (void)removeCallbacksForItemWithID:(id)arg1;
- (void)finishFetchOperationWithError:(id)arg1;
- (int)numberOfCallbacks;
- (id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
- (void)cancelFetchOperation;
- (_Bool)canBeUsedForOperation:(id)arg1;
- (_Bool)canBeUsedForPendingFetch:(id)arg1;
- (_Bool)dependentOperationListContainsRunningFetch:(id)arg1;
- (_Bool)dependentOperationListContainsOperationID:(id)arg1;

@end
