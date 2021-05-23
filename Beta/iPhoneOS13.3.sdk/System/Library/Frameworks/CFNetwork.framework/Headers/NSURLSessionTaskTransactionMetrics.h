/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSDate, NSNumber, NSString, NSURLRequest, NSURLResponse, NSUUID, __CFN_TransactionMetrics;

@interface NSURLSessionTaskTransactionMetrics : NSObject

{
    _Bool __connectionTimingCached;
    _Bool __forCache;
    __CFN_TransactionMetrics *__metrics;
    CDStruct_c0a2f610 __connectionTiming;
}

@property (readonly) _Bool _secureConnection;
@property (readonly) _Bool _localCache;
@property (readonly) _Bool _serverPush;
@property (readonly) _Bool _connectionRace;
@property (readonly) unsigned int _redirected;
@property (copy, readonly) NSString *_localAddressAndPort;
@property (copy, readonly) NSString *_remoteAddressAndPort;
@property (copy, readonly) NSUUID *_connectionIdentifier;
@property (readonly) long long _requestHeaderBytesSent;
@property (readonly) long long _responseHeaderBytesReceived;
@property (readonly) long long _responseBodyBytesReceived;
@property (readonly) long long _responseBodyBytesDecoded;
@property (readonly) _Bool _apsRelayAttempted;
@property (readonly) _Bool _apsRelaySucceeded;
@property (readonly) long long _totalBytesSent;
@property (readonly) long long _totalBytesReceived;
@property (readonly) int _negotiatedTLSProtocol;
@property (readonly) unsigned short _negotiatedTLSCipher;
@property (readonly) _Bool _usesMultipath;
@property (nonatomic) CDStruct_c0a2f610 _connectionTiming;
@property (nonatomic) _Bool _connectionTimingCached;
@property (nonatomic, readonly) __CFN_TransactionMetrics *_metrics;
@property (nonatomic, readonly) _Bool _forCache;
@property (copy, readonly) NSURLRequest *request;
@property (copy, readonly) NSURLResponse *response;
@property (copy, readonly) NSDate *fetchStartDate;
@property (copy, readonly) NSDate *domainLookupStartDate;
@property (copy, readonly) NSDate *domainLookupEndDate;
@property (copy, readonly) NSDate *connectStartDate;
@property (copy, readonly) NSDate *secureConnectionStartDate;
@property (copy, readonly) NSDate *secureConnectionEndDate;
@property (copy, readonly) NSDate *connectEndDate;
@property (copy, readonly) NSDate *requestStartDate;
@property (copy, readonly) NSDate *requestEndDate;
@property (copy, readonly) NSDate *responseStartDate;
@property (copy, readonly) NSDate *responseEndDate;
@property (copy, readonly) NSString *networkProtocolName;
@property (readonly, getter=isProxyConnection) _Bool proxyConnection;
@property (readonly, getter=isReusedConnection) _Bool reusedConnection;
@property (readonly) long long resourceFetchType;
@property (readonly) long long countOfRequestHeaderBytesSent;
@property (readonly) long long countOfRequestBodyBytesSent;
@property (readonly) long long countOfRequestBodyBytesBeforeEncoding;
@property (readonly) long long countOfResponseHeaderBytesReceived;
@property (readonly) long long countOfResponseBodyBytesReceived;
@property (readonly) long long countOfResponseBodyBytesAfterDecoding;
@property (copy, readonly) NSString *localAddress;
@property (copy, readonly) NSNumber *localPort;
@property (copy, readonly) NSString *remoteAddress;
@property (copy, readonly) NSNumber *remotePort;
@property (copy, readonly) NSNumber *negotiatedTLSProtocolVersion;
@property (copy, readonly) NSNumber *negotiatedTLSCipherSuite;
@property (readonly, getter=isCellular) _Bool cellular;
@property (readonly, getter=isExpensive) _Bool expensive;
@property (readonly, getter=isConstrained) _Bool constrained;
@property (readonly, getter=isMultipath) _Bool multipath;

+ (id)new;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetrics:(id)arg1 forCache:(_Bool)arg2;
- (void)translateConnectionTiming;

@end
