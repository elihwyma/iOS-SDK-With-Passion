/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSMutableURLRequest, NSURLRequest, NSURLSessionEffectiveConfiguration, NSUUID, __CFN_TaskMetrics, __NSCFURLSession;

@interface CONNECTION_SessionTask : NSObject

{
    NSURLRequest *_originalRequest;
    NSMutableURLRequest *_currentRequest;
    double _startTime;
    struct __CFDictionary *_connectionProperties;
    struct __CFDictionary *_socketProperties;
    NSMutableURLRequest *_nsCurrentRequest;
    NSURLRequest *_nsOriginalRequest;
    __NSCFURLSession *_session_ivar;
    NSURLSessionEffectiveConfiguration *_effectiveConfiguration;
    NSUUID *_uniqueIdentifier;
    _Bool _is_cellular;
    Class _my_protocolForTask;
    _Bool __shouldSkipPreferredClientCertificateLookup;
    struct __CFDictionary *_atsStateCache;
    _Bool _preventsAppSSO;
    _Bool _appSSOFallback;
    __CFN_TaskMetrics *_metrics;
}

@property (retain, nonatomic) __CFN_TaskMetrics *_metrics;

- (void)dealloc;
- (id)error;
- (id)state;
- (id)_uniqueIdentifier;
- (float)priority;
- (id)session;
- (id)taskIdentifier;
- (id)originalRequest;
- (id)workQueue;
- (id)currentRequest;
- (id)_shouldHandleCookies;
- (double)startTime;
- (double)_timeoutInterval;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (void)_withXURLCache:(CDUnknownBlockType)arg1;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (_Bool)_preventsAppSSO;
- (void)set_protocolForTask:(id)arg1;
- (id)_protocolForTask;
- (id)_effectiveConfiguration;
- (_Bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (id)initWithRequest:(id)arg1 mutableCurrent:(id)arg2 connProps:(struct __CFDictionary *)arg3 sockProps:(struct __CFDictionary *)arg4 session:(id)arg5;
- (id)_loggableDescription;
- (void)updateCurrentRequest:(id)arg1;
- (struct __CFURL *)currentRequest_URL;
- (id)countOfBytesReceived;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (id)countOfBytesExpectedToReceive;
- (void)set_appSSOFallback:(_Bool)arg1;
- (void)set_preventsAppSSO:(_Bool)arg1;
- (void)_consumePendingBytesReceivedEncoded;
- (long long)_bytesPerSecondLimit;
- (long long)_suspensionThreshhold;
- (id)_storagePartitionIdentifier;
- (void)set_trailers:(id)arg1;
- (unsigned long long)_expectedProgressTarget;
- (id)_priorityValue;
- (id)countOfBytesExpectedToSend;
- (id)countOfBytesSent;
- (const struct __CFData **)_TCPConnectionMetadata;
- (struct __CFDictionary *)_proxySettings;
- (void)set_discretionaryOverride:(long long)arg1;
- (id)_backgroundTransactionMetrics;
- (id)_private_nw_activity;
- (id)_httpConnectionInfoCompletionBlock;
- (struct __CFSet *)_getAuthenticatorStatusCodes;
- (struct __CFDictionary *)_copyATSState;
- (unsigned long long)_cachePolicy;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (void)set_TCPConnectionMetadata:(id)arg1;
- (id)_APSRelayTopic;
- (void)_getAuthenticationHeadersForResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned char)_shouldPipelineHTTP;
- (unsigned char)_shouldSkipPipelineProbe;
- (unsigned char)_shouldUsePipelineHeuristics;
- (unsigned long long)_allowedProtocolTypes;
- (long long)_requestPriority;
- (struct __CFDictionary *)_sslSettings;
- (void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1;
- (_Bool)_preventsSystemHTTPProxyAuthentication;
- (id)_prohibitAuthUI;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (void)set_connectionIsCompanionLink:(_Bool)arg1;
- (void)_setConnectionIsCellular:(_Bool)arg1;
- (const struct __CFDictionary **)_DuetActivityProperties;
- (struct __CFDictionary *)_dependencyInfo;
- (_Bool)_requiresSecureHTTPSProxyConnection;
- (_Bool)_shouldSkipPreferredClientCertificateLookup;
- (_Bool)_appSSOFallback;
- (unsigned char)_strictContentLength;
- (_Bool)_cacheOnly;
- (id)_timeWindowDelay;
- (id)_timeWindowDuration;
- (id)_siteForCookies;
- (_Bool)_isTopLevelNavigation;
- (struct __CFURL *)currentRequest_mainDocumentURL;
- (int)_cookieAcceptPolicy;
- (id)_expectedWorkload;
- (id)_boundInterfaceIdentifier;
- (id)_disallowCellular;
- (id)_allowsExpensiveOverride;
- (id)_allowsConstrainedOverride;
- (id)_allowsCellularOverride;
- (id)_networkServiceType;
- (void)_adoptEffectiveConfiguration:(id)arg1;
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;
- (unsigned short)_TLSNegotiatedCipherSuite;
- (id)_cfHSTS;
- (id)_cfCache;
- (id)_cfCreds;
- (id)_cfCookies;
- (id)_contentDispositionFallbackArray;
- (id)_trailers;
- (id)_allowsCellular;
- (_Bool)_allowsQUIC;
- (unsigned char)_preventsIdleSystemSleep;
- (_Bool)_preconnect;
- (_Bool)_connectionIsCompanionLink;
- (void)set_expectedProgressTarget:(unsigned long long)arg1;
- (void)_setAppleIDContext:(id)arg1;
- (id)_incompleteTaskMetrics;
- (id)_incompleteCurrentTaskTransactionMetrics;
- (void)set_preconnect:(_Bool)arg1;
- (id)_countOfPendingBytesReceivedEncoded;
- (id)_countOfBytesReceivedEncoded;
- (void)set_allowsQUIC:(_Bool)arg1;
- (void)_processConnectionProperties;
- (id)_connectionPropertyDuet;
- (_Bool)hasExtractor;
- (long long)_discretionaryOverrride;

@end
