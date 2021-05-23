/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDFetchRecordsOperation, CKDRecordCache, NSDictionary, NSMutableDictionary, NSObject, NSSet;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDRecordFetchAggregator : CKDDatabaseOperation

{
    CKDRecordCache *_recordCache;
    _Bool _useRecordCache;
    _Bool _fetchAssetContents;
    _Bool _preserveOrdering;
    _Bool _started;
    _Bool _markedToFinishByParent;
    _Bool _forceDecryptionAttempt;
    CDUnknownBlockType _fetchAggregatorCompletionBlock;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSSet *_desiredKeys;
    NSObject<OS_dispatch_source> *_recordReadySource;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_source> *_fetchSource;
    NSObject<OS_dispatch_group> *_fetchGroup;
    NSMutableDictionary *_fetchInfosByOrder;
    unsigned long long _curFetchOrder;
    unsigned long long _highestReturnedOrder;
    CKDFetchRecordsOperation *_currentFetchOp;
}

@property (nonatomic) _Bool fetchAssetContents;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) _Bool preserveOrdering;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property (retain, nonatomic) NSMutableDictionary *fetchInfosByOrder;
@property unsigned long long curFetchOrder;
@property unsigned long long highestReturnedOrder;
@property (weak, nonatomic) CKDFetchRecordsOperation *currentFetchOp;
@property (nonatomic, readonly) CKDRecordCache *recordCache;
@property _Bool started;
@property (getter=isMarkedToFinishByParent) _Bool markedToFinishByParent;
@property (nonatomic) _Bool forceDecryptionAttempt;
@property (nonatomic) _Bool useRecordCache;
@property (copy, nonatomic) CDUnknownBlockType fetchAggregatorCompletionBlock;

- (void)dealloc;
- (id)description;
- (void)main;
- (id)CKPropertiesDescription;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)fetchRecords:(id)arg1 withPerRecordCompletion:(CDUnknownBlockType)arg2;
- (void)finishIfAppropriate;
- (void)_recordFetchesAvailable;
- (void)_flushFetchedRecordsToConsumerLocked;
- (void)_performCallbackForFetchInfoLocked:(id)arg1;
- (void)_flushFetchedRecordsToConsumerOrderedLocked;
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;
- (void)_lockedSendFetchRequest;
- (void)_finishRecordFetchAggregator;
- (id)_fetchRecord:(id)arg1 recordReadyHandle:(_Bool *)arg2 withRecordCompletion:(CDUnknownBlockType)arg3;
- (void)_addRecordFetchInfos:(id)arg1;

@end
