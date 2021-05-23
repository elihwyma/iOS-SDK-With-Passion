/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKSQLite.h>

@class NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface CKDOperationInfoCache : CKSQLite

{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSObject<OS_dispatch_queue> *_cacheDelegateQueue;
    NSMutableDictionary *_delegateWrappersByOperationID;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDelegateQueue;
@property (retain, nonatomic) NSMutableDictionary *delegateWrappersByOperationID;

+ (id)sharedCache;
+ (id)dbFileName;

- (id)resumableOperationInfosByAppContainerTuplesWithProgressPurged:(_Bool)arg1;
- (void)deleteAllInfoForOperationWithID:(id)arg1;
- (void)setOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4;
- (id)outstandingOperationInfosForIDs:(id)arg1;
- (id)allOutstandingOperationIDsForAppContainerTuple:(id)arg1 accountID:(id)arg2;
- (void)registerAttemptForOperationWithID:(id)arg1;
- (id)_initWithCacheDir:(id)arg1;
- (id)operationInfoMetadataForOperationWithID:(id)arg1;
- (void)registerOperationAndSetResult:(id)arg1 forOperationInfo:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4;
- (void)_locked_enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_lockedResultForOperationWithID:(id)arg1;
- (void)_lockedSetOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerTuple:(id)arg3 accountID:(id)arg4;
- (void)_lockedSetOperationResult:(id)arg1 forOperationID:(id)arg2;
- (id)_locked_operationInfoForID:(id)arg1;
- (void)expungeOperationInfoForDeletedAccountID:(id)arg1;
- (void)registerDelegate:(id)arg1 forOperationWithID:(id)arg2;
- (void)unregisterDelegate:(id)arg1 forOperationWithID:(id)arg2;
- (id)resultForOperationWithID:(id)arg1;
- (void)enumerateCallbackArgumentsForOperationWithID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setProgressCallbackArguments:(id)arg1 forOperationID:(id)arg2;
- (void)setOperationResult:(id)arg1 forOperationID:(id)arg2;
- (void)registerCacheEvictionActivity;

@end
