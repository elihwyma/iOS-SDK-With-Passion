/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSHTTPCookieStorage, NSNumber, NSSet, NSString, NSURL, NSURLCache, NSURLCredentialStorage;

@protocol NSURLSessionAppleIDContext;

@interface NSURLSessionConfiguration : NSObject <Swift>

{
    _Bool __collectsTimingData;
    _Bool __allowsWCA;
    long long __companionProxyPreference;
}

@property (copy) NSString *identifier;
@property (getter=isBackgroundSession) _Bool backgroundSession;
@property NSString *disposition;
@property (retain) NSURLCredentialStorage *_phskip_credStorage;
@property _Bool _phskip_credStorageSet;
@property (retain) NSURLCache *_phskip_urlCache;
@property _Bool _phskip_urlCacheSet;
@property (retain) NSHTTPCookieStorage *_phskip_cookieStorage;
@property _Bool _phskip_cookieStorageSet;
@property (retain) struct _CFHSTSPolicy *_phskip_hstsStorage;
@property _Bool _phskip_hstsStorageSet;
@property long long pipeliningHighWatermark;
@property long long pipeliningLowWatermark;
@property long long numPriorityLevels;
@property long long numFastLanes;
@property long long minimumFastLanePriority;
@property _Bool skip_download_unlink;
@property _Bool _requiresClientToOpenFiles;
@property (copy) NSString *_tcpConnectionPoolName;
@property _Bool _forcesNewConnections;
@property (copy) NSDictionary *_socketStreamProperties;
@property _Bool _supportsAVAssetDownloads;
@property (getter=_isProxySession) _Bool _proxySession;
@property (copy) NSSet *_authenticatorStatusCodes;
@property _Bool _preventsIdleSleep;
@property _Bool _usePipeliningHeuristics;
@property (copy) NSArray *_contentDispHeadEncFallback;
@property _Bool _shouldPreserveBackgroundSessionDisposition;
@property _Bool _disablesOutOfProcessDirectWiFiUsage;
@property _Bool _disablesUseOfProxySession;
@property (copy) NSString *_companionAppBundleIdentifier;
@property (copy) NSString *_watchAppBundleIdentifier;
@property (copy) NSString *_watchExtensionBundleIdentifier;
@property unsigned long long _forcedNetworkServiceType;
@property (copy) NSDictionary *_overriddenDelegateOptions;
@property _Bool _requiresPowerPluggedIn;
@property (copy) NSURL *_directoryForDownloadedFiles;
@property (copy) NSString *_sourceApplicationBundleIdentifier;
@property (copy) NSString *_sourceApplicationSecondaryIdentifier;
@property (copy) NSData *_sourceApplicationAuditTokenData;
@property unsigned long long _TCPAdaptiveReadTimeout;
@property unsigned long long _TCPAdaptiveWriteTimeout;
@property _Bool _reportsDataStalls;
@property _Bool _allowsExpensiveAccess;
@property _Bool _allowsConstrainedNetworkAccess;
@property unsigned long long _multipathAlternatePort;
@property _Bool _allowsPowerNapScheduling;
@property _Bool _preventsIdleSleepOnceConnected;
@property _Bool _sessionSendsLaunchOnDemandEvents;
@property _Bool _collectsTimingData;
@property long long _timingDataOptions;
@property _Bool _shouldSkipPreferredClientCertificateLookup;
@property (copy) id <NSURLSessionAppleIDContext> _appleIDContext;
@property (copy) NSData *_atsContext;
@property double _connectionCachePurgeTimeout;
@property double _connectionCacheCellPurgeTimeout;
@property double _longLivedConnectionCachePurgeTimeout;
@property double _longLivedConnectionCacheCellPurgeTimeout;
@property _Bool _allowsRetryForBackgroundDataTasks;
@property _Bool _onBehalfOfPairedDevice;
@property _Bool _clientIsNotExplicitlyDiscretionary;
@property _Bool _respectsAllowsCellularAccessForDiscretionaryTasks;
@property _Bool _allowsWCA;
@property (copy) NSNumber *_maximumWatchCellularTransferSize;
@property _Bool _overridesBackgroundSessionAutoRedirect;
@property _Bool _performsEVCertCheck;
@property _Bool _infersDiscretionaryFromOriginatingClient;
@property (copy) NSString *_connectionPoolName;
@property _Bool _prefersInfraWiFi;
@property _Bool _allowsMultipathTCP;
@property _Bool _allowsResponseMonitoringDuringBodyTranmission;
@property _Bool _allowsIndefiniteConnections;
@property (copy) NSString *_CTDataConnectionServiceType;
@property _Bool _allowsTCPFastOpen;
@property _Bool _allowsTLSSessionTickets;
@property _Bool _allowsTLSSessionResumption;
@property _Bool _allowsTLSFalseStart;
@property (copy) NSString *_tlsTrustPinningPolicyName;
@property _Bool _allowsTLSFallback;
@property _Bool _preventsDirectWiFiAccess;
@property _Bool _allowTCPIOConnectionStreamTask;
@property unsigned long long _customReadBufferSize;
@property double _customReadBufferTimeout;
@property _Bool _preventsSystemHTTPProxyAuthentication;
@property _Bool _requiresSecureHTTPSProxyConnection;
@property _Bool _duetPreauthorized;
@property long long _duetPreClearedMode;
@property _Bool _requiresSustainedDataDelivery;
@property _Bool _ignoreDidReceiveResponseDisposition;
@property _Bool _alwaysPerformDefaultTrustEvaluation;
@property (copy) NSSet *_suppressedAutoAddedHTTPHeaders;
@property long long _expiredDNSBehavior;
@property long long _IDSMessageTimeout;
@property long long _companionProxyPreference;
@property _Bool _preventsAppSSO;
@property _Bool _allowsSensitiveLogging;
@property unsigned long long requestCachePolicy;
@property double timeoutIntervalForRequest;
@property double timeoutIntervalForResource;
@property unsigned long long networkServiceType;
@property _Bool allowsCellularAccess;
@property _Bool allowsExpensiveNetworkAccess;
@property _Bool allowsConstrainedNetworkAccess;
@property _Bool waitsForConnectivity;
@property (getter=isDiscretionary) _Bool discretionary;
@property (copy) NSString *sharedContainerIdentifier;
@property _Bool sessionSendsLaunchEvents;
@property (copy) NSDictionary *connectionProxyDictionary;
@property int TLSMinimumSupportedProtocol;
@property int TLSMaximumSupportedProtocol;
@property unsigned short TLSMinimumSupportedProtocolVersion;
@property unsigned short TLSMaximumSupportedProtocolVersion;
@property _Bool HTTPShouldUsePipelining;
@property _Bool HTTPShouldSetCookies;
@property unsigned long long HTTPCookieAcceptPolicy;
@property (copy) NSDictionary *HTTPAdditionalHeaders;
@property long long HTTPMaximumConnectionsPerHost;
@property (retain) NSHTTPCookieStorage *HTTPCookieStorage;
@property (retain) NSURLCredentialStorage *URLCredentialStorage;
@property (retain) NSURLCache *URLCache;
@property _Bool shouldUseExtendedBackgroundIdleMode;
@property (copy) NSArray *protocolClasses;
@property long long multipathServiceType;

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (id)defaultSessionConfiguration;
+ (id)ephemeralSessionConfiguration;
+ (id)_defaultProtocolClasses;
+ (id)backgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)sessionConfigurationForSharedSession;
+ (id)_AVBackgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)AVBackgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)backgroundSessionConfiguration:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct _CFHSTSPolicy *)copyHSTSPolicy;
- (struct HTTPConnectionCacheLimits)getConnectionCacheLimits;
- (void *)_copyAttribute:(struct __CFString *)arg1;
- (id)copyImmutableVariant:(CDUnknownBlockType)arg1;
- (id)initWithDisposition:(id)arg1;

@end
