/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

#import <CFNetwork/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSHTTPCookieStorage, NSNumber, NSSet, NSString, NSURL, NSURLCache, NSURLCredentialStorage, NSURLSessionConfiguration;

@protocol NSURLSessionAppleIDContext;

@interface __NSURLSessionEffectiveConfiguration_Base : NSObject <Swift>

{
    NSURLSessionConfiguration *_config;
}

@property (retain, readonly) NSHTTPCookieStorage *HTTPCookieStorage;
@property (retain, readonly) NSURLCache *URLCache;
@property (copy, readonly) NSDictionary *HTTPAdditionalHeaders;
@property (retain, readonly) NSURLCredentialStorage *URLCredentialStorage;
@property (copy, readonly) NSArray *protocolClasses;
@property (readonly) double timeoutIntervalForResource;
@property (readonly) _Bool allowsCellularAccess;
@property (readonly, getter=isDiscretionary) _Bool discretionary;
@property (readonly) _Bool shouldUseExtendedBackgroundIdleMode;
@property (readonly) _Bool waitsForConnectivity;
@property (readonly) _Bool allowsExpensiveNetworkAccess;
@property (readonly) _Bool allowsConstrainedNetworkAccess;
@property (readonly) unsigned long long _forcedNetworkServiceType;
@property (copy, readonly) NSSet *_authenticatorStatusCodes;
@property (copy, readonly) NSString *_companionAppBundleIdentifier;
@property (copy, readonly) NSString *_tcpConnectionPoolName;
@property (readonly) _Bool _forcesNewConnections;
@property (readonly) _Bool _preventsIdleSleepOnceConnected;
@property (readonly) _Bool _requiresPowerPluggedIn;
@property (readonly) _Bool _shouldSkipPreferredClientCertificateLookup;
@property (copy, readonly) NSString *_sourceApplicationBundleIdentifier;
@property (copy, readonly) NSString *_sourceApplicationSecondaryIdentifier;
@property (readonly) unsigned long long _TCPAdaptiveReadTimeout;
@property (readonly) unsigned long long _TCPAdaptiveWriteTimeout;
@property (readonly) _Bool _allowsExpensiveAccess;
@property (readonly) _Bool _allowsPowerNapScheduling;
@property (copy, readonly) id <NSURLSessionAppleIDContext> _appleIDContext;
@property (copy, readonly) NSData *_sourceApplicationAuditTokenData;
@property (readonly) long long _timingDataOptions;
@property (readonly) _Bool _allowsIndefiniteConnections;
@property (readonly) _Bool _allowsMultipathTCP;
@property (readonly) _Bool _allowsResponseMonitoringDuringBodyTranmission;
@property (readonly) _Bool _allowsTCPFastOpen;
@property (readonly) _Bool _allowsTLSSessionTickets;
@property (readonly) _Bool _onBehalfOfPairedDevice;
@property (readonly) unsigned long long _customReadBufferSize;
@property (readonly) double _customReadBufferTimeout;
@property (readonly) _Bool _preventsSystemHTTPProxyAuthentication;
@property (readonly) _Bool _allowsTLSSessionResumption;
@property (readonly) _Bool _requiresSustainedDataDelivery;
@property (readonly) _Bool _duetPreauthorized;
@property (readonly) _Bool _clientIsNotExplicitlyDiscretionary;
@property (copy, readonly) NSString *_tlsTrustPinningPolicyName;
@property (copy, readonly) NSSet *_suppressedAutoAddedHTTPHeaders;
@property (readonly) _Bool _requiresSecureHTTPSProxyConnection;
@property (readonly) long long _expiredDNSBehavior;
@property (readonly) _Bool _alwaysPerformDefaultTrustEvaluation;
@property (readonly) _Bool _preventsAppSSO;
@property (readonly) _Bool _allowsConstrainedNetworkAccess;
@property (readonly) unsigned long long _multipathAlternatePort;
@property (readonly) _Bool _reportsDataStalls;
@property (readonly) _Bool _allowsTLSFalseStart;
@property (readonly) _Bool _allowsWCA;
@property (copy, readonly) NSNumber *_maximumWatchCellularTransferSize;
@property (copy, readonly) NSString *_CTDataConnectionServiceType;
@property (readonly) long long multipathServiceType;
@property (readonly) _Bool _respectsAllowsCellularAccessForDiscretionaryTasks;
@property (copy, readonly) NSString *_connectionPoolName;
@property (copy, readonly) NSURL *_directoryForDownloadedFiles;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (const void *)_copyAttribute:(struct __CFString *)arg1;
- (id)_sessionConfiguration;
- (id)_initWithMeOther:(id)arg1;
- (id)_initWithConfiguration:(id)arg1;

@end
