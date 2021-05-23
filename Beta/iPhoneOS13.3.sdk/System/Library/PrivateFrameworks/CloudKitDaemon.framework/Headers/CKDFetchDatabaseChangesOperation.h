/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKServerChangeToken, NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDFetchDatabaseChangesOperation : CKDDatabaseOperation

{
    _Bool _fetchAllChanges;
    CDUnknownBlockType _recordZoneWithIDChangedBlock;
    CDUnknownBlockType _recordZoneWithIDWasDeletedBlock;
    CDUnknownBlockType _recordZoneWithIDWasPurgedBlock;
    CDUnknownBlockType _serverChangeTokenUpdatedBlock;
    CKServerChangeToken *_serverChangeToken;
    long long _status;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    unsigned long long _numRequestsSent;
    NSObject<OS_dispatch_group> *_fetchZonesGroup;
    NSMutableArray *_requestInfos;
}

@property (retain, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) _Bool fetchAllChanges;
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long numRequestsSent;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchZonesGroup;
@property (retain, nonatomic) NSMutableArray *requestInfos;
@property (copy, nonatomic) CDUnknownBlockType recordZoneWithIDChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasDeletedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasPurgedBlock;
@property (copy, nonatomic) CDUnknownBlockType serverChangeTokenUpdatedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(id)arg1;
- (id)analyticsPayload;
- (void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)arg1;

@end
