/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSOperation.h>

@class CKDClientContext, CKDClientProxy, CKDOperationMetrics, CKDURLRequest, CKOperationInfo, CKOperationMMCSRequestOptions, CKOperationResult, NSDate, NSError, NSMutableArray, NSNumber, NSObject, NSString, UMUserSyncTask;

@protocol NSObject, OS_dispatch_group, OS_dispatch_queue, OS_os_activity;

__attribute__((visibility("hidden")))
@interface CKDOperation : NSOperation

{
    unsigned long long _state;
    NSObject<OS_os_activity> *_osActivity;
    _Bool _isFinished;
    _Bool _isExecuting;
    _Bool _useEncryption;
    _Bool _useClearAssetEncryption;
    _Bool _isProxyOperation;
    _Bool _shouldPipelineFetchAllChangesRequests;
    _Bool _didAttemptDugongKeyRoll;
    _Atomic int _pcsWaitCount;
    CKDURLRequest *_request;
    NSDate *_startDate;
    CKDOperation *_parentOperation;
    CKDClientContext *_context;
    CKDClientProxy *_proxy;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSError *_error;
    CKDOperationMetrics *_cloudKitMetrics;
    CKDOperationMetrics *_MMCSMetrics;
    NSDate *_metricExecuteStartDate;
    CDUnknownBlockType _requestCompletedBlock;
    CKOperationInfo *_operationInfo;
    NSObject<OS_dispatch_group> *_stateTransitionGroup;
    NSMutableArray *_requestUUIDs;
    NSMutableArray *_childOperations;
    NSMutableArray *_finishedChildOperationIDs;
    id <NSObject> _powerAssertion;
    NSObject<OS_dispatch_group> *_childOperationsGroup;
    UMUserSyncTask *_userSyncTask;
    NSString *_clientSuppliedDeviceIdentifier;
}

@property (retain, nonatomic) NSMutableArray *requestUUIDs;
@property (weak, nonatomic) CKDOperation *parentOperation;
@property (retain, nonatomic) NSMutableArray *childOperations;
@property (retain, nonatomic) NSMutableArray *finishedChildOperationIDs;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) id <NSObject> powerAssertion;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *childOperationsGroup;
@property (retain, nonatomic) UMUserSyncTask *userSyncTask;
@property (retain, nonatomic) NSString *clientSuppliedDeviceIdentifier;
@property (retain, nonatomic) CKOperationInfo *operationInfo;
@property (nonatomic) _Atomic int pcsWaitCount;
@property (nonatomic) _Bool didAttemptDugongKeyRoll;
@property (nonatomic, readonly) _Bool resolvedAutomaticallyRetryNetworkFailures;
@property (nonatomic, readonly) unsigned long long resolvedDiscretionaryNetworkBehavior;
@property (nonatomic, readonly) unsigned long long duetPreClearedMode;
@property (nonatomic, readonly) unsigned long long discretionaryWhenBackgroundedState;
@property (nonatomic, readonly) unsigned long long systemScheduler;
@property (weak, nonatomic, readonly) CKDOperation *topmostParentOperation;
@property (retain, nonatomic) CKDClientContext *context;
@property (weak, nonatomic) CKDClientProxy *proxy;
@property (nonatomic) _Bool useEncryption;
@property (nonatomic) _Bool useClearAssetEncryption;
@property (nonatomic, readonly) _Bool isProxyOperation;
@property (nonatomic, readonly) _Bool shouldCheckAppVersion;
@property (nonatomic, readonly) _Bool usesBackgroundSession;
@property (nonatomic, readonly) _Bool allowsPowerNapScheduling;
@property (nonatomic) _Bool shouldPipelineFetchAllChangesRequests;
@property (nonatomic, readonly) unsigned int QOSClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) _Bool isExecuting;
@property (nonatomic) _Bool isFinished;
@property (retain) NSError *error;
@property (retain, nonatomic) CKDURLRequest *request;
@property (nonatomic, readonly) CKOperationResult *operationResult;
@property (retain, nonatomic) CKDOperationMetrics *cloudKitMetrics;
@property (retain, nonatomic) CKDOperationMetrics *MMCSMetrics;
@property (retain, nonatomic) NSDate *metricExecuteStartDate;
@property (copy, nonatomic) CDUnknownBlockType requestCompletedBlock;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) _Bool isLongLived;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (nonatomic, readonly) _Bool allowsCellularAccess;
@property (nonatomic, readonly) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, readonly) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, readonly) NSString *authPromptReason;
@property (nonatomic, readonly) _Bool automaticallyRetryNetworkFailures;
@property (nonatomic, readonly) _Bool preferAnonymousRequests;
@property (nonatomic, readonly) _Bool allowsBackgroundNetworking;
@property (nonatomic, readonly) double timeoutIntervalForRequest;
@property (nonatomic, readonly) double timeoutIntervalForResource;
@property (nonatomic, readonly) NSString *operationGroupID;
@property (nonatomic, readonly) NSString *operationGroupName;
@property (nonatomic, readonly) NSNumber *operationGroupQuantityNumber;
@property (nonatomic, readonly) _Bool shouldSkipZonePCSUpdate;
@property (nonatomic, readonly) _Bool isCloudKitSupportOperation;
@property (nonatomic, readonly) unsigned long long networkServiceType;
@property (nonatomic, readonly) NSObject<OS_os_activity> *osActivity;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *stateTransitionGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *flowControlKey;

+ (id)_globalOperationCallbackQueueForQOS:(long long)arg1;
+ (long long)isPredominatelyDownload;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)cancel;
- (void)start;
- (void)main;
- (void)setQualityOfService:(long long)arg1;
- (_Bool)isConcurrent;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_stateFlags;
- (void)finishWithError:(id)arg1;
- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (unsigned long long)discretionaryNetworkBehavior;
- (void)_setIsExecuting:(_Bool)arg1;
- (void)_setIsFinished:(_Bool)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (id)additionalRequestHTTPHeaders;
- (void)configureRequest:(id)arg1;
- (void)_reallyStart;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 operationConfigurationBlock:(CDUnknownBlockType)arg3;
- (void)beginUserSyncTask;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (void)_ensureOperationGroup;
- (void)configureQualityOfServiceFromOperationInfo:(id)arg1;
- (_Bool)isWaitingOnPCS;
- (id)nameForState:(unsigned long long)arg1;
- (void)combineMetricsWithOperation:(id)arg1;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 clientContext:(id)arg4 operationConfigurationBlock:(CDUnknownBlockType)arg5;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(CDUnknownBlockType)arg4;
- (void)_acquirePowerAssertion;
- (void)_registerAttemptForOperation;
- (void)_determineNetworkServiceType;
- (void)_continueOperationStart;
- (_Bool)operationShouldBeFlowControlled;
- (_Bool)_checkAppVersion;
- (void)_dropPowerAssertion;
- (_Bool)_errorShouldImpactFlowControl:(id)arg1;
- (_Bool)isTopLevelDaemonOperationForMetrics;
- (void)sendCoreAnalyticsEventOperationFinished;
- (_Bool)makeStateTransition;
- (void)makeStateTransition:(_Bool)arg1;
- (void)_dropPowerAssertionsForSelfAndParent;
- (void)_acquirePowerAssertionsForSelfAndParent;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(id)arg1;
- (id)_runDurationString;
- (id)_startDateString;
- (id)CKStatusReportProperties;
- (id)CKStatusReportLogGroups;
- (id)dugongKeyRollAnalyticsPayloadWithError:(id)arg1;
- (id)analyticsPayload;
- (id)baseOperationAndErrorInfoCoreAnalyticsPayloadWithError:(id)arg1;
- (void)request:(id)arg1 didFinishWithMetrics:(id)arg2 w3cNavigationTiming:(id)arg3;
- (void)requestDidBeginWaitingForUserAuth:(id)arg1;
- (void)requestDidEndWaitingForUserAuth:(id)arg1;
- (id)createSerialQueue;
- (id)createInactiveSerialQueue;
- (id)createConcurrentQueue;
- (id)createInactiveConcurrentQueue;
- (void)noteOperationWillWaitOnPCS;
- (void)noteOperationDidFinishWaitingOnPCS;
- (_Bool)isNetworkingBehaviorEquivalentForOperation:(id)arg1;

@end
