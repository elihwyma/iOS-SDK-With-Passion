/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSProgress, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionEffectiveConfiguration, NSURLSessionTaskDependency, NSURLSessionTaskDependencyTree, NSURLSessionTaskHTTPAuthenticator, NSUUID, __CFN_TaskMetrics, __CFN_TransactionMetrics;

@protocol NSURLSessionAppleIDContext, OS_dispatch_queue, OS_nw_activity, OS_voucher, SZExtractor, __NSURLSessionTaskGroupForConfiguration;

@interface NSURLSessionTask : NSObject <Swift>

{
    NSObject<OS_nw_activity> *_nw_activity_ivar;
    __CFN_TaskMetrics *_metrics_ivar;
    NSDate *earliestBeginDate;
    NSObject<OS_nw_activity> *_private_nw_activity;
    id <__NSURLSessionTaskGroupForConfiguration> __taskGroup;
}

@property (copy, readonly) NSURLSessionEffectiveConfiguration *_effectiveConfiguration;
@property unsigned long long taskIdentifier;
@property (copy) NSURLRequest *originalRequest;
@property (copy) NSURLRequest *currentRequest;
@property (retain, readonly) NSURL *currentRequest_URL;
@property (retain, readonly) NSURL *currentRequest_mainDocumentURL;
@property (copy) NSURLResponse *response;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property long long state;
@property (copy) NSError *error;
@property double startTime;
@property (retain, readonly) id <__NSURLSessionTaskGroupForConfiguration> _taskGroup;
@property (retain, readonly) NSURLSession *session;
@property (retain, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property long long _priorityValue;
@property double _loadingPriorityValue;
@property (nonatomic, readonly) NSString *_loggableDescription;
@property (retain) __CFN_TransactionMetrics *_backgroundTransactionMetrics;
@property _Bool _shouldSkipPreferredClientCertificateLookup;
@property _Bool _cacheOnly;
@property _Bool _preventsSystemHTTPProxyAuthentication;
@property _Bool _requiresSecureHTTPSProxyConnection;
@property _Bool _preventsAppSSO;
@property _Bool _appSSOFallback;
@property (copy) NSDictionary *_legacySocketStreamProperties;
@property (retain) struct _CFHSTSPolicy *_cfHSTS;
@property (retain) const struct _CFURLCache *_cfCache;
@property (retain) struct _CFURLCredentialStorage *_cfCreds;
@property (retain) struct OpaqueCFHTTPCookieStorage *_cfCookies;
@property unsigned long long _cachePolicy;
@property double _timeoutInterval;
@property (copy) NSDictionary *_proxySettings;
@property (copy) NSDictionary *_sslSettings;
@property _Bool _shouldPipelineHTTP;
@property _Bool _shouldUsePipelineHeuristics;
@property _Bool _shouldSkipPipelineProbe;
@property _Bool _shouldHandleCookies;
@property int _cookieAcceptPolicy;
@property _Bool _preventsIdleSystemSleep;
@property (copy) NSArray *_contentDispositionFallbackArray;
@property _Bool _allowsCellular;
@property int _networkServiceType;
@property (nonatomic) unsigned int _qos;
@property (retain) NSObject<OS_voucher> *_voucher;
@property _Bool _prohibitAuthUI;
@property _Bool _strictContentLength;
@property long long _suspensionThreshhold;
@property (copy) NSString *_boundInterfaceIdentifier;
@property _Bool _disallowCellular;
@property int _allowsExpensiveOverride;
@property int _allowsConstrainedOverride;
@property int _allowsCellularOverride;
@property unsigned long long _allowedProtocolTypes;
@property long long _requestPriority;
@property long long _expectedWorkload;
@property double _timeWindowDelay;
@property double _timeWindowDuration;
@property (copy) NSUUID *_uniqueIdentifier;
@property unsigned int _powerAssertion;
@property unsigned int _darkWakePowerAssertion;
@property (setter=_setConnectionIsCellular:) _Bool _connectionIsCellular;
@property _Bool _connectionIsCompanionLink;
@property (nonatomic) id _protocolForTask;
@property (copy) NSURLSessionTaskHTTPAuthenticator *authenticator;
@property _Bool _authenticatorConfiguredViaTaskProperty;
@property (retain, nonatomic) NSDictionary *_dependencyInfo;
@property (copy) NSDictionary *_DuetActivityProperties;
@property (retain, nonatomic) NSURLSessionTaskDependencyTree *dependencyTree;
@property (retain, nonatomic) NSURLSessionTaskDependency *taskDependency;
@property (retain, nonatomic) NSURL *_backgroundPublishingURL;
@property _Bool _extractorFinishedDecoding;
@property _Bool _extractorPreparedForExtraction;
@property long long _countOfPendingBytesReceivedEncoded;
@property (nonatomic) _Bool _preconnect;
@property (nonatomic, readonly) _Bool _isAVAssetTask;
@property (retain) NSObject<OS_nw_activity> *_private_nw_activity;
@property (retain) __CFN_TaskMetrics *_metrics;
@property (copy, nonatomic) CDUnknownBlockType _httpConnectionInfoCompletionBlock;
@property (retain) NSObject<OS_nw_activity> *_nw_activity;
@property long long _priority;
@property double _loadingPriority;
@property long long _bytesPerSecondLimit;
@property (nonatomic) unsigned long long _expectedProgressTarget;
@property (nonatomic) _Bool _shouldReportTimingDataToAWD;
@property double _timeoutIntervalForResource;
@property (copy) NSString *_storagePartitionIdentifier;
@property (retain) NSURL *_siteForCookies;
@property _Bool _isTopLevelNavigation;
@property (copy) NSString *_pathToDownloadTaskFile;
@property (retain, nonatomic) NSDictionary *_trailers;
@property (copy) NSData *_TCPConnectionMetadata;
@property (readonly) unsigned short _TLSNegotiatedCipherSuite;
@property (nonatomic) _Bool _allowsQUIC;
@property (retain, nonatomic, setter=set_extractor:) id <SZExtractor> _extractor;
@property (nonatomic) _Bool _hasSZExtractor;
@property (nonatomic) _Bool _doesSZExtractorConsumeExtractedData;
@property (copy, setter=_setAppleIDContext:) id <NSURLSessionAppleIDContext> _appleIDContext;
@property (retain, nonatomic) NSURL *_publishingURL;
@property long long _countOfBytesReceivedEncoded;
@property (copy, nonatomic) NSString *_APSRelayTopic;
@property (nonatomic) long long _discretionaryOverride;
@property (readonly) NSProgress *progress;
@property (copy) NSDate *earliestBeginDate;
@property long long countOfBytesClientExpectsToSend;
@property long long countOfBytesClientExpectsToReceive;
@property (copy) NSString *taskDescription;
@property float priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (void)_withXURLCache:(CDUnknownBlockType)arg1;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (_Bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (void)updateCurrentRequest:(id)arg1;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_expectedProgressTargetChanged;
- (_Bool)_needSendingMetrics;
- (void)_didSendMetrics;
- (void)_onqueue_releasePowerAsssertion;
- (long long)computeAdjustedPoolPriority;
- (void)_finishProgressReporting;
- (void)_onqueue_adoptEffectiveConfiguration:(id)arg1;
- (const struct __CFDictionary *)_copySocketStreamProperties;
- (void)_consumePendingBytesReceivedEncoded;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession *)arg1;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (const struct __CFSet *)_getAuthenticatorStatusCodes;
- (const struct __CFDictionary *)_copyATSState;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (void)_getAuthenticationHeadersForResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (void)_adoptEffectiveConfiguration:(id)arg1;
- (id)initWithTaskGroup:(id)arg1;
- (void)_logUnimplemented:(SEL)arg1;
- (void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2;
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;
- (void)_setBytesPerSecondLimit:(long long)arg1;
- (void)_completeUploadProgress;
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;
- (void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
