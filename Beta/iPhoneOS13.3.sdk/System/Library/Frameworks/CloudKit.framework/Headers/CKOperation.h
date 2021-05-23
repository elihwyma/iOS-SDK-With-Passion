/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSOperation.h>

@class CKDiscretionaryOptions, CKEventMetric, CKOperationConfiguration, CKOperationGroup, CKOperationInfo, CKOperationMMCSRequestOptions, CKOperationMetrics, CKPlaceholderOperation, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity, OS_os_transaction, OS_voucher;

@interface CKOperation : NSOperation

{
    NSObject<OS_os_transaction> *_isExecuting;
    NSObject<OS_voucher> *_clientVoucher;
    NSObject<OS_os_activity> *_osActivity;
    _Bool _isOutstandingOperation;
    _Bool _usesBackgroundSession;
    _Bool _runningDiscretionaryOperation;
    _Bool _failedToScheduleDiscretionaryOperation;
    _Bool _isFinished;
    _Bool _isFinishingOnCallbackQueue;
    _Bool _clouddConnectionInterrupted;
    _Bool _isDiscretionarySuspended;
    _Bool _queueHasStarted;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CKOperationConfiguration *_resolvedConfiguration;
    CDUnknownBlockType _longLivedOperationWasPersistedBlock;
    CDUnknownBlockType _requestCompletedBlock;
    CKOperationConfiguration *_configuration;
    CKOperationGroup *_group;
    NSString *_operationID;
    NSObject<OS_dispatch_source> *_timeoutSource;
    NSMutableArray *_savedRequestUUIDs;
    NSMutableDictionary *_savedResponseHTTPHeadersByRequestUUID;
    NSMutableDictionary *_savedW3CNavigationTimingByRequestUUID;
    CKEventMetric *_operationMetric;
    struct _xpc_activity_eligibility_changed_handler_s *_xpcActivityEligibilityChangedHandler;
    unsigned long long _duetPreClearedMode;
    unsigned long long _discretionaryWhenBackgroundedState;
    unsigned long long _systemScheduler;
    NSError *_cancelError;
    CKPlaceholderOperation *_placeholderOperation;
    NSError *_error;
    NSString *_sectionID;
    NSString *_parentSectionID;
    id _context;
    CKOperationMetrics *_metrics;
    NSString *_deviceIdentifier;
    CKOperationMMCSRequestOptions *_MMCSRequestOptions;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutSource;
@property (nonatomic) _Bool isOutstandingOperation;
@property (nonatomic) _Bool usesBackgroundSession;
@property (retain, nonatomic) NSMutableArray *savedRequestUUIDs;
@property (retain, nonatomic) NSMutableDictionary *savedResponseHTTPHeadersByRequestUUID;
@property (retain, nonatomic) NSMutableDictionary *savedW3CNavigationTimingByRequestUUID;
@property (nonatomic, readonly) CKEventMetric *operationMetric;
@property (nonatomic) _Bool runningDiscretionaryOperation;
@property (nonatomic) _Bool failedToScheduleDiscretionaryOperation;
@property (nonatomic) struct _xpc_activity_eligibility_changed_handler_s *xpcActivityEligibilityChangedHandler;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (nonatomic) unsigned long long discretionaryWhenBackgroundedState;
@property (nonatomic) unsigned long long systemScheduler;
@property (nonatomic, readonly) CKDiscretionaryOptions *discretionaryOptions;
@property (retain, nonatomic) NSError *cancelError;
@property (nonatomic, readonly) CKOperationConfiguration *resolvedConfiguration;
@property (retain) CKPlaceholderOperation *placeholderOperation;
@property (copy, nonatomic) NSString *operationID;
@property (nonatomic) _Bool isExecuting;
@property (nonatomic) _Bool isFinished;
@property (nonatomic, readonly) _Bool isFinishingOnCallbackQueue;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) _Bool clouddConnectionInterrupted;
@property (nonatomic) _Bool isDiscretionarySuspended;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic, readonly) NSString *parentSectionID;
@property (nonatomic, readonly) id context;
@property (nonatomic, readonly) CKOperationInfo *operationInfo;
@property (retain, nonatomic) CKOperationMetrics *metrics;
@property (copy, nonatomic) CDUnknownBlockType requestCompletedBlock;
@property _Bool queueHasStarted;
@property (retain, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic) _Bool preferAnonymousRequests;
@property (nonatomic) _Bool allowsBackgroundNetworking;
@property (retain, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic, readonly) NSArray *requestUUIDs;
@property (nonatomic, readonly) NSDictionary *responseHTTPHeadersByRequestUUID;
@property (nonatomic, readonly) NSDictionary *w3cNavigationTimingByRequestUUID;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (retain, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (retain, nonatomic) id clientVoucher;
@property (nonatomic, readonly) NSString *flowControlKey;
@property (copy, nonatomic) CKOperationConfiguration *configuration;
@property (retain, nonatomic) CKOperationGroup *group;
@property (copy, nonatomic) CDUnknownBlockType longLivedOperationWasPersistedBlock;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)container;
- (void)setContainer:(id)arg1;
- (void)cancel;
- (void)start;
- (void)main;
- (long long)qualityOfService;
- (void)setQualityOfService:(long long)arg1;
- (_Bool)isConcurrent;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (void)_start;
- (void)finishWithError:(id)arg1;
- (void)setAllowsCellularAccess:(_Bool)arg1;
- (double)timeoutIntervalForResource;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)cancelWithError:(id)arg1;
- (_Bool)allowsCellularAccess;
- (double)timeoutIntervalForRequest;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (id)daemon;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (_Bool)isLongLived;
- (Class)operationInfoClass;
- (Class)operationClass;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_setIsExecuting:(_Bool)arg1;
- (void)_setIsFinished:(_Bool)arg1;
- (void)cancelWithUnderlyingError:(id)arg1;
- (_Bool)_wantsFlowControl;
- (void)_handleProgressCallback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleStatisticsCallback:(id)arg1;
- (void)_handleCheckpointCallback:(id)arg1;
- (void)_handleDiscretionarySuspensionCallback;
- (void)setLongLived:(_Bool)arg1;
- (void)_cancelDaemonOperation;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_uninstallTimeoutSource;
- (id)_findBestThrottleError:(id)arg1;
- (void)_installTimeoutSource;
- (void)_handleRemoteProxyFailureWithError:(id)arg1;
- (void)processOperationResult:(id)arg1;

@end
