/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSURLSessionEffectiveConfiguration_Base.h>

@class NSArray, NSData, NSDictionary, NSHTTPCookieStorage, NSNumber, NSSet, NSString, NSURL, NSURLCache, NSURLCredentialStorage;

@protocol NSURLSessionAppleIDContext;

@interface NSURLSessionEffectiveConfiguration : __NSURLSessionEffectiveConfiguration_Base

@property double _connectionCacheCellPurgeTimeout;
@property (copy) NSDictionary *_socketStreamProperties;
@property (retain) NSHTTPCookieStorage *HTTPCookieStorage;
@property (retain) NSURLCache *URLCache;
@property (copy) NSDictionary *HTTPAdditionalHeaders;
@property (retain) NSURLCredentialStorage *URLCredentialStorage;
@property (copy) NSArray *protocolClasses;
@property double timeoutIntervalForResource;
@property _Bool allowsCellularAccess;
@property (getter=isDiscretionary) _Bool discretionary;
@property _Bool shouldUseExtendedBackgroundIdleMode;
@property _Bool waitsForConnectivity;
@property _Bool allowsExpensiveNetworkAccess;
@property _Bool allowsConstrainedNetworkAccess;
@property unsigned long long _forcedNetworkServiceType;
@property (copy) NSSet *_authenticatorStatusCodes;
@property (copy) NSString *_companionAppBundleIdentifier;
@property (copy) NSString *_tcpConnectionPoolName;
@property _Bool _forcesNewConnections;
@property _Bool _preventsIdleSleepOnceConnected;
@property _Bool _requiresPowerPluggedIn;
@property _Bool _shouldSkipPreferredClientCertificateLookup;
@property (copy) NSString *_sourceApplicationBundleIdentifier;
@property (copy) NSString *_sourceApplicationSecondaryIdentifier;
@property unsigned long long _TCPAdaptiveReadTimeout;
@property unsigned long long _TCPAdaptiveWriteTimeout;
@property _Bool _allowsExpensiveAccess;
@property _Bool _allowsPowerNapScheduling;
@property (copy) id <NSURLSessionAppleIDContext> _appleIDContext;
@property (copy) NSData *_sourceApplicationAuditTokenData;
@property long long _timingDataOptions;
@property _Bool _allowsIndefiniteConnections;
@property _Bool _allowsMultipathTCP;
@property _Bool _allowsResponseMonitoringDuringBodyTranmission;
@property _Bool _allowsTCPFastOpen;
@property _Bool _allowsTLSSessionTickets;
@property _Bool _onBehalfOfPairedDevice;
@property unsigned long long _customReadBufferSize;
@property double _customReadBufferTimeout;
@property _Bool _preventsSystemHTTPProxyAuthentication;
@property _Bool _allowsTLSSessionResumption;
@property _Bool _requiresSustainedDataDelivery;
@property _Bool _duetPreauthorized;
@property _Bool _clientIsNotExplicitlyDiscretionary;
@property (copy) NSString *_tlsTrustPinningPolicyName;
@property (copy) NSSet *_suppressedAutoAddedHTTPHeaders;
@property _Bool _requiresSecureHTTPSProxyConnection;
@property long long _expiredDNSBehavior;
@property _Bool _alwaysPerformDefaultTrustEvaluation;
@property _Bool _preventsAppSSO;
@property _Bool _allowsConstrainedNetworkAccess;
@property unsigned long long _multipathAlternatePort;
@property _Bool _reportsDataStalls;
@property _Bool _allowsWCA;
@property (copy) NSNumber *_maximumWatchCellularTransferSize;
@property (copy) NSString *_CTDataConnectionServiceType;
@property long long multipathServiceType;
@property _Bool _respectsAllowsCellularAccessForDiscretionaryTasks;
@property (copy) NSString *_connectionPoolName;
@property (copy) NSURL *_directoryForDownloadedFiles;

+ (id)immutableEffectiveConfigurationFromConfig:(id)arg1;
+ (id)immutableEffectiveConfigurationFromSessionConfig:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end
